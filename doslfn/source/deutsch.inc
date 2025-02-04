Texte_deutsch:
 dz	10							;0
 dz    "hoch"							;1
 dz    "geladen, verbraucht %u Bytes."				;2
 dz 10,"Kann Unicode-Datei %s nicht finden/�ffnen!"		;3
 dz 10,"Falscher Inhalt der Datei %s oder Lese-Fehler!"		;4
 dz    "deaktiviert."						;5
 dz 10,"(Andere TSR stahl Int21 und/oder Int2F)"		;6
 dz    "Noch nicht installiert!"				;7
 dz    "Ben�tigt mindestens einen 386er Prozessor!"		;8
 dz    "Schalter angenommen."					;9
 db    "	(386+)	++ FREEWARE ++",10			;10
  db   "Programm f�r lange Dateinamen unter nacktem DOS.",10
  db   "Aktionen:	- (nichts)	TSR laden oder aktivieren",10
  db   "		- h oder ?	diese Hilfe",10
  db   "		- d		DOSLFN deaktivieren",10
  db   "		- s		Status und Einstellungen",10
ifdef PROFILE
  db   "		- p		show profile data",10
  db   "		- pr		reset profile data",10
  db   "		- pc		calibrate profile timing",10
endif
  db   "		- u		TSR entfernen",10
  db   "Schalter:	- w{+|-}	* Schreibzugriffe",10
  db   "		- ~{+|-}	* Tilde (ich hasse Schlangen)",10
  db   "		- t{+|-}	* Tunneleffekt (f�r Editoren)",10
  db   "		- f{+|-}	* Fallback-Modus - supply LFN for all drives",10
  db   "		- c{+|-}	* CDROM-Unterst�tzung",10
  db   "		- i{+|-}	* InDOS-Flag-Wiederaufrufsperre f�r TSRs",10
  db   "		- r{+|-}	* Schreibschutz-Attribut f�r CDROM-Dateien",10
if USEWINTIME
  db   "		- o[N]		* set time zone N or read TZ if absent",10
endif
  db   "		- z[:|=]table	Unicode-Tabelle (.TBL-Volkov-Format) laden",10
  db   "		- m[:|=]bytes	Gr��e des internen Heaps festlegen, 600..50000",10
  db   "		- ms[:|=]bytes	declare size of short path, 16..141",10
  db   "		- ml[:|=]bytes	declare size of long path, 16..1024",10
  db   "		- mn[:|=]bytes	declare size of long name, 13..512",10
  db   "		- p[:|=]path	Arbeitsverzeichnis (.TBL/.JLT/.386) festlegen",10
  db   "		- l{d|e|f|t}	Sprache setzen (deutsch|englisch|franz�sisch|t�rkisch)",10
  db   "Umgebung: 	TZ=xxxNyyy	Zeitzone N f�r Zeitumrechnung, ohne DST",10
  db   "Email:    %s",10
  db   "Download: %s",10
  dz   "          %s"

 dz    "aktiv"							;11
 dz    "reaktiviert."						;12
 dz    "vom Speicher entfernt."					;13
 dz    "%7lu Lesezugriffe"					;14
 dz    "%7lu Schreibzugriffe"					;15
 dz    "%7lu Int21/AH=71-Aufrufe"				;16
 dz    "Schreibzugriffe"					;17
 dz    "Schlangen"						;18
 dz    "Tunneleffekt"						;19
 dz    "CDROM-Unterst�tzung"					;20
 dz    "Fallback-Modus"						;21
 dz    "Schreibschutz-Attribut f�r CD-Dateien"			;22
 dz    "Ung�ltige Heap-Gr��e"					;23
 dz    "EIN"							;24
 dz    "AUS"							;25
 dz    "%37s %s",10						;26
 dz    "Verzeichnis existiert nicht!"				;27
 dz    "Kann Verzeichnis nicht setzen."				;28
 dz    "Kann Heap-Gr��e nicht ver�ndern."			;29
 dz    "Kann Schalter nicht annehmen."				;30
 dz 10,"Dazu vorher TSR entfernen."				;31
 dz    "DOS4+ erforderlich!"					;32
 dz 10,"In einem DOS-Fenster dieser Windows-Version ist DOSLFN sinnlos!";33
 dz    "Heap: gesamt=%u, used=%u, frei=%u, gr��ter Block=%u Bytes",10	;34
 dz    "Letzter Fehler: %u - "					;35  =	 0
 dz			"Verbotener Schreibzugriff"			;1
 dz			"Konnte Verzeichnis nicht expandieren"		;2
 dz			"Konnte Joliet-Link-Tabelle nicht finden"	;3
 dz			"Nicht genug Speicher - bitte vergr��ern"	;4
 dz			"Konnte Unicode-Datei nicht laden"		;5
 dz    "InDOS-Flag-Verriegelung + RESET Laufw."			;41
if USEWINTIME
 dz    "Zeitzone ist"						;42
 dz    "%37s UTC%+d",10						;43
endif
ifdef PROFILE
 dz    "Profile.",10						;ProfileNr
 dz    "Profile reset.",10					;+1
 dz    "%7lu %2d.%03d %s",10					;+2
 dz    "Calibrating profile.",10				;+3
 dz    "Profile timing constant = %lu000",10			;+4
 dz    "Error running calibration",10				;+5
 if USEWINTIME
 ProfileNr = 44
 else
 ProfileNr = 42
 endif
endif
