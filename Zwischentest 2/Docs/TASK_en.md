<h1>Interim test 2</h1>
<h2>Task</h2>
<p>Define two structs to represent players and games played; first read the instructions and then consider how you need to represent the data.<br>Write a program that implements the following functionalities</p>
<ul>
  <li>The program should manage a ranking for five players. Players start with 0 wins, 0 losses, a rank of 100, and an ID from 1 to 5. All entered matches should be saved; they have one type (ranked and casual) and record both the winner and loser of each match. You can define an array with 20 entries here and should have no problems with the test cases.<br></li><li>In a loop, display the message <strong>"Enter n, r, p, g or x: "</strong> Output and then read in a character. Depending on what was entered, one of the following actions should be performed:
    <br>
    <ul>
      <li><strong>'n' </strong>Creates a new played game.<br>Enter the message <strong>"Enter game type (c,r): "</strong> Select the game type and then enter "ranked" and "casual".<br>Then enter the message <strong>"Enter winner ID (1-5): "</strong> Select the appropriate ID and save the winner in the game.<br>Then enter the message <strong>"Enter loser ID (1-5): "</strong> out, read the 
Enter the corresponding ID and save the loser in the game.<br>If the winner and loser are the same player, the message will be displayed. <strong>"Winner and loser identical!"</strong> The game is not saved. Otherwise, the game is saved. The winner receives one win, the loser one loss. If the game is of the "ranked" type, the winner's rank is increased by 50 and the loser's rank is decreased by 50 (the rank cannot fall below 0). Then the following message is displayed. <strong>"New game added"</strong> issued.<br>
      </li><li><strong>'r' </strong><span>Lists the players with their rank and marks those with the highest rank.<br>Enter the message <strong>"Player ranks"</strong> out, followed by a message for each player <strong>"Player X - Rank Y"</strong>, where X is the player's ID and Y is their rank. For all players with the highest rank, the following should also be displayed in the same row: <strong>"- TOP"</strong> will be issued.</span><br></li><li><strong>'p' </strong>Displays the statistics of a specific player.<br>Enter the message <strong>"Select player (1-5):"</strong> Select the ID of a player and then read it. The message for this player should then appear first. <span><strong>"Player X - Rank Y"</strong> The following message will be displayed, where X is the player's ID and Y is their rank. <strong>"Wins/Losses/Winrate: X/Y/Z%"</strong> output where X is the number of wins, Y is the number of losses, and Z is the percentage of games won (double precision, 2 decimal places).</span><br></li><li><strong>'G'</strong> Outputs a list of all games (filtered by type).<br>Enter the message <strong>"Ranked or casual? (r,c): "</strong> Exit and then read in a character.<br>If the input is 'r', all games of type "ranked" should be displayed in the order in which they were saved.<br>If the input is 'c', all games of type "casual" should be displayed in the order in which they were saved.<br>The games will be announced <strong>"Winner: X - Loser: Y"</strong> output, where X is the ID of the winner and Y is the ID of the loser.<br>If there are no games of the selected type, the message will be displayed. <strong>"There are no games yet."</strong> issued.<br></li>
      <li><strong>'x' </strong><span>End the program.</span>
        <br>
      </li>
    </ul>
  </li>
</ul>
<h2>Important instructions</h2>
<ul>

  <li>You can assume that all inputs have the correct type and valid values.
    <br>
  </li><li>To display the percent sign ('%') using <code>printf</code> To output the desired result, you must use a double percent sign in the format string, as a single percent sign is used as a control character for data types – e.g. <code>printf("12 %%")</code> generates the output <code>12%</code>.</li><li>The use of <strong>global variables</strong> is <strong>not allowed</strong>.</li>
  <li>Use functions to structure and divide your code effectively.</li>
  <li>Give <strong>Line breaks always occur before a new line, not at the end.</strong>If you follow these guidelines, the formatting should be easier to achieve and match the expected output. The program will therefore start.
    even with a line break.</li>
  <li>In CodeRunner, each input is confirmed by a line break, which is not visible in the output. If you start the program outside of CodeRunner, enter values ​​yourself (see example output), and thereby produce line breaks,
    This affects the output (more line breaks than with automatic testing in CodeRunner).</li>
</ul>