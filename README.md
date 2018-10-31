# Wetterstation
Im Rahmen der FIP (Fächerinternen Überprüfung) erstellte ich Anfang 2016 eine Wetterstation zur Messung von Temperatur und Luftfeuchtigkeit mit LCD. Zusätzlich wird eine Website auf dem Arduino per Wifi Shield gehostet um Daten am Smartphone anzuzeigen.

# Kopie aus Dokumentation

 
Inhaltsverzeichnis
1.	Einleitung	2
2.	Warum eine Wetterstation	2
3.	Herkömmliche Funk-Wetterstation	2
4.	Beschreibung meiner Wetterstation	3
4.1.	Mechanischer Aufbau	3
4.2.	Funktionsbeschreibung	3
4.3.	Anwendungsgebiete	4
4.4.	Arduino, Sensoren und elektrische Bauteile	4
4.5.	Programmierung des Arduino	5
4.6.	Arbeitsprotokoll der Wetterstation	7
4.7.	Ausbau-/Veränderungs-Möglichkeiten	12
4.8.	Dokumente des Projekts	12
4.8.1.	erste Skizze:	13
4.8.2.	Erster 3D Aufbau zur Ideensammlung	14
4.8.3.	Stücklisten	14
4.8.4.	Schaltplan	15
4.8.5.	Platinenlayout	16
4.8.6.	3D-Skizze	16
4.8.7.	Technische Zeichnung	16
5.	Vergleich meines Werkstücks mit einer herkömmlichen Wetterstation	17
6.	Reflektion	17
7.	Abbildungsverzeichnung	17
8.	Quellen	17
9.	Eigenständigkeitserklärung	18








1.	Einleitung
Im Rahmen der Fachinternen Überprüfung (FIP) in dem Hauptfach Technik, welches Teil der Abschlussprüfung der Realschule ist,  habe ich mich entschieden, eine Wetterstation zu konstruieren. Diese ermöglicht das Abrufen aktueller Temperatur- und Luftfeuchtigkeitsdaten auf einem LCD Display. Es folgt die Dokumentation über mein Projekt.

2.	Warum eine Wetterstation
Wer kennt das nicht: Bevor man das Haus verlässt schaut man kurz auf ein Thermometer oder eine Wetterstation, ob es mittlerweile warm genug ist, um ohne Jacke aus dem Haus gehen zu können oder ob man besser einen Regenschirm mitnimmt. Da das auch Bestandteil meines Alltags ist, dachte ich mir, es wäre ziemlich nützlich, eine eigene Wetterstation zu bauen. Außerdem werde ich genau das gleiche später mit weiteren Features (siehe Ausbau-/Veränderungs-Möglichkeiten) auf dem Technischen Gymnasium, im Rahmen des Seminarkurses auf dem Werner-Siemens TG, bauen. Da ich mich privat schon seit über 2 Jahren mit dem Arduino (dem verwendeten Mikrokontroller) in vielen Kursen und Workshops an der Volkshochschule Esslingen beschäftige, habe ich bereits viel Erfahrung in der grundlegenden Elektronik, der Programmierung von Mikrokontrollern (C/C++), dem Lesen von Sensorwerten Digital sowie Analog, der Auswertung und Anzeige von Daten auf LCD Displays oder Sieben-Segmentanzeigen, der Steuerung von Servos, Schrittmotoren und Elektromotoren, und dem Erstellen einer Website über den Arduino zur Darstellung von Daten oder als mobile Steuermöglichkeit. Außerdem interessiere ich mich sehr für die Elektronik, Mikroelektronik und der Programmierung. 

3.	Herkömmliche Funk-Wetterstation
Zum späteren Vergleich erkläre ich folgend eine herkömmliche Funk-Wetterstation:
Jede Funk-Wetterstation besteht aus mindestens 2 Teilen (Siehe Abbildung 1), der Station und dem Außensensor. Die Station wird innen angebracht, während der Außensensor außen befestigt werden muss. Die Station dient als Empfänger des Außensensors und als Anzeigetafel für die Wetterdaten. Außerdem misst die Station die Innentemperatur, wohingegen der Außensensor die äußeren Wetterdaten misst und an die Station weiter sendet. Je nach Produkt messen Wetterstationen: Außen- und Innentemperatur, Außen- und Innenluftfeuchtigkeit und Luftdruck. Außerdem wird meistens auch das derzeitige/kommende Wetter anhand der Daten errechnet und in Form eines Bildes angezeigt, dazu werden noch die Mondphasen errechnet und die Uhrzeiten des Sonnenaufgangs und Sonnenuntergangs angezeigt. Dies lässt sich aus dem lokalen Datum und der lokalen Urzeit errechnen. 

