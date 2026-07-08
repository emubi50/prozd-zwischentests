<h1>Zwischentest 1</h1>
<h2>Aufgabe</h2>
<p>Schreiben Sie ein Programm, das aus Längen- und Breiteneingaben die Flächen berechnet. Zusätzlich speichert es die 3 größten Längen und Breiten und gibt die drei größten Flächen aus. Implementieren Sie hierfür folgende Funktionalitäten:</p>
<ul>
  <li>Geben Sie in einer Endlosschleife die Meldung <strong>"Enter n, t OR x: "</strong> aus und lesen Sie dann einen char ein. Je nachdem was eingegeben wurde, soll eine der folgenden Aktionen ausgeführt werden:
    <br>
    <ul>
      <li><strong>'n' </strong>Geben Sie die Meldung <strong>"Enter length,width: "</strong> aus und lesen Sie dann die Länge und Breite der Fläche als Integer im Format a,b ein.
        <br>Falls sowohl Länge als auch Breite größer als 0 sind, wird die Fläche mit der Meldung <strong>"Area: X"</strong> ausgegeben, wobei X die Fläche ist. Ansonsten wird die Meldung <strong>"Invalid length or width"</strong> ausgegeben.
        <br>Sind Länge oder Breite größer als zumindest einer der drei größten Längen- oder Breitenwerte die bisher eingegeben wurden, wird die neue Länge oder Breite als die entsprechende Top-Länge oder Breite einsortiert und gespeichert. Dabei wird eine der folgenden Meldungen ausgegeben,
        je nachdem an welcher Stelle die neue Top-Länge oder Breite steht:
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
      X ist jeweils der Wert der Länge oder Breite.
      <br>
      <li><strong>'t'</strong>
        Gibt die drei Top-Flächen aus. Geben Sie dazu zuerst die Meldung <strong>"Biggest areas"</strong> aus, gefolgt von bis zu drei Ausgaben von <strong>"Area: X"</strong> wobei X die Fläche ist, die sich ergibt wenn man die größte Länge mit der größten
        Breite, die zweitgrößte Länge mit der zweitgrößten Breite und die drittgrößte Länge mit der drittgrößten Breite multipliziert. Dabei sollen nur Flächen ausgegeben werden wenn bereits entsprechende Top-Längen oder Breiten eingegeben wurden. Gibt
        es keine einzige größte Fläche, weil noch keine Top-Länge oder Breite existiert, wird die Meldung <strong>"No areas yet"</strong> ausgegeben. Falls zumindest eine größte Fläche ausgegeben wurde, soll danach auch noch die Durchschnittsfläche der
        größten Flächen mit der Meldung <strong>"Average area: X"</strong>&nbsp;mit doppelter Genauigkeit und zwei Nachkommastellen ausgegeben werden, X ist die Durchschnittsfläche.
        <br>
      </li>
      <li><strong>'x' </strong>Unterbrechen Sie die Schleife, geben Sie nochmals die Top-Flächen aus und beenden Sie das Programm.
        <br>
      </li>
    </ul>
  </li>
</ul>
<h2>Beispiel</h2>
<p></p><table style="width: 100%;background-color:black;">
<tbody>
  <tr>
    <td><pre style="color:white;"><strong>
Enter n, t OR x: <span style="color:red;">n</span>

Enter length,width: <span style="color:red;">10,5</span>

Area: 50
New greatest length: 10
New greatest width: 5
Enter n, t OR x: <span style="color:red;">n</span>

Enter length,width: <span style="color:red;">13,1</span>

Area: 13
New greatest length: 13
New second greatest width: 1
Enter n, t OR x: <span style="color:red;">n</span>

Enter length,width: <span style="color:red;">2,77</span>

Area: 154
New third greatest length: 2
New greatest width: 77
Enter n, t OR x: <span style="color:red;">n</span>

Enter length,width: <span style="color:red;">6,10</span>

Area: 60
New third greatest length: 6
New second greatest width: 10
Enter n, t OR x: <span style="color:red;">n</span>

Enter length,width: <span style="color:red;">1,1</span>

Area: 1
Enter n, t OR x: <span style="color:red;">n</span>

Enter length,width: <span style="color:red;">6,5</span>

Area: 30
Enter n, t OR x: <span style="color:red;">t</span>

Biggest areas
Area: 1001
Area: 100
Area: 30
Average area: 377.00
Enter n, t OR x: <span style="color:red;">n</span>

Enter length,width: <span style="color:red;">9999,10</span>

Area: 99990
New greatest length: 9999
New third greatest width: 10
Enter n, t OR x: <span style="color:red;">n</span>

Enter length,width: <span style="color:red;">10,9999</span>

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
<h2>Wichtige Hinweise</h2>
<ul>
  
  <li>Sie können davon ausgehen, dass alle Eingaben den richtigen Typ haben - Zeichen, wenn Abgabetypen erwartet werden, Zahlen, wenn Punkte erwartet werden. Die eingebenen Zeichen sind immer nur <code>'n'</code>, <code>'t'</code> oder <code>'x'</code>. <br></li>
  <li>Durch Einsatz von wiederverwendbaren Funktionen können Sie sich viel duplizierten Code ersparen.
    <br>
  </li>
  <li>Verwenden Sie dieselbe Ein- und Ausgabestruktur wie im obenstehenden Beispiel, damit Sie die automatisierten Tests erfolgreich bestehen können.&nbsp;Der rote Text dient nur zur Hervorhebung des User Inputs im Beispiel, Sie müssen diese Färbung nicht im Programm abbilden!<br></li>
  <li>Geben Sie <strong>Zeilenumbrüche immer vor einer neuen Zeile aus und nicht am Ende</strong>. Wenn Sie sich daran halten, sollte die Formatierung leichter zur Übereinstimmung mit der erwarteten Ausgabe gebracht werden können. Das Programm startet daher
    auch mit einem Zeilenumbruch.</li>
  <li>In CodeRunner wird jede einzelne Eingabe von einem Zeilenumbruch bestätigt, der in der Ausgabe aber nicht sichtbar ist. Wenn Sie außerhalb von CodeRunner das Programm starten, selber Werte eingeben und dabei Zeilenumbrüche produzieren,
    wirkt sich das auf die Ausgabe aus (mehr Zeilenumbrüche als beim automatischen Testen in CodeRunner).</li>
</ul>