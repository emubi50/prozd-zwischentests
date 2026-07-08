#include <stdio.h>

//struct definitions and type definition for easier use
typedef struct player {
    int id;
    int wins;
    int losses;
    int rank;
} player_t;

typedef struct game {
    char type;
    int winner_id;
    int loser_id;
} game_t;

//function declarations
int newGame(player_t all_players[5], game_t saved_games[20], int total_games);
void ranking(player_t all_players[5]);
void playerStats(player_t all_players[5]);
void gameList(game_t saved_games[20], int total_games);

int main() {

    //player declarations and definitions
    player_t all_players[5];
    for(int i = 0; i < 5; i++) {
        all_players[i].id = i + 1;
        all_players[i].wins = all_players[i].losses = 0;
        all_players[i].rank = 100;
    }

    //array, where all games are saved
    game_t saved_games[20];
    int total_games = 0; //counter of all saved games for gameList()

    char select;

    while(select != 'x') {
        printf("\nEnter n, r, p, g or x: ");
        scanf(" %c", &select);
        switch(select) {
            case 'n':
                total_games = newGame(all_players, saved_games, total_games);
                break;
            case 'r':
                ranking(all_players);
                break;
            case 'p':
                playerStats(all_players);
                break;
            case 'g':
                gameList(saved_games, total_games);
                break;
            case 'x':
                break;
            default:
                printf("\nInvalid Input!");
        }
    }
    return 0;
}

//function definitions

int newGame(player_t all_players[5], game_t saved_games[20], int total_games) {
    //variable declarations
    char type;
    int winner_id;
    int loser_id;

    //variable definitions
    printf("\nEnter game type (c,r): ");
    scanf(" %c", &type);
    printf("\nEnter winner ID (1-5): ");
    scanf("%d", &winner_id);
    printf("\nEnter loser ID (1-5): ");
    scanf("%d", &loser_id);

    //player win/loss adjustments
    if(winner_id != loser_id) {
        all_players[winner_id - 1].wins += 1;
        all_players[loser_id - 1].losses += 1;
        if(type == 'r') { //rank adjustments if "ranked" is selected
            all_players[winner_id - 1].rank += 50;
            if(all_players[loser_id - 1].rank < 50) {
                all_players[loser_id - 1].rank = 0; //prevent negative rank
            } else {
                all_players[loser_id - 1].rank -= 50;
            }
        }
        
        //save new game into game array
        saved_games[total_games].type = type;
        saved_games[total_games].winner_id = winner_id;
        saved_games[total_games].loser_id = loser_id;
        printf("\nNew game added");
    } else {
        printf("\nWinner and loser identical!");
        return total_games;
    }

    //adjust total games
    if(total_games == 19) {
        total_games = 0;
    } else {
        total_games++;
    }
    return total_games;
}

void ranking(player_t all_players[5]) {
    int top_rank = 0; //determine the top rank from all five players
    for(int i = 0; i < 5; i++) {
        if(all_players[i].rank > top_rank) {
            top_rank = all_players[i].rank;
        }
    }
    
    //print all player ranks
    printf("\nPlayer ranks");
    for(int i = 0; i < 5; i++) {
        printf("\nPlayer %d - Rank %d", all_players[i].id, all_players[i].rank);
        if(all_players[i].rank == top_rank) {
            printf(" - TOP"); //mark top ranks
        }
    }

}

void playerStats(player_t all_players[5]) {
    int player_id;
    float winrate;
    printf("\nSelect player (1-5): ");
    scanf("%d", &player_id);

    if(all_players[player_id - 1].wins == 0) {
        winrate = 0.00f; //if no wins, then winrate is 0%
    } else if(all_players[player_id - 1].losses == 0) {
        winrate = 100.00f; //if no losses, then winrate is 100%
    } else { //winrate is all wins divided by total games
        winrate = ((float) all_players[player_id - 1].wins / (float) (all_players[player_id - 1].wins + all_players[player_id - 1].losses)) * 100;
    }

    //print player stats
    printf("\nPlayer %d - Rank %d", player_id, all_players[player_id - 1].rank);
    printf("\nWins/Losses/Winrate: %d/%d/%.2f %%", all_players[player_id - 1].wins, all_players[player_id - 1].losses, winrate);
}

void gameList(game_t saved_games[20], int total_games) {
    char type;
    int game_count = 0; //determine if there is a saved game of the selected type
    printf("\nRanked or casual? (r,c): ");
    scanf(" %c", &type);

    for(int i = 0; i < total_games; i++) { //loop through all saved games within the array
        if(saved_games[i].type == type) {
            printf("\nWinner: %d - Loser: %d", saved_games[i].winner_id, saved_games[i].loser_id);
            game_count++;
        }
    }
    if(total_games == 0 || game_count == 0) { //either no games overall or no games of the selected type
        printf("\nThere are no games yet.");
    }
}