4.	Beschreibung meiner Wetterstation
Im Folgenden wird meine Wetterstation, die ich im Rahmen der FIP geplant, konstruiert und gebaut habe, erklärt: 
4.1.	Mechanischer Aufbau
Das Gehäuse der Wetterstation besteht aus Furniersperrholz und setzt sich aus 2 Grundplatten, zwei Langenseiten und vier kleinen Verbindungsstücken für zwei Netze zusammen (Siehe Abbildung 2). Das Netz dient als Luftdurchlass und als Schutz für das Innenleben. Zusammengesetzt ergibt es dann ein Viereck. Die innere Elektronik ist in zwei Ebenen unterteilt:
In der unteren Ebene befinden sich zwei Batteriepacks (2 mal 3 Volt) die in Reihe geschaltet sind, der Arduino (Mikrokontroller) und die Anschlüsse für das Netzteil.
In der oberen Ebene hingegen befinden sich die Sensoren, das LCD-Display  und die Schalter. Die Elektronik befindet sich auf einer Lochrasterplatine, welche durch Stecker mit dem Arduino verbunden ist. 

4.2.	Funktionsbeschreibung
Mit meiner Wetterstation kann man sowohl die Temperatur auf ein Zehntel genau in einem Bereich zwischen 0° und 100° als auch die Luftfeuchtigkeit zwischen 20% und 80% sehr genau nur mit 5%iger Abweichung messen. Die gesammelten Daten der Sensoren werden auf einem LCD-Display, welches 4 Zeilen und 20 Spalten besitzt, angezeigt. 
Die Wetterstation kann entweder mit Netzstrom (maximal 12 Volt) oder mit 4 eingebauten und austauschbaren 1,5 Volt AA Batterien betrieben werden. Um Datenverlust zu verhindern und vor Überspannung zu schützen, sind ein Kondensator und eine Zenerdiode verbaut. Damit kann man problemlos zwischen Batteriebetrieb und Netzbetrieb umschalten, ohne dass sich der Arduino neu initialisieren muss. 
Genaueres über die Funktion des Arduinos und seine Programmierung gibt es in 4.5 Programmierung des Arduino.
Weitere Funktionen kann man problemlos ausbauen, siehe dazu 4.7 Ausbau-/Veränderungs-Möglichkeiten.

4.3.	Anwendungsgebiete
Da meine Wetterstation nicht als Funk-Wetterstation konzipiert ist, misst sie nur an Ort und Stelle. Doch dank einem Netz, welches vor kleinen Tieren und kleinen Teilen schützt und dem Batteriebetrieb, der keine Netzabhängigkeit erfordert, sowie dem Gehäuse, kann man meine Wetterstation fast überall einsetzen. Jedoch bietet das Gehäuse keinen Schutz gegen Wasser. Beispiele für Anwendungsgebiete sind: Räume, Gewächshäuser und überdachte Terrassen.
Die Einsatzgebiete kann man auch beliebig erweitern, siehe dazu 4.7 Ausbau-/Veränderungs-Möglichkeiten.

