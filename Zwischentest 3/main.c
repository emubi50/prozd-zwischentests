#include <stdio.h>
#include <stdlib.h>

struct node //player linked list definition
{
    int penalty;
    int playtime;
    int number;
    struct node* next;
};

typedef struct node node_t;

node_t* createNode(int penalty, int playtime, int number)
{
    node_t* new_node = (node_t*)malloc(sizeof(node_t));
    new_node -> penalty = penalty;
    new_node -> playtime = playtime;
    new_node -> number = number;
    new_node -> next = NULL;
    return new_node;
}

node_t* addFirst(int penalty, int playtime, int number, node_t* head)
{
    node_t* new_head = createNode(penalty, playtime, number);
    new_head -> next = head;
    head = new_head;
    return head;
}

int moveNode(int player_number, node_t** old_head, node_t** new_head)
{
    node_t* temp = *old_head;
    node_t* before_temp = NULL;

    while(temp != NULL && temp -> number != player_number)
    {
        before_temp = temp;
        temp = temp -> next;
    }
    if(temp == NULL)
    {
        return 1; //positive error code
    }
    else
    {
        if(before_temp == NULL)   //if temp is the head of the old list
        {
            *old_head = (*old_head) -> next;
        }
        else if(before_temp != NULL)
        {
            before_temp -> next = temp -> next;
        }
        temp -> next = *new_head;
        *new_head = temp;
        return 0;
    }

}

void increasePlaytime(int player_number, node_t* head)
{
    while(head -> number != player_number)
    {
        head = head -> next;
    }
    head -> playtime += 1;
}

void increasePenalty(int player_number, node_t* head)
{
    while(head -> number != player_number)
    {
        head = head -> next;
    }
    head -> penalty += 1;
}

void printList(node_t* head)
{
    node_t* temp = head;
    while(temp != NULL)
    {
        printf("\nPlayer %d - Ice time %d - Penalties %d", temp -> number, temp -> playtime, temp -> penalty);
        temp = temp -> next;
    }
}

void freeList(node_t** head)
{
    node_t* temp = *head;
    while(*head != NULL)
    {
        temp = *head;
        *head = (*head) -> next;
        free(temp);
    }
}

// Main loop function declarations
void changePlayer(node_t** ice_head, node_t** bench_head);
void newPlayer(int node_counter, node_t** bench_head);
void teamStats(node_t* ice_head, node_t* bench_head, node_t* penalty_head);
void penalty(node_t** ice_head, node_t** penalty_head);

int main()
{
    //linked list initialization, one per location
    node_t* head = NULL;
    node_t* ice_head = head;
    node_t* bench_head = head;
    node_t* penalty_head = head;
    for(int i = 10; i > 0; i--)
    {
        if(i > 5)
        {
            bench_head = addFirst(0, 0, i, bench_head);
        }
        else
        {
            ice_head = addFirst(0, 1, i, ice_head);
        }
    }
    int player_counter = 10;

    char select;
    do
    {
        printf("\nEnter c, n, t, p or x: ");
        scanf(" %c", &select);
        switch(select)
        {
        case 'c':
            changePlayer(&ice_head, &bench_head);
            break;
        case 'n':
            player_counter++;
            newPlayer(player_counter, &bench_head);
            break;
        case 't':
            teamStats(ice_head, bench_head, penalty_head);
            break;
        case 'p':
            penalty(&ice_head, &penalty_head);
            break;
        case 'x':
            freeList(&ice_head);
            freeList(&bench_head);
            freeList(&penalty_head);
            return 0;
        }
    }
    while(select != 'x');
}

// Main loop function definitions
void changePlayer(node_t** ice_head, node_t** bench_head)
{
    int ice_player_number;
    int bench_player_number;
    printf("\nEnter ice player number: ");
    scanf("%d", &ice_player_number);
    printf("\nEnter bench player number: ");
    scanf("%d", &bench_player_number);
    int errorCheck1 = moveNode(ice_player_number, ice_head, bench_head);
    if(errorCheck1 == 1)
    {
        printf("\nERROR: Invalid change!");
        return;
    }
    int errorCheck2 = moveNode(bench_player_number, bench_head, ice_head);
    if(errorCheck2 == 1)
    {
        printf("\nERROR: Invalid change!");
        moveNode(ice_player_number, bench_head, ice_head);
        return;
    }
    increasePlaytime(bench_player_number, *ice_head);
}

void newPlayer(int node_counter, node_t** bench_head)
{
    *bench_head = addFirst(0, 0, node_counter, *bench_head);
    printf("\nAdded player %d to bench", node_counter);
}

void teamStats(node_t* ice_head, node_t* bench_head, node_t* penalty_head)
{
    printf("\nOn ice");
    printList(ice_head);
    printf("\nOn bench");
    printList(bench_head);
    printf("\nPenalties");
    printList(penalty_head);
}

void penalty(node_t** ice_head, node_t** penalty_head)
{
    int player_number;
    printf("\nEnter player number: ");
    scanf("%d", &player_number);
    int check_location = moveNode(player_number, ice_head, penalty_head);
    if(check_location == 0)   //Player was on ice
    {
        increasePenalty(player_number, *penalty_head);
    }
    else
    {
        check_location = moveNode(player_number, penalty_head, ice_head);
        if(check_location == 0) //player was in penalty box
        {
            increasePlaytime(player_number, *ice_head);
        }
        
        else
        {
            printf("\nERROR: Penalty player on bench!");
        }
    }
}
