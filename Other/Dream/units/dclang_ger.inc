SUsedefaults = 'Benutze Vorgaben f�r:'; 
SForeground = 'V&ordergrund'; 
SBackground = 'Hinter&grund'; 
SProperties = 'Eigenschaften'; 
SOkButton = 'Ok'; 
SCancelButton = 'Abbruch'; 
SHelpButton = '&Hilfe'; 
SKBDVisualStudio = 'Visual Studio'; 
SExportToTitle = 'Exportiere nach'; 
SInspectOptions = 'Inspektor'; 
SDesignerOptions = 'Designer'; 
SEditorColor = 'Edit&orfarbe:'; 
SColor2 = 'F&arbe:'; 
SStyle2  = 'St&il:'; 
SOptionWidth2 = 'B&reite:'; 
SVisible2 = 'Si&chtbar'; 
SFileExportToMenu = '&Exportiere nach';

//Hi Gerd
//Das sind Kommentare
//Wenn Du die Bedeutung eines Wortes nicht genau kennst, markiere die Stelle
//wie in der n�chsten Zeile ( mit "//?" ).

//Die "&" in den Texten zeigen, welcher Buchstabe unterstrichen wird, also
//per Alt + "Buchstabe" die Anwahl des Men�s m�glich ist.

SKBDClassic = 'Klassisch'; //?
SKBDBrief = 'Brief';
SKBDEpsilon = 'Epsilon';

SVerbActionListEditor = 'ActionListen Editor...';
// ActionList => Bezeichnung einer Komponente, �bersetzung w�rde irritieren
SVerbStandardAction = 'Neue Standard Aktion...';

// ------------------- New Object captions -----------------

SErrAlreadyInNewDialog='%s ist f�r den neuen Dialog schon registriert';

SDelphiApp = 'Delphi Anwendung'; // Application => Anwendung
SVBScriptApp = 'VBScript Anwendung';
SJScriptApp = 'JScript Anwendung';
SPerlApp = 'Perl Anwendung';
SPythonApp = 'Python Anwendung';

SDelphiForm = 'Delphi Formular'; // Form => Formular
SVBScriptForm = 'VBScript Formular';
SJScriptForm = 'JScript Formular';
SPerlForm = 'Perl Formular';
SPythonForm = 'Python Formular';

SDelphiDataModule = 'Delphi Daten Module'; //Daten Modul
SVBScriptDataModule = 'VBScript Daten Modul';
SJScriptDataModule = 'JScript Daten Modul';
SPerlDataModule = 'Perl Daten Modul';
SPythonDataModule = 'Python Daten Modul';

STextFile = 'Text Datei';
SHTMLtext = 'HTML Datei';
SSqltext = 'SQL Datei';

SDelphiUnit = 'Delphi Unit'; //Unit
SJScriptUnit = 'JScript Unit';
SVBScriptUnit = 'VBScript Unit';
SPerlUnit = 'Perl Unit';
SPythonUnit = 'Python Unit';

SDelphiReport = 'Delphi Bericht'; // Bericht
SPerlReport = 'Perl Bericht';
SVBScriptReport = 'VBScript Bericht';
SJScriptReport = 'JScript Bericht';
SPythonReport = 'Python Bericht';
SSimpleReport = 'Einfacher Bericht';

SSimpleForm = 'Einfaches Formular';
SSimpleDataModule = 'Einfaches Datenmodul';

SProjectFile = 'Projektdatei';
SWorkSpaceFile = 'WorkSpace-Datei'; //workspace ??

//--------------------- File Types captions --------------

SAllFiles = 'Alle Dateien';
SUnitFiles = 'Unit Dateien';
SProjectWorkSpace = 'Projekt/WorkSpace'; //workspace ??
SFormFile = 'Formulardatei';

//--------------------- Verb captions --------------

// !!! Das "&"
  SVerbMenuItems = 'Editiere &Elemente...';
  SVerbSave='&Speichern';
  SVerbSaveAs='Speichern &als...';
  SVerbClose='&Schlie�en';
  SVerbActivateProject='Aktiviere Projekt';
  SVerbAdd='&Hinzuf�gen...';
  SVerbSQLEditor ='SQL Editor...';
  SVerbResourceMaster = 'Resource Master';
  SVerbIdeInspector  ='IDE Inspektor';
  SVerbMultiSourceEditor = 'Quellen editieren...';

SRegPackages = 'Pakete';

//--------------------- Convert Errors ---------------------------
SErrInvalidBoolean = '''%s'' ist kein g�ltiger boolescher Wert';

//--------------------- Parser Errors ----------------------------

SErrCharPos = ' in Reihe:%d, Buchstabe:%d. ';
SErrMaxIfDefReached = 'Nur %d verschachtelte Ebenen von Compilerbefehlen sind m�glich';
SErrCompilerDirective = 'Ung�ltiger Compilerbefehl: "%s"';
STokenListEmpty = 'Zeichenliste ist leer';
SErrFutureState = 'Status liegt in der Zukunft'; // Status ist in der Zukunft??
SErrTokenExpected = 'Zeichen %d wird erwarted';

// -------------------- Other Errors -------------------------

SErrFormNameEmpty = 'Formularname kann nicht leer sein';
SErrMethodReferenced = 'Referenzmethode %s existiert nicht. Referenz entfernen?';
SErrControlsInData = 'Controls k�nnen nicht zu Daten Modulen hinzugef�gt werden'; //controls??
SErrInvalidModuleClass = 'Ung�ltige Modul Klasse - %s';
SErrCreatingForm = 'Fehler beim Erstellen des Formulars';
  SErrUpdateRes = 'Fehler beim �ndern der Resource';
  SErrOnlyForms='Diese Version von Resource Master kann nur Formulare editieren';
SErrAlreadyInProject = 'Objekt mit dem Namen "%s" gibt es bereits im Projekt';
SErrOnlyWin32FileSystem = 'Diese Operation kann nur im Win32 Dateisystem ausgef�hrt werden';
SErrObjectNotInProject = 'Objekt %S gibt es im aktiven Projekt nicht';
SErrNotInstantReport = 'kann nur in Instant Report eingef�gt werden'; //instant??
SErrAlreadyUseAll = 'Objekt %S benutzt bereits alle verf�gbaren Objekte';
SErrBadPropStream = 'Fehler in Eigenschaften stream'; //stream??
SErrNoComp = 'Komponente %s existiert nicht';
SErrAlreadyHaveOwner = 'Dieser Workspace hat bereits einen Besitzer'; //Workspace??
SErrNonMonoSpacedFont = 'Nur monospaced Schriftarten k�nnen benutzt werden';
SerrInvalidMoving = 'Kann nicht hierhin bewegen';
sErrCantOpen = 'Kann Modul %s'#13#10' nicht �ffnen Fehlercode : %d';
SErrNoNewExtensions = 'Neue Erweiterungen sind nicht installiert';
SErrOpenFile = 'Fehler beim �ffnen von %s';
SErrorCreateMap = 'Error creating file mapping'; //file mapping ??
SErrorMap = 'Can''t map %s into memory'; // ??
SErrReadOnlyFile = '''%s'' ist schreibgesch�tzt';

