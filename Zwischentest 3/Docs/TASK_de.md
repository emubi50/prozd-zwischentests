<h1>Zwischentest 3</h1>
<h2>Aufgabe</h2>
<p>Lesen Sie sich zuerst die Angabe durch und überlegen Sie sich dann, welche Daten Sie wie abbilden müssen.
  <br>Schreiben Sie ein Programm, das folgende Funktionalitäten implementiert:</p>
<ul>
  <li>Das Programm soll ein Hockey-Team abbilden, anfangs gibt es zehn Spieler im Team. Die Spieler beginnen mit 0 Strafen, 0 Eiszeit und einer Nummer, aufsteigend von 1 bis 10.<br>Die Spieler können entweder auf dem Eis, der Bank oder in der Strafbox sein. Zu Beginn sind die Spieler 1 bis 5 in aufsteigender Reihenfolge auf dem Eis (und haben deshalb bereits einen Eiszeit-Wert von 1), und die Spieler 6 bis 10 in aufsteigender Reihenfolge auf der Bank.<br>
  </li>
  <li>Geben Sie in einer Schleife die Meldung <strong>"Enter c, n, t, p or x: "</strong> aus und lesen Sie dann einen char ein. Je nachdem was eingegeben wurde, soll eine der folgenden Aktionen ausgeführt werden:
    <br>
    <ul>
      <li><strong>'c' </strong>Wechselt einen Spieler vom Eis mit einem Spieler auf der Bank.<br>Geben Sie die Meldung <strong>"Enter ice player number: "</strong> aus und lesen Sie dann die Nummer eines Spielers ein.<br>Geben Sie die Meldung <strong>"Enter bench player number: "</strong> aus und lesen Sie dann die Nummer eines Spielers ein.<br>War eine der Eingaben ungültig (gibt es also den jeweiligen Spieler nicht im gewählten Bereich), wird die Meldung <strong>"ERROR: Invalid change!"</strong> ausgegeben.<br>Ansonsten wird der Spieler vom Eis mit dem Spieler auf der Bank getauscht. Der Eiszeit-Wert des Spielers, der nun aufs Eis kommt, wird um 1 erhöht.</li><li><strong>'n'</strong> Erstellt einen neuen Spieler auf der Bank.<br>Ein neuer Spieler (mit fortlaufender Nummer) wird am Anfang der Bank eingereiht und dann die Meldung <strong>"Added player X to bench"</strong> ausgegeben, wobei X die Nummer des neuen Spielers ist.<br></li>
      <li><strong>'t' </strong><span>Gibt das gesamte Team aus.<br>Geben Sie die Meldung <strong>"On ice"</strong> aus, gefolgt von einer Meldung für jeden Spieler der am Eis ist: <strong>"Player X - Ice time Y - Penalties Z"</strong>, wobei X die Nummer des Spielers, Y sein Eiszeit-Wert und Z seine Strafen sind.<br>Verfahren Sie genauso mit der Bank (zuerst die Meldung <strong>"On bench"</strong> gefolgt von den Spielern) und mit den Spielern die gerade eine Strafe haben (<strong>"Penalties"</strong>, gefolgt von den Spielern).<br>Bei allen Ausgaben sollen die Spieler so angeordnet sein, dass der Spieler, der als letzter in den Bereich (Eis, Bank, Strafbox) gekommen ist zuerst ausgegeben wird, gefolgt vom Spieler der als vorletzter gekommen ist und so weiter.</span><br>
      </li>
      <li><strong>'p' </strong><span>Verhängt oder beendet eine Strafe.</span><br>Geben Sie die Meldung <strong>"Enter player number: "</strong> aus und lesen Sie dann die Nummer eines Spielers ein. <br>Ist dieser Spieler derzeit am Eis, kommt er in die Strafbox und seine Strafen werden um 1 erhöht. <br>Ist dieser Spieler derzeit in der Strafbox, kommt er aufs Eis und sein Eiszeit-Wert wird um 1 erhöht.<br>Ansonsten wird die Meldung <strong>"ERROR: Penalty player on bench!"</strong> ausgegeben.
        <br>
      </li>
      <li><strong>'x' </strong><span>Beendet das Programm.</span>
<br>
      </li>
    </ul>
  </li>
</ul>
<h2>Wichtige Hinweise</h2>
<ul>

  <li>Es gibt kein oberes Limit für die Anzahl der Spieler, <strong>verwenden Sie daher dynamischen Speicher und Listen zur Verwaltung der Spieler. Die Verwendung großer Arrays ist nicht zulässig!</strong></li><li><span style="font-size: 0.9375rem;">Die Verwendung von&nbsp;</span><strong style="font-size: 0.9375rem;">globalen Variablen</strong><span style="font-size: 0.9375rem;">&nbsp;ist&nbsp;</span><strong style="font-size: 0.9375rem;">nicht erlaubt</strong><span style="font-size: 0.9375rem;">.</span></li><li>Sie können davon ausgehen, dass alle Eingaben den richtigen Typ haben - Zeichen, wenn Zeichen erwartet werden, Zahlen, wenn Zahlen erwartet werden. Die eingegebenen Zeichen sind immer nur <code>'c'</code>, <code>'n'</code>, <code>'t'</code>, <code>'p'</code> oder <code>'x'</code>.
    <br>
  </li>
  <li>Verwenden Sie Funktionen, um sich viel duplizierten Code ersparen.</li>
  <li>Geben Sie <strong>Zeilenumbrüche immer vor einer neuen Zeile aus und nicht am Ende</strong>. Wenn Sie sich daran halten, sollte die Formatierung leichter zur Übereinstimmung mit der erwarteten Ausgabe gebracht werden können. Das Programm startet daher
    auch mit einem Zeilenumbruch.</li>
  <li>In CodeRunner wird jede einzelne Eingabe von einem Zeilenumbruch bestätigt, der in der Ausgabe aber nicht sichtbar ist. Wenn Sie außerhalb von CodeRunner das Programm starten, selber Werte eingeben und dabei Zeilenumbrüche produzieren,
    wirkt sich das auf die Ausgabe aus (mehr Zeilenumbrüche als beim automatischen Testen in CodeRunner).</li>
</ul>