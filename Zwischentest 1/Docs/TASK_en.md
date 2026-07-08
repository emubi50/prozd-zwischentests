<h1>Interim test 1</h1>
<h2>Task</h2>
<p>Write a program that calculates the area of ​​an object from given length and width values. Additionally, it should store the three largest lengths and widths and output the three largest areas. Implement the following functionalities:</p>
<ul>
  <li>Display the message in an endless loop. <strong>"Enter n, t OR x: "</strong> Output and then read in a character. Depending on what was entered, one of the following actions should be performed:
    <br>
    <ul>
      <li><strong>'n' </strong>Enter the message <strong>"Enter length,width: "</strong> output the values ​​and then read the length and width of the area as an integer in the format a,b.
        <br>If both length and width are greater than 0, the area is marked with the message <strong>"Area: X"</strong> The output will show the area, where X is the area. Otherwise, the message will be displayed. <strong>"Invalid length or width"</strong> issued.
        <br>If the length or width is greater than at least one of the three largest length or width values ​​entered so far, the new length or width is sorted and saved as the corresponding top length or width. One of the following messages is then displayed:
        depending on where the new top length or width is located:
        <br>
        <ul>
          <li><strong>"New greatest length: X"</strong>
          </li>
          <li><strong>"New second greatest length: X"</strong>
          </li>
          <li><strong>"New third greatest length: X"
            </strong>
            <br>
            <br>
          </li>
          <li><strong>"New greatest width: X"</strong>
          </li>
          <li><strong>"New second greatest width: X"</strong>
          </li>
          <li><strong>"New third greatest width: X"</strong>
          </li>
        </ul>
      </li>
      X is the value of either the length or the width.
      <br>
      <li><strong>'t'</strong>
        Displays the top three areas. To do this, first enter the message. <strong>"Biggest areas"</strong> out, followed by up to three issues of <strong>"Area: X"</strong> where X is the area obtained by combining the greatest length with the greatest
        The calculation multiplies the width, the second largest length by the second largest width, and the third largest length by the third largest width. Areas should only be returned if corresponding top lengths or widths have already been entered. This gives
        Since there is no single largest area because no top length or width yet exists, the message will be <strong>"No areas yet"</strong> output. If at least one largest area has been output, the average area should also be output.
        largest areas with the report <strong>"Average area: X"</strong>Output with double precision and two decimal places, X is the average area.
        <br>
      </li>
      <li><strong>'x' </strong>Break the loop, output the top surfaces again, and end the program.
        <br>
      </li>
    </ul>
  </li>
</ul>
<h2>Example</h2>
<p></p><table style="width: 100%;background-color:black;">
<tbody>
  <tr>
    <td><pre style="color:white;"><strong>
Enter n, t OR x: <span style="color:red;">n</span>

Enter length,width: <span style="color:red;">10.5</span>

Area: 50
New greatest length: 10
New greatest width: 5
Enter n, t OR x: <span style="color:red;">n</span>

Enter length,width: <span style="color:red;">13.1</span>

Area: 13
New greatest length: 13
New second greatest width: 1
Enter n, t OR x: <span style="color:red;">n</span>

Enter length,width: <span style="color:red;">2.77</span>

Area: 154
New third greatest length: 2
New greatest width: 77
Enter n, t OR x: <span style="color:red;">n</span>

Enter length,width: <span style="color:red;">6.10</span>

Area: 60
New third greatest length: 6
New second greatest width: 10
Enter n, t OR x: <span style="color:red;">n</span>

Enter length,width: <span style="color:red;">1.1</span>

Area: 1
Enter n, t OR x: <span style="color:red;">n</span>

Enter length,width: <span style="color:red;">6.5</span>

Area: 30
Enter n, t OR x: <span style="color:red;">t</span>

Biggest areas
Area: 1001
Area: 100
Area: 30
Average area: 377.00
Enter n, t OR x: <span style="color:red;">n</span>

Enter length,width: <span style="color:red;">9999.10</span>

Area: 99990
New greatest length: 9999
New third greatest width: 10
Enter n, t OR x: <span style="color:red;">n</span>

Enter length,width: <span style="color:red;">10.9999</span>

Area: 99990
New greatest width: 9999
Enter n, t OR x: <span style="color:red;">x</span>

Biggest areas
Area: 99980001
Area: 1001
Area: 100
Average area: 33327034.00</strong></pre>
		</td>
	</tr>
</tbody>
</table>
<h2>Important instructions</h2>
<ul>
  
  <li>You can assume that all input is of the correct type – characters if submission types are expected, numbers if points are expected. The entered characters are always only <code>'n'</code>, <code>'t'</code> or <code>'x'</code>. <br></li>
  <li>Using reusable functions can save you a lot of duplicated code.
    <br>
  </li>
  <li>Use the same input and output structure as in the example above to successfully pass the automated tests. The red text is only for highlighting user input in the example; you do not need to implement this coloring in your program!<br></li>
  <li>Give <strong>Line breaks always occur before a new line, not at the end.</strong>If you follow these guidelines, the formatting should be easier to achieve and match the expected output. The program will therefore start.
    even with a line break.</li>
  <li>In CodeRunner, each input is confirmed by a line break, which is not visible in the output. If you start the program outside of CodeRunner, enter values ​​yourself, and thereby produce line breaks,
    This affects the output (more line breaks than with automatic testing in CodeRunner).</li>
</ul>