//------------------Scripter constants ----------------------------------

  SErrScriptEngineRun = 'Die Scriptingengine lie� sich nicht starten';
  SErrAlreadyLaunched = 'Das Programm l�uft bereits';
SErrNoCodeDesigner = 'Es ist kein Codedesigner f�r %s Dateityp registriert';
  SErrNoScriptRunner  = 'F�r Dateityp % s ist kein Script Runner registriert';
  SErrNoScriptForLang = 'F�r Sprache %s ist kein Script Runner registriert';
SErrUnitNotFound = 'Kann Unit %s nicht laden';
SErrNoRunnableObjects = 'Kann nicht ausf�hren';
SErrExternalRun = 'Fehler beim Ausf�hren des Programms : %s';
SContinueExecution = 'Ausf�hrung fortsetzen?';
SFilePrefix = 'Datei : ';
//----------------------------------------------------

SOtherGroupName = 'Andere'; // in Objekt Inspektor
STitleFilterName = 'Filter Name';
STitleFilter = 'Filter';
  SVerbUsesRetriever = 'Benutzt Retriever...';
  SVerbAssignVerbs='Verben zuordnen';
SCapUseObjects='Benutze Objekte in ';
  SCapRunParameters='Startparameter';

SPageNew = 'Neu';
SPageForm = 'Formular';
SPageUnit = 'Unit';
SPageReport = 'Bericht';
SPageDataModule = 'Datenmodul';

SWorkSpace = 'WorkSpace';
SProject = 'Projekt';

SErrCantSaveObject = 'Kann Objekt nicht speichern';

SErrDeleteFile = 'Kann Datei %S nicht l�schen';
SErrRenameFile = 'Kann Datei %s nicht in %s umbenennen';
SErrCantCreateTemp = 'Kann keinen vorl�ufigen Dateinamen erzeugen';

SStatModified = 'Ver�ndert';
SStatInsert = 'Einf�gen';
SStatOverwrite = '�berschreiben';
SStatReadOnly = 'Schreibgesch�tzt';

SErrOpenForm = 'Fehler beim �ffnen des Formulars';
SErrReadProps = 'Fehler beim Lesen der Eigenschaften';
SErrDuplicateItem = 'Kann doppeltes Element nicht einf�gen'; // Item??

SClipboard = 'Zwischenablage';

// OCX
SErrOCXLoadFail = 'Laden von "%s" gescheitert';
SErrOCXCantFindProc = '%s Prozedur nicht gefunden in "%s"';
SErrOCXRegFail = 'Aufruf von %s scheiterte in "%s"';

// ----------------- Filters ------------------------
SOCXFilter = 'ActiveX (*.ocx)|*.ocx';
SAVIFilesFilter = 'AVI Dateien (*.avi)|*.avi';
{$IFDEF CPB3}
SPackagesFilter = 'Pakete (*.bpl)|*.bpl';
{$ELSE}
SPackagesFilter = 'Pakete (*.dpl)|*.dpl';
{$ENDIF}
SPictFilter = 'Alle (*.jpg;*.jpeg;*.bmp;*.ico;*.emf;*.wmf)' +
'|*.jpg;*.jpeg;*.bmp;*.ico;*.emf;*.wmf|JPEG Image File (*.jpg;*.jpeg)|*.jpg;*.jpeg|' +
'|Bitmaps (*.bmp)|*.bmp|Icons (*.ico)|*.ico|' +
'Enhanced Metafiles (*.emf)|*.emf|Metafiles (*.wmf)|*.wmf';
SFormFilter = 'Delphi Formular|*.dfm';
SColorStyleFilter = 'Farbschema (*.rgb)|*.RGB';

SExeFilter = 'Ausf�hrbare Dateien|*.EXE;*.DLL;*.DPL;*.BPL|Alle Dateien|*.*';

SExecutableFiles = 'Ausf�hrbare Dateien';

// ---------------- Palette Pages ---------------------

SPalStandard = 'Standard';
SPalAdditional = 'Weitere';
SPalWin32 = 'Win32';
SPalDialogs = 'Dialoge';
SPalSystem = 'System';
SPalDataControls = 'Datensteuerung'; // Data controls??
SPalDataAccess = 'Datenzugriff';
SPalMidas = 'Midas';
SPalWin31 = 'Win 3.1';
SPalActiveX = 'ActiveX';
SPalDecisionCube = 'Decision Cube';
SPalQReport = 'QReport';

// ------------------- Form captions ------------------

SCapLines = ' Zeilen)';
SCapGotoLineNumber = 'Gehe zu Zeilennummer';
SCapEnterNewLine = 'G&eben Sie die neue Zeilennumer ein:';
  SCreateOrderCaption='Erzeugungsreihenfolge';
  STabOrderCaption='Tabreihenfolge';
