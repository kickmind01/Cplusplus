========================================================================
       MICROSOFT FOUNDATION CLASS BIBLIOTHEK : ex11d
========================================================================


Diese ex11d-Anwendung hat der Klassen-Assistent f�r Sie erstellt. Diese Anwendung
zeigt nicht nur die prinzipielle Verwendung der Microsoft Foundation Classes, 
sondern dient auch als Ausgangspunkt f�r die Erstellung Ihrer eigenen DLLs.

Diese Datei enth�lt die Zusammenfassung der Bestandteile aller Dateien, die 
Ihre ex11d-Anwendung bilden.

ex11d.dsp
    Diese Datei (Projektdatei) enth�lt Informationen auf Projektebene und wird zur
    Erstellung eines einzelnen Projekts oder Teilprojekts verwendet. Andere Benutzer k�nnen
    die Projektdatei (.dsp) gemeinsam nutzen, sollten aber die Makefiles lokal exportieren.

ex11d.h
    Hierbei handelt es sich um die Haupt-Header-Datei der Anwendung. Diese enth�lt 
	andere projektspezifische Header (einschlie�lich Resource.h) und deklariert die
	Anwendungsklasse CEx11dApp.

ex11d.cpp
    Hierbei handelt es sich um die Haupt-Quellcodedatei der Anwendung. Diese enth�lt die
    Anwendungsklasse CEx11dApp.

ex11d.rc
	Hierbei handelt es sich um eine Auflistung aller Ressourcen von Microsoft Windows, die 
	vom Programm verwendet werden. Sie enth�lt die Symbole, Bitmaps und Cursors, die im 
	Unterverzeichnis RES abgelegt sind. Diese Datei l�sst sich direkt in Microsoft
	Visual C++ bearbeiten.

ex11d.clw
    Diese Datei enth�lt Informationen, die vom Klassen-Assistenten verwendet wird, um bestehende
    Klassen zu bearbeiten oder neue hinzuzuf�gen.  Der Klassen-Assistent verwendet diese Datei auch,
    um Informationen zu speichern, die zum Erstellen und Bearbeiten von Nachrichtentabellen und
    Dialogdatentabellen ben�tigt werden und um Prototyp-Member-Funktionen zu erstellen.

res\ex11d.ico
    Dies ist eine Symboldatei, die als Symbol f�r die Anwendung verwendet wird. Dieses 
	Symbol wird durch die Haupt-Ressourcendatei ex11d.rc eingebunden.

res\ex11d.rc2
    Diese Datei enth�lt Ressourcen, die nicht von Microsoft Visual C++ bearbeitet wurden.
	In diese Datei werden alle Ressourcen abgelegt, die vom Ressourcen-Editor nicht bearbeitet 
	werden k�nnen.



/////////////////////////////////////////////////////////////////////////////

F�r das Hauptfenster:

MainFrm.h, MainFrm.cpp
    	Diese Dateien enthalten die Frame-Klasse CMainFrame, die von
    	CFrameWnd abgeleitet wurde und alle SDI-Frame-Merkmale steuert.

res\Toolbar.bmp
    Diese Bitmap-Datei wird zum Erstellen unterteilter Bilder f�r die Symbolleiste verwendet.
    Die erste Symbol- und Statusleiste wird in der Klasse CMainFrame erstellt.
    Bearbeiten Sie diese Bitmap der Symbolleiste mit dem Ressourcen-Editor, und
    aktualisieren Sie IDR_MAINFRAME TOOLBAR in ex11d.rc, um Schaltfl�chen f�r die
    Symbolleiste hinzuzuf�gen.
/////////////////////////////////////////////////////////////////////////////

Der Klassen-Assistent erstellt einen Dokumenttyp und eine Ansicht(View):

ex11dDoc.h, ex11dDoc.cpp - das Dokument
    	Diese Dateien enthalten die Klasse CEx11dDoc. Bearbeiten Sie diese Dateien,
  	um Ihre speziellen Dokumentdaten hinzuzuf�gen und das Speichern und Laden von 
	Dateien zu implementieren (mit Hilfe von CEx11dDoc::Serialize).

ex11dView.h, ex11dView.cpp - die Ansicht des Dokuments
    	Diese Dateien enthalten die Klasse CEx11dView.
    	CEx11dView-Objekte werden verwendet, um CEx11dDoc-Objekte anzuzeigen.


/////////////////////////////////////////////////////////////////////////////

Hilfe-Unterst�tzung:

ex11d.hpj
    	Diese Datei ist die Hilfe-Projektdatei, die der Hilfe-Compiler f�r das 
	Erstellen der Hilfedatei Ihrer Anwendung verwendet.

hlp\*.bmp
    	Hierbei handelt es sich um Bitmap-Dateien, die f�r die Hilfethemen der 
	Standardbefehle der Microsoft Foundation Classes-Bibliothek erforderlich
	sind.

hlp\*.rtf
    	Diese Datei enth�lt die Hilfethemen f�r Standard-MFC-Befehle und 
    	Oberfl�chenobjekte.

/////////////////////////////////////////////////////////////////////////////
Andere Standarddateien:

StdAfx.h, StdAfx.cpp
    	Mit diesen Dateien werden vorkompilierte Header-Dateien (PCH) mit der Bezeichnung 
	ex11d.pch und eine vorkompilierte Typdatei mit der Bezeichnung StdAfx.obj
	erstellt.

Resource.h
    	Dies ist die Standard-Header-Datei, die neue Ressourcen-IDs definiert.
    	Microsoft Visual C++ liest und aktualisiert diese Datei.

/////////////////////////////////////////////////////////////////////////////
Weitere Hinweise:

Der Klassen-Assistent f�gt "ZU ERLEDIGEN:" im Quellcode ein, um die Stellen anzuzeigen, 
an denen Sie Erweiterungen oder Anpassungen vornehmen k�nnen.

Wenn Ihre Anwendung die MFC in einer gemeinsam genutzten DLL verwendet und Ihre Anwendung
eine andere als die aktuell auf dem Betriebssystem eingestellte Sprache verwendet, muss 
die entsprechend lokalisierte Ressource MFC42XXX.DLL von der Microsoft Visual C++ CD-ROM 
in das Verzeichnis system oder system32 kopiert und in MFCLOC.DLL umbenannt werden ("XXX" 
steht f�r die Abk�rzung der Sprache. So enth�lt beispielsweise MFC42DEU.DLL die ins Deutsche 
�bersetzten Ressourcen). Anderenfalls erscheinen einige Oberfl�chenelemente Ihrer Anwendung 
in der Sprache des Betriebssystems.

/////////////////////////////////////////////////////////////////////////////