4.4.	Arduino, Sensoren und elektrische Bauteile
Im Grunde ist die Wetterstation ziemlich simpel aufgebaut, wie schon genannt:
Die Steuerung der Elektronik übernimmt ein Mikrokontroller, der bereits erwähnte Arduino UNO R3. Er besitzt 14 digitale Ein/Ausgänge (6 davon können auch als pulsweitenmodulierte (PWM) Ausgänge angesteuert werden), 6 analoge Eingänge und 32 KByte Flash-Memory. Dies reicht völlig für mein Projekt aus, weshalb er sehr gut geeignet ist. 
Die verwendeten Sensoren sind: 
•	LM35: Für genaue Temperatur Messungen im Bereich von 0°C und 100°C mit einer ein Zehntel Genauigkeit. Er wandelt die gemessene Temperatur in einen analogen Spannungswert, der proportional zur Temperatur ist, um. Empfindlichkeit der Analog-Ausgabe: 10mV/°C, d.h. 1V bei 100°C. Auslese der Daten erfolgt über einen Analogport am Arduino mit Umrechnung im Programm.
•	DHT11: Für genaue Luftfeuchtigkeitswerte im Bereich von 20% und 80%, und einer leider ungenauen Temperaturmessung. Deshalb wird die Temperatur des DHT11-Sensors nur als Referenzwert für den LM35 genutzt. Der digitale Output wird mithilfe einer Single-Wire-Bus Übertragung ausgesandt. Auslese der Daten erfolgt über einen digitalen Port am Arduino mit Verwendung der „DHT.h“ Bibliothek. 





Die elektrischen Bauteile, die genutzt wurden:
•	LCD-Display: Um eine große Anzeigefläche zu bieten, habe ich mich für ein 4-zeiliges und 20-spaltiges LCD-Display entschieden. Es wird mit einigen digitalen Pins mithilfe der „LiquidCrystal“ Bibliothek angesteuert. Außerdem ist es möglich, die Helligkeit der Hintergrundbeleuchtung und den Kontrast über Potentiometer einstellbar zu machen. 
•	Zweipol An/Aus-Schalter zum An- und Ausschalter der Wetterstation.
•	Dreipol-Schalter zum Wechseln zwischen Batterie- und Netzbetrieb.
•	Kondensator (12V, 5µF) zum Überbrücken des Stroms beim Wechsel zwischen Batterie- und Netzbetrieb.
•	Zenerdiode (12V, 5W) zum Schutz vor Überspannung am Netzbetrieb.

Es besteht die Möglichkeit die Wetterstation mit weiteren Sensoren, Knöpfen und Features aufzurüsten, siehe dazu 4.7 Ausbau-/Veränderungs-Möglichkeiten. 

4.5.	Programmierung des Arduino
Der Arduino ist das „Gehirn“ hinter der Wetterstation. Er sammelt die Daten von den Sensoren, verarbeitet sie und zeigt sie schließlich über das LCD-Display an. Die Farben helfen zum Verständnis mit dem Code. Wie das funktioniert:
Die Temperatur: Das LM35 gibt die Temperatur anhand eines analogen Spannungswerts wider. Der Arduino liest aus dem Analogport des LM35 lediglich den Spannungswert. Mit dem Spannungswert alleine können wir nicht viel machen außer Schätzen, denn der Sensor liefert 10mV pro Celsius. Nun müssen wir durch eine Formel die Temperatur berechnen: Die Formel ist ziemlich simpel (siehe Abbildung 6). Da der Analogpin mit 5 Volt funktioniert und der Maximalwert des Sensors (bei 100°C) nur 1 Volt liefert, müssen wir zuerst auf die 5 Volt hochrechnen. Die maximale Temperatur beträgt 100°C, also müssen wir mit 100 multiplizieren. Danach den analogen Wert multiplizieren. Ein analoger Wert mit 5 Volt ist beim Arduino immer zwischen 0 und 1023 und hat damit 1024 Werte bei 5 Volt. Da der LM35 aber nur 1 Volt liefern kann, ist dieser Wert bei 100°C bei 204,8. Zum Abschluss wird noch durch die Anzahl der maximalen Werte (1024) am Analogport dividiert und wir bekommen unsere Temperatur. 
Beispiel: 50°C = (5*100*102,4)/1024.
Die Feuchtigkeit: Der DHT11 funktioniert digital. Da ein digitales Signal nur auf an oder aus (kein Strom und Strom) reagiert, funktioniert das vorherige Konzept nicht mehr, denn hier benötigt man ein Single-Bus-System. Dies funktioniert so: Der Sensor hat ein eingebautes IC- Modul. Dieses rechnet die Werte in ein Bitmuster um. Dieses Bitmuster entspricht dem binären System oder ist digital (0 und 1). Dieser Code wird nun in Form von Strom und kein Strom über die digital Leitung übertragen. Der Arduino liest diesen Code anhand einer Bibliothek namens „DHT.h“ und wandelt ihn mit demselben Bitmuster wieder in einen analogen Wert um. Dank der Bibliothek muss der Benutzer nur eine Funktion aufrufen und den Rest macht die Bibliothek von alleine. 
LCD-Display: Das LCD-Display wird auch über eine Bibliothek angesteuert, der „LiquidCrystal“ Library. Die Ansteuerung erfolgt über das BUS System, wie beim DHT11. Wenn man Text darstellen will, muss man zuerst den Cursor - wie beim Computer - an die richtige Stelle bringen, um danach den Text darzustellen.
Code: Die // hinter dem Code sind Kommentare/Beschreibungen der Codezeile. Die Bauteile/Sensoren sind mit der zugehörigen Farbe markiert. 
#include <LiquidCrystal.h>              //Inkludiert eine Bibliothek für das LCD-Display                  
#include <DHT.h>                        //Inkludiert eine Bibliothek für den DHT11-Sensor
#define DHTPIN 1;                       //Der Daten Pin des DHTs wird auf 1 festgelegt
#define DHTTYPE DHT11;                  //Der Typ des DHTs wird auf DHT11 eingestellt
#define LMPIN 0;                     	 //Definition des LM35 Pins
DHT dht(DHTPIN,DHTTYPE);              //Initialisierung der Bibliothek mit den Daten des Sensors