SCapEditing = 'Editing '; // bearbeitend??
SCapWindowList = 'Fensterliste';
SCapAddFields = 'Felder einf�gen';
SCapSelectSource = 'W�hlen Sie die Datenquelle';
SCapScale = 'Skalieren';
SCapScalingFactor = '&Skalierungsfaktor:';
SCapProjectManager = 'Projektverwaltung';
SErrDlg = 'Fehler beim Lesen des Formulars';
SFindText = 'Text finden';
SReplText = 'Text ersetzen';
SPstoredEdit = 'Property Storage Editor'; //??
SPackActiveX = 'Pakete/ActiveX';
SNewItem = 'Neues Element';
SNewField = 'Neues Feld';
SFilterEdit = 'Filtereditor';
SObjectExplorer = 'Objekt Explorer';
  SStrlEdit = 'Stringlisteneditor';

// ------------------- dcl0.pas ----------------------------

SSaveChanges = '�nderungen an %s speichern?';
SCantUseMore = 'Diese Unit benutzt bereits alle verf�gbaren Units';
SUseUnitCaption = 'Benutze Unit';

SEmptyFileName = 'Dateiname kann nicht leer sein';
SNotValidIdent = '''%s'' ist kein g�ltiger Name.';
SOpenFileExt = 'Delphi Unit|*.pas|Delphi Formular|*.dfm';
SOnlyOneInstant = 'Es kann nur eine Instanz von TInstantReport erzeugt werden';

// ------------------- dcfdes.pas------------------------
SAligntoGrid = 'Am &Raster ausrichten';
SBringToFront = 'Nach &Vorne bringen';
SSendToBack = 'Nach &Hinten bringen';
SDesAlign = '&Ausrichten...';
SDesSize = '&Gr�&sse...';
SDesScale = 'skali&eren...';
   SDesTabOrder= '&Tabulatorreihenfolge...';
   SDesCreationOrder='&Erzeugungsreihenfolge...';

// ----------------- dcstring.pas ----------------------

SVerbProperties = 'Eigenschaften...';
  SInvalidTabRack='Ung�ltige Karteireiterlasche';
SReadOnlyStream = 'Kann nicht in einen schreibgesch�tzten stream schreiben'; //stream
  SErrBlankSearch='Der Suchbegriff darf nicht leer sein';
SErrEmptySel = 'Versuchte, markierten Block zu durchsuchen, aber er war fehlerhaft';
SErrOutsideSel = 'Versuchte, markierten Block ab dem Curser zu durchsuchen, aber der Curser ist au�erhalb des Blocks';
SErrNotFound = 'Suchbegriff ''%s'' wurde nicht gefunden';
SAskReplace = 'Dieses Auftreten von ''%s'' ersetzen?';
SAskSaveFile = ' �nderungen als %s speichern?';

// ----------------------- dcgen.pas ------------------------------

SErrStackEmpty = 'Stapelspeicher ist leer';
SErrPackloaderExists = 'Paketlader existiert bereits in der Anwendung';
SErrUnknRegType = 'Dieser Typ wird nicht durch WriteToRegistry unterst�tzt';

// ---------------------- dcpload.pas --------------

SErrWithoutPackages = 'Paketlader wird nicht funktionieren wenn die Anwendung ohne Pakete kompiliert wurde';
SErrorPackageLoad = 'Fehler w�hrend des Ladens von Paket %S ';
SOnlyOnePackageLoader = 'Es kann nur eine Instanz von TDCPackageLoader erzeugt werden';
SUnkPackageHandle = 'Unbekannter Paket-handler';
SPackAlrregist = 'Kann Paket %s'#13#10' nicht installieren weil Paket %s den gleichen Basisnamen hat';

// ---------------------- dcl2.pas --------------

SErrFileNotFound = 'Datei %S nicht gefunden';

// ---------------------- reswrite.pas --------------

SError = #13#10'Fehler code : %d';
SErrFileOpen = 'kann Datei nicht zum Schreiben �ffnen';
SErrMap = 'Can''t map file'; //map-Abbilden??
SErrMapView = 'Kann MapViewOfFile nicht ausf�hren';
SErrEXE = 'Falsches Dateiformat';
SErrNoResources = 'Diese Datei enth�lt keine Resourcen'; //resources??
SErrResNotFound = 'Resource nicht gefunden';

// ---------------------- dcdbreg.pas --------------

  SLoadDefault = 'Standardparameter laden?';
SErrNoAliasOrDriver = 'AliasName oder DriverName Eigenschaft sollte angegeben werden';
  SVerbLoadDefault = 'Lade &Standardparameter...';
SVerbExecute = 'A&usf�hren';
SVerbColumnsEditor = 'Spa&lteneditor...';

// ---------------------- ctrlreg.pas --------------

SVerbEditPropList = '&Eigenschaftenliste bearbeiten...';
SVerbPropOrder = '&Properties order...'; //??Reihenfolge der Eigenschaften?
SVerbInsertObject = 'Objekt einf�gen...';
SVerbObjectProperties = 'Objekteigenschaften...';
SVerbObjectSettings = 'Objekteinstellungen...';
SVerbNextFrame = '&N�chster Rahmen';
SVerbPreviousFrame = '&Vorheriger Rahmen';
SVerbNewPage = 'Neue Seite';
SVerbNextPage = 'N�chste Seite';
SVerbPreviousPage = 'Vorherige Seite';
  SVerbNewButton='Neuer &Schalter';
  SVerbNewSeparator='Neuer &Trenner';

SVerbInputMaskEditor = 'E&Ingabemasken Editor...';
SVerbMaskedTextEditor = '&MaskierterText Editor...';
SVerbImageEditor = 'B&ild bearbeiten..';
SVerbSectionsEditor = 'Sektio&nen-Editor...';
SVerbPanelsEditor = '&Panels-Editor...';
SVerbItemsEditor = '&Items-Editor...';
SVerbLinesEditor = '&Linien-Editor...';
SVerbTabsEditor = '&Tabreihenfolge-Editor...';
SVerbMenuDesigner = 'Menu-Designer...';
SVerbBandsEditor = 'Ban&den-Editor...';
SVerbObjectInspector = 'Objektinspektor';

SErrNotImplemented = 'Nicht implementiert';

// ---------------------- dcmemo.pas --------------

SLoadColorStyles = 'Farbschema laden';
SSaveColorStyles = 'Farbschema speichern';
SErrNotRGBFile = 'Keine Farbschema Datei';

// ---------------------- dcedit.pas --------------

sErrSelfLink = 'Kann nicht auf sich selbst verweisen';
sErrEmptyPopupClass = 'PopupWindowClass ist nicht festgelegt';
SSelectDirectory = 'Verzeichniss w�hlen';

// ---------------------- dcmenu.pas --------------

sErrMultipleInstance = 'Es kann nur eine Instanz von DCMenu im Formular plaziert werden.';
sErrInfoAlreadySet = 'Information f�r diesen Eintrag wurde bereits eingegeben.';
sErrMainMenuImage = 'Hauptmen�eintr�ge k�nnen kein Bild enthalten';

// ---------------------- dcsplit.pas ---------------

SVerbSetMinSize = 'MinSize Eigenschaft festlegen';

// ---------------------- dctree.pas ---------------
SConfirmDelete = 'Eintr�ge l�schen?'; // item??

// ---------------------- dcdbtree.pas ---------------

sDatasetName = '*.cds';
sAddFields = '&Felder hinzuf�gen...';
sAddAllColumns = '&Alle Spalten hinzuf�gen';
sLoadDefValues = 'Vorgaben wiederherstellen?';
sFieldEditor = '&Felder Editor...';
sParamEditor = '&Parameter Editor...'; //params=parameter??
serrNameAlredyExists = 'Ein Feld mit dem Namen %s existiert bereits';
SReplaceColumns = 'Vorhandene Spalten ersetzen ?';

// ---------------------- dcpascal.pas ---------------

SErrExpectedButFound = '%s erwartet, aber %s gefunden';
SErrOrExpected = '%s oder  %s erwartet';
SErrFunDefined = 'Funktion %s ist schon definiert';
SErrunkn_id = 'Unbekanntes Identifiezierungszeichen: %s';
SErrunexp_writer = 'Unbekannter Variablentyp beim Schreiben des Programms';
SErrunit_declared = 'Unit %s ist schon definiert';
SErrbad_unit = 'Unit Deklarationsfehler';
SErrfun_notfound = 'Funktion %s nicht gefunden';
SErrlinker_error = 'Falscher Verweis';
SErrlabel_already = 'Label <%s> ist schon definiert';
SErrdeclpart = 'Fehler im Deklarationsblock';
SErrlab_notdef = 'Label <%s> ist nicht definiert';
SErrvar_already = 'Variable <%s> ist schon definiert';
SErrbad_varblock = 'Fehler im Variablen-Deklarationsblock';
SErrvar_NotDef = 'Variable <%s> ist nicht definiert';
SErrmeth_decerr = 'Methodendeklarations-Fehler';
SErrbad_methparam = 'Methodenparameters Deklarations-Fehler';
SErrno_props = 'Eigenschaften sind nicht erf�llt'; //implemented??
SErronly_class = 'Nur Klassendeklarationen sind erlaubt';
SErr_decl = '%s Deklarationsfehler';
SErrsynt_err = 'Schreibfehler in Zeile: %d  Buchstabe: %d'#13#10'%s';
SErrbad_idName = 'Falscher Name f�r Erkennungszeichen <%s>';
SErrbad_id = 'Falsches Erkennungszeichen <%s>';
SErrin_funuse = 'Unzul�ssiger Gebrauch der Funktion';
SErrin_procuse = 'Unzul�ssiger Gebrauch der Prozedur';
SErrbad_hex = 'Hex Konstantendeklarationsfehler';
SErrcompile_before = 'Vor dem Ausf�hren mu� kompiliert werden';
SErrbad_realconst = 'Real Konstantendeklarationsfehler'; //real constant??
SErrbad_charconst = 'String Konstantendeklarationsfehler'; //String constant??
SErrunsup_partype = 'Nicht unterst�tzter Parameter Typ';
SErrno_resvar = 'Variablenergebniss f�r %s nicht gefunden';
SErrproc_notfound = 'Prozedur %s nicht gefunden';
SErrpar_notfound = 'Parameter %S nicht gefunden';
SErrUnknReaderType = 'Unbekannter Reader-Typ'; //reader
  SErrInvalidParams =' Falsche Parameterzahl';
  SErrInvalidType = 'Einer der Parameter ist kein g�ltiger Varianttyp';
SErrInvalidProperty = 'Eigenschaft existiert nicht oder ist schreibgesch�tzt';
SErrInvalidCall = 'Benannte Argumente werden nicht unterst�tzt';
SErrParamNotFound = 'Parameter nicht gefunden';
SErrTypeMismatch = 'Parameter Typ stimmt nicht �berein';
SErrInvalidInterface = 'Unbekannte Schnittstelle';
SErrParamOmitted = 'Ein erforderlicher Parameter fehlte';
SErrUnknown = 'Unbekanner Fehler';
SErrInvCode = 'unzul�ssiger Operationscode';

// ---------------------- csDelphi.pas ---------------
SClientDataFilter = 'Client DataSet (*.cds)|*.cds|Alle Dateien (*.*)|*.*';
SSaveToFile = 'Speichere als Date&i...';
SLoadFromFile = '&Lade aus Datei...';
SClientDSAssignData = 'weise Local &Data zu...';
// ---------------------- dcactnlst.pas ---------------

SDefaultCategory = 'Kein';

// ---------------------- AligUnit.pas ---------------

SAlignmentpalette = 'Ausrichtungspalette';
SAlignleft = 'Linke Kanten ausrichten';
SAlignhor = 'Horizontale Mitten ausrichten';
SCenterHor = 'Horizontal im Fenster zentrieren';
SSpaceeqHor = 'Abstand angleichen, Horizontal';
SAlignright = 'Rechte Kanten ausrichten';
SAligntops = 'Oberkanten ausrichten';
SAlignvert = 'Vertikale Mitten ausrichten';
SCentervert = 'Vertikal im Fenster zentrieren';
SSpaceeqVert = 'Abstand angleichen, vertikal';
SAlignbottom = 'Unterkanten ausrichten';
SVerbStayOnTop = '&an der Oberfl�che bleiben';
SVerbHide = '&verstecken';

// ---------------------- DAlign.pas ---------------

SAlignment = 'Ausrichtung';
SHorizontal = ' Horizontal';
SVertical = ' Vertikal';
SHorizontalAlignment = 'Keine �nderung'#13#10'Linke Seiten'#13#10'Mitten'#13#10 +
'Rechte Seiten'#13#10'Abstand gleichm��ig'#13#10'Im Fenster zentrieren';
SVerticalAlignment = 'Keine �nderung'#13#10'Oberkanten'#13#10'Mitten'#13#10 +
'Unterkanten'#13#10'Abstand gleichm��ig'#13#10'Im Fenster zentrieren';

// ---------------------- DcImgEd.pas ---------------

SAskSeparateBitmaps = 'Bildgr��e f�r %s ist gr��er als Bilderliste Gr��en. In %d separate Bilder aufteilen ?';
SVerbImageListEditor = 'Bil&derliste-Editor...';
SSelImage = 'Au&sgew�hltes Bild';
STransColor = 'durchsich&tige Farbe';
SFillColor = '&Farbe ausf�llen';
SOptions = 'Optionen';
SCrop = 'Cr&op'; //crop=abschneiden??
SStretch = 'De&hnen';
SCenter = 'Z&entrieren';
SApply = 'A&nwenden';
SAddImage = 'Hin&zuf�gen';
SDelete = '&L�schen';
SClear = '&Bereich l�schen'; //clear??

// ---------------------- DcPalFrm.pas ---------------

SComPal = 'Komponentenpalette';

// ---------------------- dcstrled.pas ---------------

SOpen = '�ffnen';
SCodeEdit = '&Code Bearbeiten...';

// ---------------------- dsize.pas ---------------

SSize = 'Gr��e';
SWidth = ' Breite';
SHeight = ' H�he';
SHorizontalSize = 'Keine �nderung'#13#10'Zum kleinsten Schrumpfen'#13#10'Zum gr��ten vergr��ern'#13#10'Breite:';
SVerticalSize = 'Keine �nderung'#13#10'Zum kleinsten Schrumpfen'#13#10'Zum gr��ten vergr��ern'#13#10'H�he:';

// ---------------------- glyphed.pas ---------------

SCopy = 'Kopieren';
SPaste = 'Einf�gen';

// ---------------------- inspunit.pas ---------------

SInspectorTabs = 'Eigenschaften'#13#10'Ereignisse';
SVerbShowCategory = 'Zeige Kategorien';
SVerbDelphiStyle = 'Delphi Stil';
SVerbVBStyle = 'Visual Basic Stil';

// ----------------------MaskPr.pas ---------------

SInputMask = 'E&ingabemaske';
SCharBlank = 'Buchstabe f�r &Leerzeichen';
  SSaveLiterChar = '&Literale speichern';
STestInput = '&Test Eingabe';
SMask = '&Masken...';

// ----------------------MskText.pas ---------------

SInputText = 'Text e&ingeben';
SEditMask = 'Maske Bearbeiten';

// ----------------------newfield.pas ---------------

SFieldName = '&Name';
SFieldType = '&Typ';

// ----------------------packcfg.pas ---------------

SAddPack = 'Paket hinzuf�gen/Register ActiveX';
SRemovePack = 'Paket entfernen';
SShowComp = 'Zeige Komponenten';

// ----------------------pstored.pas ---------------

SSelectAll = 'A&lles ausw�hlen';
SUnselectAll = 'R�ckg�ngig Alles a&usw�hlen';

// ----------------------replunit.pas ---------------

STextToFind = '&Suchen nach:';
SReplaceWith = '&Ersetzen durch:';
SCaseSensitive = 'Gro�/&Kleinschreibung';
SWholeWord = '&Nur ganze W�rter';
SRegExpr = '&Regul�re Ausdr�cke';
  SPropmtRepl = '&Mit Best�tigung';
SDirection = 'Suchrichtung';
SForward = '&Vorw�rts';
SBackward = 'R�ck&w�rts';

   SScope = 'Bereich'; //scope=Umfang??
  SGlobal = '&Gesamter Text';
  SSelText = 'Mark&ierter Text';
  SOrigin = 'Beginn';
  SFromCursor = 'Ab &Cursor';
  SEntireScope = '&Textanfang';
  SReplAll = '&Alles ersetzen';

// ----------------------rerdlg.pas ---------------

SErrMess = '%s.  Fehler ignorieren und fortfahren? ACHTUNG: Den Fehler Ignorieren ' +
'kann dazu f�hren, da� Komponenten gel�scht werden oder Eigenschaftswerte' +
' verlorengehen';
SIgnoreAll = '&Alles ignorieren';

// ----------------------Searunit.pas ---------------

SFind = 'Suche';

// ----------------------TreeEd.pas ---------------

SRefresh = 'Aktualisieren';
SLevelUp = 'Eine Ebene nach oben';
  SAddItem = 'Element hinzuf�gen';
  SAddSubItem = 'Unterelement hinzuf�gen';
  SDeleteItem = 'L�sche Element';
  SLargeIcon =  'Gro�es &Symbol';
  SSmalIcon  = '&Kleines Symbol';
SListStyle = '&Liste';
SReportStyle = 'Be&richt';

// ----------------------MainUnit.pas -------------------------

SFileMenu = '&Datei';
SFileNewMenu = '&Neu...';
SFileNewAppMenu = 'Neue An&wendung';
SFileNewFormMenu = 'Neues F&ormular';
SFileNewDataModuleMenu = 'Neues Daten &Modul';
SFileOpenMenu = '�&ffnen...';
  SFileOpenWorkspaceMenu = '�ffne &Workspace...';
  SFileSaveWorkspaceMenu = 'Speichere Works&pace';
  SFileSaveWorkSpaceAsMenu = 'Speichere WorkSpace als...';
SFileSaveAllMenu = 'Alles &Speichern';
SFileCloseAllMenu = 'Alles Sc&hlie�en';
  SFileUseObjectMenu = '&Benutze Objekt...';
SFileAddtoprojectMenu = 'Zu &Projekt hinzuf�gen...';
SFileRecentFilesMenu = '&Zuletzt benutzte Dateien';
SFileRecentWorkSpacesMenu = 'R&ecent WorkSpaces';
SFilePrintMenu = 'D&rucken...';
  SFileExitMenu = '&Ende';
  SEditMenu = '&Bearbeiten';
SEditUndoMenu = '&R�ckg�ngig';
  SEditRedoMenu = '&Widerrufen';
SEditCutMenu = '&Ausschneiden';
SEditCopyMenu = '&Kopieren';
SEditPasteMenu = '&Einf�gen';
  SEditLockControlsMenu = 'Komponenten &sperren';
SSearchMenu = '&Suchen';
SSearchFindMenu = 'Suc&he...';
SFindinFilesMenu = 'Suche in &Dateien...';
SSearchReplaceMenu = 'Erset&zen...';
SSearchSearchAgainMenu = 'Suche &wiederholen';
  SIncrementalSearchMenu = '&Inkrementelle Suche';
SSearchGotoLineMenu = 'Zeilen&nummer...';
  SViewMenu = '&Ansicht';
SViewProjectManagerMenu = '&Projektverwaltung';
SViewAlignmentPaletteMenu = '&Ausrichtungspalette';
SViewToggleFormUnitMenu = '&Umschalten Formular/Unit';
SViewWindowListMenu = '&Fensterliste...';
SViewNewEditWindowMenu = 'Neues Editie&rfenster';
SViewClipboardHistoryMenu = 'Verlauf Zwis&chenablage';
   SViewPackagesMenu = '&Pakete/ActiveX';
SRunMenu = 'Sta&rt';
SRunQuickRunMenu = '&External Run'; //?? -externes programm ausf�hren??
SRunParametersMenu = '&Parameter...';
SRunProgramResetMenu = 'Programm &zur�cksetzen';
SEvaluateModifyMenu = 'Aus&werten/�ndern';
SToolsMenuMenu = '&Tools';
SToolsOptionsItemMenu = '&Umgebungsoptionen...';
SIDEInspectorMenu = 'I&DE inspektor';
SHelpMenu = '&Hilfe';
SHelpContentsMenu = '&Inhalt...';
SHelpHomePageMenu = '&Home Page';
SHelpWritetousMenu = '&Schreiben Sie uns';
SHelpOnlineregMenu = '&Online Registrierung';
SHelpAboutMenu = 'Inf&o...';
SPopupComponentsMenu = 'K&omponenten...';

// ----------------------OptUnit.pas -------------------------

SPreferences = 'Voreinstellungen';
  SVbStyle = 'VB Stil';
  SDelphiStyle = 'Delphi Stil';
SShowCategory = 'Zeige Kategorien';
SOInspector = 'Objektinspektor';
SSmartPopup = 'Smart popup';
SEditAliases = 'Aliasse editieren';
SFormDesigner = 'Formular-Designer:';
SGridStepX = 'Rastergr��e &X';
SGridStepY = 'Rastergr��e &Y';
SDisplayGrid = '&Raster anzeigen';
SSnapToGrid = 'Am Gitter aus&richten';
SShowCaptions = 'Komponenten-&Titel zeigen';
SEditor = 'Editor';
STabStops = '&Tabstops:';
SBlockIndent = 'Block ein&r�ckung:';
SKeyMappings = 'Ta&staturbelegung:';
SEditorOptions = 'Editor Optionen:';
SAutoIndentMode = '&Automatischer Zeileneinzug';
SSmartTab = 'A&utomatische Tabs';
SBackUnindents = 'R�cktaste &l�scht Einzug'; //??
SShowLineNumbers = 'Zeige Zeilen&nummern';
SShowLineNumbersOnGutter = 'Zeige Zeilennummern au&f Leiste';
  SGroupUndo = '&Gruppe r�ckg�ngig';
SCursorBeyondEof = 'Cursor hinter &EOF';
SPersistentBlocks = '&Persistente Bl�cke'; //persistent =hartn�ckig??
SOverwriteBlocks = 'Bl�cke �&berschreiben?';
  SDblClickLine = 'Doppel&klick markiert Zeile';
SFindTextAtCursor = 'Te&xt am Cursor suchen';
SCutCopyEnabled = 'Ausschn./Kopieren immer akti&v';
SSyntaxHighlighting = 'S&yntaxhervorhebung benutzen';

  SCursorByondEol  = '&Cursor hinter Zeilenende';
SSelectionByondEol = 'Aus&wahl hinter Zeilenende';
SOverCaretBlock = '�bersc&hreibe-Cursor als Block';
SDisableDrag = '&Dragging ausschalten';

SDisplay = 'Anzeige';
SEditFont = '&Editorschrift:';
SOptionSize = '&Gr��e:';
SEditMargin = 'Rechter &Rand:';
SColor = '&Farbe:';
   SStyle = 'S&til:';
SOptionWidth = '&Breite:';
SPosition = '&Position:';
SVisible = '&sichtbar';
  SEditGutter = 'Editorleiste links:';
SColors = 'Farben';
SElements = '&Element:';
SBackColor = '&Hintergrundfarbe:';
SForeColor = '&Vordergrundfarbe:';

SBoldFont = 'Fet&t';
SItalicFont = '&Kursiv';
SUnderLineFont = '&Unterstrichen';

//----------------diffmake.pas------------------------

SErrCRC = 'CRC Fehler';
SErrSmallBuffer = 'Puffergr��e sollte mindestens 4 Bytes betragen';

//------------formfill.pas---------------------------

SErrFillTypeStarted = 'F�lltyp wurde bereits gestartet';

//---------editunit.pas--------------------------------------

SOpenFileatCursor = '�&ffne Datei am Cursor';
SBrowseSymbolatCursor = '&Durchsuche Symbol am Cursor';
STopicSearch = 'Themen&suche';
SToggleBreakpoint = 'Haltepunkte umschalten';
SRuntoCursor = 'R&un bis zum Curser';
SAddWatchatCursor = 'F�ge �ber&wachung am Curser hinzu...';
SViewasForm = '&Ansicht als Formular';
SReadOnly = 'Schrei&bgesch�tzt';
SClosePage = 'Seite s&chlie�en';
SMessageView = '&Meldungsfenster';

//new
//---------dcmenu.pas--------------------------------------

sErrNotAForm = 'DCMenu kann nur in einem Formular plaziert werden';

//---------dcpascal.pas--------------------------------------

SErrMisplacedBreak = 'Unterbrechung au�erhalb der Schleife';
SErrMisplacedContinue = 'Fortsetzung au�erhalb der Schleife';

//---------dcstdctl.pas--------------------------------------

  SErrCircularReference='Zirkul�re Referenz';

//---------dtreeed.pas--------------------------------------

SNewNode = 'Neuer Knoten';

//--------------------------------------------------------

  //Memo print messages
  SFileNameUnknown='<Unbekannt>';
  SFileSelectedBlock='<Markierter Block>';
  SPrintingPage='Drucke Seite %d von %s';
  SPageCaption='Seite %d/%d';
  SMultiDot=' ... ';
  SPrintingOnPrinter='Drucke auf Drucker %s';

  //Print progress messages
  SPrintStatus='Druckerstatus';
  SSearchPrinters='Suche Drucker ...';
  SPrintProgress='Drucke Seiten :      Berechnung ...';

  //Print Dialog messages
  SPrintFormCaption='Druckoptionen';
  SPrintFormCaptionSelection='Druckerwahl';
  SPrintDestCaption='Zu druckende Datei:';
  SPrintSelectedBlock='&Markierten Block drucken';
  SOptionsCaption='Optionen:';
  SSetupButton='&Einstellungen...';
  SHeaderPage='Uberschrift/Seiten&nummer';
  SLineNumber='&Zeilennummern';
  SSyntaxPrint='&Syntaxhervorhebung';
  SUseColor='Farben &verwenden';
  SShowPrintProgress='Druckf&ortschritt &anzeigen';
  SWrapLines='Zeilen &umbrechen';
  SLeftMargin='Linker &Rand:';

{------------------------------------------------------------}
//=================== UNTRANSLATED SECTION ===================
{------------ This section will be translated ---------------}

//------------- Info Tree constants -------------------------

  SErrReferencedObject='Objekt hat Referenzen von einem anderen Objekt';

  SErrEmptyLink = '%s: Link ist nicht angegeben';
  SIUnknownNotSupported   = 'IUnknown wird nicht unterst�tzt';
  SIDCRowSetNotSupported  = 'IDCRowSet wird nicht unterst�tzt';
  SErrActiveObject = 'Objekt ist aktiv. bitte schliessen Sie es';
  SErrNonActiveInfoSet = 'InfoSet ist nicht aktiv. Bitte �ffnen Sie es';
  SErrUnsupportedDataType = 'Der Datentyp von Feld "%s" wird nicht unterst�tzt';
  SErrSetInfoSet='Bitte setzen Sie die InfoSet-Eigenschaft';
  SErrFieldReadOnly='Feld "%s" ist schreibgesch�tzt';
  SErrFieldDestroyed='Feld "%s" ist zerst�rt';
  SErrHandlerAlreadyExists='Handler existiert bereits';
  SErrHandlerNotExists='Handler existiert nicht';
  SErrObjectIsNull='Objekt ist NULL';
  SIDCMasterInfoSetNotSupported = 'IDCMasterInfoSet  wird nicht unterst�tzt';
  SErrInsert = 'Kann Knoten nicht hinzuf�gen';
  SErrChangesNotSupported = 'Infoset unterst�tzt keine �nderungen';

  //ReliInfoSet messages
  SErrFieldNotFound='Felder "%s" wurden nicht gefunden.';

  SErrSetReliItem='Bitte setzen Sie die %s-Eigenschaft';
  SErrCMastAndDetDifferent='Detail und Masterfeldnummern passen nicht zusammen';
  SErrRelFieldNotFound='Felder "%s" wurden nicht gefunden.';
  SErrEmptyDisplayField='leerer Anzeigename';
  SErrIncompatibleDataType='Die Typen des Masters "%s" und des Details "%s" sind inkompatibel';

  SErrSetReliItemIndex='Bitte setzen Sie die %s-Eigenschaft. Fehler im %d. Element';
  SErrCMastAndDetDifferentIndex='Detail- und Masterfeldnummern passen nicht zusammen. Fehler im %d. Element';
  SErrRelFieldNotFoundIndex='Felder "%s" wurden nicht gefunden.  Fehler im %d. Element';
  SErrEmptyDisplayFieldIndex='Leerer AnzeigeName. Fehler im %d. Element';
  SErrIncompatibleDataTypeIndex='Die Typen des Masters "%s" und des Details "%s" sind inkompatibel. Fehler im %d. Element';

  SErrInvalidFilter = 'Ung�ltig geformter Filterausdruck';
  SErrInvalidFieldType = 'Ung�ltiger Feldtyp';
  SErrSetDataSet='%s: Bitte setzen Sie die DataSet-Eigenschaft';
  SErrSetRootDataSet='%s: Bitte setzen Sie die RootDataSet-Eigenschaft';
  SErrNotInfoSetDataSet='Wert mu� vom Typ TDataSet oder InfoSet sein';

  //InfoDB constants
  SErrUniqueFieldAlreadyRegistered='Es ist bereits ein Unique Feld registriert';
  SErrUniqueFieldIsNotRegistered='F�r dieses DataSet ist kein unique Feld registriert';
  SErrInvalidBookmark='Ung�ltiges Lesezeichen';

  SErrScriptLanguageNotSpecified = 'Scripting Sprache ist nicht angegeben';

  //TSyntaxScheme
  SCantReadSSchemeFrom = 'Can''t read syntax scheme from '; //!
  SFromFile = 'Datei'; //!
  SFromStream = 'Stream'; //!

  //TSyntaxScheme Editor section
  SSSETitle = 'TSyntaxSchema Editor';
  SSchemeName = 'Schema &Name:';
  SBlocks = '&Bl�cke';
  SExtensions = '&Extensions';//!
  SLoad = 'Laden';
  SSave = 'Speichern';
  SLoad1 = '&�ffnen';
  SSave1 = '&Speichern';
  SSaveAs = 'Speichern als';
  SClear0 = 'L�schen';
  SApply0 = 'Anwenden';
  SBlkDelimiters = 'Block&begrenzer:';
  SBlkOptions = 'Blockoptionen:';
  SCaseSens = '&Gro�-/Kleinschreibung';
  SUseMeta = 'Benutze &MetaSymbol';
  SMetaEscape = 'f�r &Escapes';
  SMetaWrapLines = 'f�r &Zeilenumbruch';
  SStyleText = 'Einfacher &Text:';
  SUseSymbols = 'S&ymbole hervorheben';
  SPageCommon = 'Common';
  SPageComments = 'Kommentare';
  SPageFullLine = 'FullLine';
  SPageStrings = 'Strings';
  SPageNumbers = 'Zahlen';
  SPageIdents = 'Identifiers';
  SPageKeywords = 'Schl��elworte';
  SPagePopups = 'Popups';
  SAdd = 'Hinzuf�gen';
  SRemove = 'Entfernen';
  SEdit = 'Bearbeiten';
  SAdd1 = '&Hinzuf�gen';
  SRemove1 = '&Entfernen';
  SEdit1 = '&Bearbeiten';
  SAdd2 = 'H&inzuf�gen';
  SRemove2 = 'E&ntfernen';
  SEdit2 = 'Bearbei&ten';
  SStyleButton = 'Stil...';
  SUseComments = '&Kommentare hervorheben';
  SUseCommentsSL = 'E&inzeilige Kommentare';
  SUseCommentsML = '&Mehrzeilige Kommentare';
  SUseCommentsFL = 'Kommentare �ber &ganze Zeile';
  SUseDirectives = '&Direktiven hervorheben';
  SUseStrings = 'Strin&gs hervorheben';
  SUseStringsSL = 'E&inzeilige Strings';
  SUseStringsML = '&Mehrzeilige Strings';
  SUseNumbers = 'N&ummern hervorheben';
  SIntNum = 'Inte&ger:';
  SFloatNum = '&Fliesskomma:';
  SHexNum = '&Hexadezimal:';
  SPSNumbers = ' Spezial: ';
  SWithPrefix = 'mit &Prefix';
  SWithSuffix = 'mit Su&ffix';
  SWithPS = 'm&it Prefix && Suffix';
  SWithPrefixes = 'Mit Prefi&xen';
  SWithSuffixes = 'Mit Suffi&xen';
  SWithPSs = 'Mit Prefi&xen und Suffixen';
  SMultiSuffixes = 'mehrfache Suffixe erlau&bt';
  SPSComposition = '&Komposition von P && S';
  SUseIdentifiers = 'I&dentifier hervorheben';
  SSpecIdents = 'Spezielle Identifier && Schl��elworte:';
  SUseKeywords = '&Schl�sselworte hervorheben:';
  SKWSets = ' Mengen: ';
  SCurKWSets = ' Derzeitige Schl�sselwortmenge: ';
  SFontName = 'Schrift&name:';
  SFontSize = 'Schriftgr�&sse:';
  SFontColor = 'Schrift&farbe:';
  SFontStyles = 'Schriftstil:';
  SBackColor1 = '&Hintergrundfarbe:';
  SBold = 'Fe&tt';
  SItalic = '&Kursiv';
  SUnderline = '&Unterstrichen';
  SStrikeout = '&Durchgestrichen';
  SUseDefFont = 'Standardschrift benutzen';
  SUseDefBack = 'Standardhintergrundfarbe benutzen';
  SArePartOfBlock = 'Sind &Teil des Blocks';
  SSelectBlock = 'Blockaus&wahl:';
  SFilterScheme = 'Syntax Schema Dateien (*.sch)|*.sch|Alle Dateien (*.*)|*.*';
  SFilterKeywords = 'Textdateien (*.txt)|*.txt|Alle Dateien (*.*)|*.*';
  SCaptionSet = 'Menge:';
  SCaptionKeyword = '&Schl�sselwort:';
  SCaptionDelimiter = '&Begrenzer:';
  SCaptionLeftDlmtr = '&Linker Begrenzer:';
  SCaptionRightDlmtr = '&Rechter Begrenzer:';
  SCaptionPrefix = 'Prefix:';
  SCaptionSuffix = 'Suffix:';
  SCaptionBlock = '&Block:';
  SCaptionParent = '&Parent:';
  SCaptionExt = 'E&xtension:';//!
  SQueryRemoveBlock = 'Wollen Sie den Syntaxblock wirklich l�schen?';
  SQueryRemoveKWSet = 'Wollen Sie die Schl�sselwortmenge wirklich l�schen?';
  SAnd = ' und ';
//================= END UNTRANSLATED SECTION =================

