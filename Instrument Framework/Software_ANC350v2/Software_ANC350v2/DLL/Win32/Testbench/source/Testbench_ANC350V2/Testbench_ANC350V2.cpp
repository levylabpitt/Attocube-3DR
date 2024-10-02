// Testbench_ANC350V2.cpp : Definiert das Klassenverhalten f�r die Anwendung.
//

#include "stdafx.h"
#include "Testbench_ANC350V2.h"
#include "Testbench_ANC350V2Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CTestbench_ANC350V2App

BEGIN_MESSAGE_MAP(CTestbench_ANC350V2App, CWinApp)
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()


// CTestbench_ANC350V2App-Erstellung

CTestbench_ANC350V2App::CTestbench_ANC350V2App()
{
	// TODO: Hier Code zur Konstruktion einf�gen
	// Alle wichtigen Initialisierungen in InitInstance positionieren
}


// Das einzige CTestbench_ANC350V2App-Objekt

CTestbench_ANC350V2App theApp;


// CTestbench_ANC350V2App Initialisierung

BOOL CTestbench_ANC350V2App::InitInstance()
{
	// InitCommonControls() ist f�r Windows XP erforderlich, wenn ein Anwendungsmanifest
	// die Verwendung von ComCtl32.dll Version 6 oder h�her zum Aktivieren
	// von visuellen Stilen angibt. Ansonsten treten beim Erstellen von Fenstern Fehler auf.
	InitCommonControls();

	CWinApp::InitInstance();

	// Standardinitialisierung
	// Wenn Sie diese Features nicht verwenden und die Gr��e
	// der ausf�hrbaren Datei verringern m�chten, entfernen Sie
	// die nicht erforderlichen Initialisierungsroutinen.
	// �ndern Sie den Registrierungsschl�ssel unter dem Ihre Einstellungen gespeichert sind.
	// TODO: �ndern Sie diese Zeichenfolge entsprechend,
	// z.B. zum Namen Ihrer Firma oder Organisation.
	SetRegistryKey(_T("Vom lokalen Anwendungs-Assistenten generierte Anwendungen"));

	CTestbench_ANC350V2Dlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: F�gen Sie hier Code ein, um das Schlie�en des
		//  Dialogfelds �ber OK zu steuern
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: F�gen Sie hier Code ein, um das Schlie�en des
		//  Dialogfelds �ber "Abbrechen" zu steuern
	}

	// Da das Dialogfeld geschlossen wurde, FALSE zur�ckliefern, so dass wir die
	//  Anwendung verlassen, anstatt das Nachrichtensystem der Anwendung zu starten.
	return FALSE;
}