LiquidCrystal lcd(12,11,5,4,3,2);       //Initialisierung der Bibliothek mit den Nummern der Pins des Displays

int zyklen = 5;                  //Zyklen für sicheren Temperatur Wert
float feuchtigkeit;                     //Variable mit Kommastellen für die Luftfeuchtigkeit
float temperatur_LM35;                  //Variable mit Kommastellen für die Temperatur des LM35
float temperatur_DHT11;              //Variable mit Kommastellen für die Temperatur des DHT11

void setup()          //Einmalige Schleife bei Programmstart für Einstellungen
{
  lcd.begin(20,4);    //Einstellung der Spalten und Zeilen
  dht.begin();        //start Befehl für Bibliothek
}

void loop()	//Dies ist eine Schleife die dauerhaft wiederholt wird
{
  delay(1000);        //Warten auf Sensoren
  lese_temperatur();  //Funktionsaufruf zum Temperatur messen
  lese_feuchtigkeit(); //Funktionsaufruf zum Feuchtigkeit messen 
}

void lese_temperatur()                      //Funktion zum Temperatur lesen
{
  for(int i = 0; i < zyklen; i++)           //Schleife für Mehrfache Wiederholung der Berechnung
  {                                         	        //und für sicheren Temperaturwert
    int analogWert = analogRead(0);   //lesen des analogen Wertes des LM35
    float temperatur_rechnen = (5 * 100 * analogWert) / 1024;     //Die Formel zur Berechnung
    temperatur_LM35 += temperatur_rechnen;                   //Aufsummieren der Messwerte
    delay(50);                           //Kurze Wartezeit
  }
  temperatur_LM35 /= zyklen;                //Berechnung des Mittelwerts
  temperatur_DHT11 = dht.readTemperature(); //Funktionsaufruf für den Temperaturwert des DHT11  
  lcd.setCursor(0,0);                       //Setze Cursor in die erste Zeile und Spalte (0 ist die 1ste)
  lcd.print("Temp-LM35: ");                 //Anzeige von Text
  lcd.print(temperatur_LM35);               //Zeigt die Temperatur des LM35 an
  lcd.setCursor(0,1);                       //Cursor geht in die 2te Zeile
  lcd.print("Temp-DHT11: ");                //Anzeige von Text
  lcd.print(temperatur_DHT11);              //Zeigt die Temperatur des DHT11 an
}

void lese_feuchtigkeit()                      //Funktion zum feuchtigkeit messen
{
  feuchtigkeit = dht.readHumidity();          //lese Feuchtigkeit vom DHT11
  lcd.setCursor(0,2);                         //setze Cursor in die 3te Zeile
  lcd.print("Feuchte: ");                     //Anzeige von Text
  lcd.print(feuchtigkeit); //Zeige Feuchtigkeit an
}

