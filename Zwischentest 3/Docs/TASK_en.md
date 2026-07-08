<h1>Interim test 3</h1>
<h2>Task</h2>
<p>First, read the instructions and then consider how you need to represent the data.
  <br>Write a program that implements the following functionalities:</p>
<ul>
  <li>The program is designed to represent a hockey team, initially consisting of ten players. The players start with 0 penalties, 0 ice time, and a number, increasing from 1 to 10.<br>Players can be on the ice, on the bench, or in the penalty box. At the start, players 1 through 5 are on the ice in ascending order (and therefore already have an ice time value of 1), and players 6 through 10 are on the bench in ascending order.<br>
  </li>
  <li>In a loop, display the message <strong>"Enter c, n, t, p or x: "</strong> Output and then read in a character. Depending on what was entered, one of the following actions should be performed:
    <br>
    <ul>
      <li><strong>'c' </strong>Substitute a player off the ice with a player on the bench.<br>Enter the message <strong>"Enter ice player number:"</strong> select the desired option and then enter the number of a player.<br>Enter the message <strong>"Enter bench player number:"</strong> select the desired option and then enter the number of a player.<br>If one of the entries was invalid (i.e., the respective player does not exist in the selected area), the message will be displayed. <strong>"ERROR: Invalid change!"</strong> issued.<br>Otherwise, the player off the ice is swapped with the player on the bench. The ice time rating of the player entering the ice is increased by 1.</li><li><strong>'n'</strong> Creates a new player on the bench.<br>A new player (with a consecutive number) is placed at the front of the bench, and then the announcement <strong>"Added player X to bench"</strong> issued, where X is the number of the new player.<br></li>
      <li><strong>'t' </strong><span>The entire team is spending.<br>Enter the message <strong>"On ice"</strong> out, followed by a message for each player on the ice: <strong>"Player X - Ice time Y - Penalties Z"</strong>, where X is the player's number, Y is his Ice Age value and Z is his penalties.<br>Proceed in the same way with the bank (first the notification). <strong>"On bench"</strong> followed by the players) and with the players who are currently serving a penalty (<strong>"Penalties"</strong>, followed by the players).<br>For all distributions, the players should be arranged so that the player who entered the area (ice, bench, penalty box) last is distributed first, followed by the player who entered second to last, and so on.</span><br>
      </li>
      <li><strong>'p' </strong><span>Imposes or terminates a sentence.</span><br>Enter the message <strong>"Enter player number:"</strong> select the desired option and then enter the number of a player. <br>If this player is currently on the ice, he goes to the penalty box and his penalties are increased by 1. <br>If this player is currently in the penalty box, he comes onto the ice and his ice time value is increased by 1.<br>Otherwise the message will be displayed <strong>"ERROR: Penalty player on bench!"</strong> issued.
        <br>
      </li>
      <li><strong>'x' </strong><span>The program ends.</span>
<br>
      </li>
    </ul>
  </li>
</ul>
<h2>Important instructions</h2>
<ul>

  <li>There is no upper limit to the number of players. <strong>Therefore, use dynamic memory and lists to manage players. The use of large arrays is not permitted!</strong></li><li><span style="font-size: 0.9375rem;">The use of&bsp;</span><strong style="font-size: 0.9375rem;">global variables</strong><span style="font-size: 0.9375rem;">is</span><strong style="font-size: 0.9375rem;">not allowed</strong><span style="font-size: 0.9375rem;">.</span></li><li>You can assume that all input is of the correct type – characters when characters are expected, numbers when numbers are expected. The entered characters are always only... <code>'c'</code>, <code>'n'</code>, <code>'t'</code>, <code>'p'</code> or <code>'x'</code>.
    <br>
  </li>
  <li>Use functions to avoid writing a lot of duplicated code.</li>
  <li>Give <strong>Line breaks always occur before a new line, not at the end.</strong>If you follow these guidelines, the formatting should be easier to achieve and match the expected output. The program will therefore start.
    even with a line break.</li>
  <li>In CodeRunner, each input is confirmed by a line break, which is not visible in the output. If you start the program outside of CodeRunner, enter values ​​yourself, and thereby produce line breaks,
    This affects the output (more line breaks than with automatic testing in CodeRunner).</li>
</ul>