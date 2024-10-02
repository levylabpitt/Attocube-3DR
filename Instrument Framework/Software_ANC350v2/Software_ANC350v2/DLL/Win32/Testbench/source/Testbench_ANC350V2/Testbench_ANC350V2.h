// Testbench_ANC350V2.h : Hauptheaderdatei für die Testbench_ANC350V2-Anwendung
//

#pragma once

#ifndef __AFXWIN_H__
	#error 'stdafx.h' muss vor dieser Datei in PCH eingeschlossen werden.
#endif

#include "resource.h"		// Hauptsymbole


// CTestbench_ANC350V2App:
// Siehe Testbench_ANC350V2.cpp für die Implementierung dieser Klasse
//

class CTestbench_ANC350V2App : public CWinApp
{
public:
	CTestbench_ANC350V2App();

// Überschreibungen
	public:
	virtual BOOL InitInstance();

// Implementierung

	DECLARE_MESSAGE_MAP()
};

extern CTestbench_ANC350V2App theApp;