4.6.	Arbeitsprotokoll der Wetterstation
Unterrichtsstunde/Datum	Protokoll	Problemstellung/ Fragen	Lösung des Problems
Vorbereitung	-Skizzen zeichnen
-Ideen sammeln
-Planung des Werkstückes	-Größe des Gehäuses?
-Wie befestige ich die Elektronik?
-Die Programmierung?	Durch Testen, Zeichnen und Rumprobieren kam ich auf viele Ideen.
1.
30.11.2015	-Abgabe der Stücklisten
-Material abholen
-Zeichnungen vollenden	Sind alle Bauteile vorhanden?	Ich hatte schon viele Bauteile zuhause, die die Schule nicht besaß.
2.
07.12.2015	-Teile aus dem Holz für Gehäuse zurecht sägen	-Werden die Lötstellen bei der Befestigung stören? 
-Alle Maße richtig und rechtwinklig?	Das LCD-Display kann trotz Lötstellen problemlos eingebaut werden.
Gehrungssäge benutzt.
3.
14.12.2015	-Löten und Testen der Batterieverbindung mit 3- Pol- Schalter
	Wird die Umschaltung zwischen Batterie und Netzteil funktionieren?
Wie wird es gelötet?	Mit kleinem Schaltplan des Schalters hat es funktioniert. 
4.
21.12.2015	-Aussparung für das LCD-Display, passend gefeilt
-Schrauben der Batteriepacks auf die Bodenplatte		Der Einbau funktionierte trotz Lötstellen ohne Hindernissen
5.
11.01.2016	-Aussparungen für den zwei Polschalter, passend gefeilt
-Ablöten am 3-Pol-Schalter
		
6.
18.01.2016	-3-Pol-Schalter eingebaut durch Aussparung
-Löten der Verbindungen für das LCD-Display		
7.
25.01.2016	-Lötung des Displays und des 2-Pol-Schalters auf die Lochrasterplatine
-Sensoren auf Lochrasterplatine gelötet
-Schrauben des Arduinos auf die Grundplatte	Wird die Lochrasterplatine halten?	Durch die Lötstellen ist die Lochrasterplatine gut befestigt.
8.
01.02.2016	-Lötung des 3-Pol-Schalters auf Lochrasterplatine
-Lötung der Verbindungen des 3- Pol-Schalters
-endgültiges Schleifen der einzelnen Bauteile	Löten von Verbindungen für die Schalter problematisch.
Wird die Platine von den Lötstellen ausreichend gehalten?	Da die Beine der Schalter nicht lang genug waren,  musste ich sie hinterher noch auf die Platine löten
9.
15.02.2016	-Lötung der Verbindungskabel
-Programmierung des Arduinos
	Sind die Verbindungen richtig? Arduino und Verbindungen sollten nicht fest verbaut sein.	Anhand der Datenblätter die richtigen Verbindungen für die Bauteile verbaut. Test der Wetterstation war erfolgreich. Kabel sind steckbar.
10.
18.02.2016	-Fertigstellung der Lötung
-die Langenseiten an Gehäuse geschraubt	Werden die Schrauben das Holz spalten? Einbau des Kondensators und der Zenerdiode?	Die Schrauben (3x25) passen perfekt ohne Probleme. Den Kondensator und die Zenerdiode nicht eingebaut aus Zeitmangel.





5: 
	










7:














8: 


























9:











