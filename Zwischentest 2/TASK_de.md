<h1>Zwischentest 2</h1>
<h2>Aufgabe</h2>
<p>Definieren Sie zwei Structs um Spieler und gespielte Spiele darzustellen, lesen Sie sich zuerst die Angabe durch und überlegen Sie sich dann, welche Daten Sie wie abbilden müssen.<br>Schreiben Sie ein Programm, das folgende Funktionalitäten implementiert</p>
<ul>
  <li>Das Programm soll eine Rangliste für fünf Spieler verwalten. Die Spieler beginnen mit 0 Siegen, 0 Niederlagen, einem Rangwert von 100 und einer ID von 1 bis 5. Alle eingegebenen gespielten Spiele sollen abgespeichert werden, sie haben einen Typ (ranked und casual) und speichern sowohl den Gewinner als auch den Verlierer des Spiels. Sie können hier ein Array mit 20 Einträgen definieren und werden keine Probleme mit den Testfällen haben.<br></li><li>Geben Sie in einer Schleife die Meldung <strong>"Enter n, r, p, g or x: "</strong> aus und lesen Sie dann einen char ein. Je nachdem was eingegeben wurde, soll eine der folgenden Aktionen ausgeführt werden:
    <br>
    <ul>
      <li><strong>'n' </strong>Legt ein neues gespieltes Spiel an.<br>Geben Sie die Meldung <strong>"Enter game type (c,r): "</strong> aus und lesen Sie dann den Typ des Spiels ein, es gibt "ranked" und "casual".<br>Geben Sie dann die Meldung <strong>"Enter winner ID (1-5): "</strong> aus, lesen Sie die entsprechende ID ein und speichern Sie den Gewinner im Spiel.<br>Geben Sie dann die Meldung <strong>"Enter loser ID (1-5): "</strong> aus, lesen Sie die 
entsprechende ID ein und speichern Sie den Verlierer im Spiel.<br>Handelt es sich beim Gewinner und Verlierer um den selben Spieler wird die Meldung <strong>"Winner and loser identical!"</strong> ausgegeben und das Spiel nicht gespeichert. Ansonsten wird das Spiel gespeichert. Der Gewinner erhält einen Sieg dazu, der Verlierer eine Niederlage. Ist das Spiel vom Typ "ranked" wird zusätzlich der Rangwert des Gewinners um 50 erhöht und der Rangwert des Verlierers um 50 verringert (der Rangwert kann dabei nicht unter 0 sinken). Dann wird noch die Meldung <strong>"New game added"</strong> ausgegeben.<br>
      </li><li><strong>'r' </strong><span>Gibt die Spieler mit ihrem Rangwert aus und markiert jene mit dem höchsten Rangwert.<br>Geben Sie die Meldung <strong>"Player ranks"</strong> aus, gefolgt von einer Meldung für jeden Spieler <strong>"Player X - Rank Y"</strong>, wobei X die ID des Spielers und Y sein Rangwert ist. Bei allen Spielern mit dem höchsten Rangwert soll in derselben Zeile zusätzlich <strong>"- TOP"</strong> ausgegeben werden.</span><br></li><li><strong>'p' </strong>Gibt die Statistiken eines bestimmten Spielers aus.<br>Geben Sie die Meldung <strong>"Select player (1-5): "</strong> aus und lesen Sie dann die ID eines Spielers ein. Für diesen Spieler soll dann zuerst die Meldung <span><strong>"Player X - Rank Y"</strong> ausgegeben werden, wobei X die ID des Spielers und Y sein Rangwert ist. Danach wird die Meldung <strong>"Wins/Losses/Winrate: X/Y/Z %"</strong> ausgegeben werden, wobei X die Anzahl der Siege, Y die Anzahl der Niederlagen und Z der Prozentsatz an gewonnenen Spielen ist (doppelte Genauigkeit, 2 Nachkommastellen).</span><br></li><li><strong>'g'</strong> Gibt eine Liste aller Spiele (gefiltert nach Typ) aus.<br>Geben Sie die Meldung <strong>"Ranked or casual? (r,c): "</strong> aus und lesen Sie dann einen char ein.<br>Ist die Eingabe 'r' sollen alle Spiele des Typs "ranked". in der Reihenfolge, in der sie gespeichert wurden, ausgegeben werden.<br>Ist die Eingabe 'c' sollen alle Spiele des Typs "casual", in der Reihenfolge, in der sie gespeichert wurden, ausgegeben werden.<br>Die Spiele werden mit der Meldung <strong>"Winner: X - Loser: Y"</strong> ausgegeben, wobei X die ID des Gewinners und Y die ID des Verlierers ist.<br>Gibt es keine Spiele des gewählten Typs wird die Meldung <strong>"There are no games yet."</strong> ausgegeben.<br></li>
      <li><strong>'x' </strong><span>Beenden Sie das Programm.</span>
        <br>
      </li>
    </ul>
  </li>
</ul>
<h2>Wichtige Hinweise</h2>
<ul>

  <li>Sie können davon ausgehen, dass alle Eingaben den richtigen Typ und gültige Werte haben.
    <br>
  </li><li>Um das Prozentzeichen ('%') mittels <code>printf</code> auszugeben, müssen Sie im Formatstring ein doppeltes Prozentzeichen verwenden, da ein einfaches als Steuerzeichen für Datentypen verwendet wird - z.B. <code>printf("12 %%")</code> erzeugt die Ausgabe <code>12 %</code>.</li><li>Die Verwendung von <strong>globalen Variablen</strong> ist <strong>nicht erlaubt</strong>.</li>
  <li>Verwenden Sie Funktionen, um Ihren Code sinnvoll zu strukturieren und aufzuteilen.</li>
  <li>Geben Sie <strong>Zeilenumbrüche immer vor einer neuen Zeile aus und nicht am Ende</strong>. Wenn Sie sich daran halten, sollte die Formatierung leichter zur Übereinstimmung mit der erwarteten Ausgabe gebracht werden können. Das Programm startet daher
    auch mit einem Zeilenumbruch.</li>
  <li>In CodeRunner wird jede einzelne Eingabe von einem Zeilenumbruch bestätigt, der in der Ausgabe aber nicht sichtbar ist. Wenn Sie außerhalb von CodeRunner das Programm starten, selber Werte eingeben (siehe Beispielausgabe) und dabei Zeilenumbrüche produzieren,
    wirkt sich das auf die Ausgabe aus (mehr Zeilenumbrüche als beim automatischen Testen in CodeRunner).</li>
</ul>