10:
4.7.	Ausbau-/Veränderungs-Möglichkeiten
Meine Wetterstation besitzt noch lange nicht den Funktionsumfang von herkömmlichen Funk-Wetterstationen. Aus Zeitgründen musste ich mich auf eine abgespeckte Version beschränken. Der Vollständigkeit halber möchte ich auf die Möglichkeiten eingehen, die der Arduino noch bietet, um den vollen Funktionsumfang (und mehr) einer Funk-Wetterstation zu erlangen:
Man könnte mithilfe des Wifi-Shields (Siehe Abbildung 13) für den Arduino eine Website erstellen, auf der man z.B. Daten live anzeigen und die Sensoren live steuern kann. Dieser ist dann entweder nur in dem verbundenen Router-Netzwerk abrufbar  oder auch über eine Portfreigabe über das Internet zugänglich. Damit könnte man einfach über die Client-IP (Siehe Abbildung 14) des Arduinos auf die Daten der Wetterstation zugreifen (das zu Anfang erklärte Ziel des Seminarkurses auf dem Werner-Siemens TG). Außerdem ist es möglich neben der Website, wie bei herkömmlichen Funk-Wetterstationen, einen Außensensor auch über das Wifi-Shield des Arduinos zu steuern und die Daten davon auszulesen. Damit wäre die Wetterstation eine Funk-Wetterstation, wie herkömmliche auch. 
Es gibt unzählige Sensoren mit denen man den Funktionsumfang noch erweitern kann, sowie mit vielen Berechnungen bzw. Voraussagen von Regen und Gewitter zum Beispiel. Nützliche Sensoren wären z.B. Luftdrucksensoren, für Gewächshäuser Bodenfeuchtigkeitssensoren oder eine Möglichkeit die Windgeschwindigkeit zu messen. Um seine eigenen Wetteraufzeichnungen machen zu können, könnte man die gesammelten Daten auf einer SD-Card speichern. Diese Daten kann man dann einfach auslesen und am Computer durch verschiedene Programme, wie Excel, in Diagrammen darstellen. 
4.8.	Dokumente des Projekts
Es folgen all meine Skizzen, Baupläne, Stücklisten, Zeichnungen, Schaltpläne und Ideen zu meinem Projekt.








4.8.1.	erste Skizze:





4.8.2.	Erster 3D Aufbau zur Ideensammlung

4.8.3.	Stücklisten
 
4.8.4.	Schaltplan





























4.8.5.	Platinenlayout
4.8.6.	3D-Skizze
4.8.7.	Technische Zeichnung


























5.	Vergleich meines Werkstücks mit einer herkömmlichen Wetterstation
	Meine Wetterstation	Herkömmliche Wetterstationen
Innen- und Außenmessung (per Funk)	Nein	Ja
Temperaturmessung	Ja	Ja
Luftfeuchtigkeitsmessung	Ja	Ja, meistens
Luftdruckmessung	Nein	Ja
Berechnung von Wetter	Nein	Ja, meistens
Zugriff auf Daten übers Internet	Nein	Selten (Smarthome)

6.	Reflektion
Mir gefiel das Projekt ziemlich gut, weil man seine gesammelten Kenntnisse, die man über die Jahre gesammelt hat, anwenden kann. Zudem konnte man frei wählen wie sein Projekt aussehen soll und welchen Umfang es beinhalten soll. 
Ich hätte mir deutlich mehr Zeit für diese Projektarbeit gewünscht, um all meine Ideen umzusetzen. 
Im Gesamten hat mir das Projekt sehr gut gefallen und ich würde es jederzeit wiederholen  wollen. Außerdem war es ein ziemlich gutes Training für die Zukunft. Ich konnte mein privat erworbenes Wissen mit der schulischen Aufgabenstellung hervorragend verbinden. Das hat mich zutiefst motiviert und mir außerordentlich viel Spaß bereitet.
7.	Abbildungsverzeichnung
Deckblatt: Selbst gemacht
1:http://i.computer-bild.de/imgs/2/4/1/8/9/0/4/Oregon-Scientific-BAR-388-HG-Wetterstation-600x450-19ad90c921b283ff.jpg
2: Selbst fotografiert
3: http://www.geeker.co.nz/images/detailed/1/LM35.jpg
4: Selbst fotografiert
5: http://files.hwkitchen.com/200000137-cf454cffdd/AMC2004A-B-Y6WFDY_arduino_10.JPG
6: Volkshochschule Esslingen – Kurs: Arduino
7-12: Selbst fotografiert
13: http://www.tinyosshop.com/image/data/ARDUINO/Shield/wifishield-6.jpg
14: http://cdn.instructables.com/FDG/KFSP/HREI6PXF/FDGKFSPHREI6PXF.MEDIUM.jpg
15: Selbst gezeichnet (eingescannt)
16: Selbst fotografiert
17: Selbst erstellt mit Fritzing

8.	Quellen

•	Seit mehr als 2 Jahren Arduino Kurs/Workshop an der Volkshochschule in Esslingen
•	Datenblätter der Sensoren/Bauteile

9.	Eigenständigkeitserklärung

Hiermit bestätige ich, dass ich die vorliegende Arbeit selbstständig verfasst und keine anderen als die angegebenen Hilfsmittel benutzt habe.

Marvin Raiser
17.02.2016
