// Testbench_ANC350V2Dlg.cpp : Implementierungsdatei
//

#include "stdafx.h"
#include "Testbench_ANC350V2.h"
#include "Testbench_ANC350V2Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


#include "hvpositionerv2.h"
#include ".\testbench_anc350v2dlg.h"


struct FuncDescr{
  CString name;
  int paramCountOut;
  int paramCountIn;
};


FuncDescr funcList[] = {          /* in, out */
  {"PositionerGetStatus",             1, 1},
  {"PositionerSetOutput",             2, 0},
  {"PositionerStaticAmplitude",       1, 0},
  {"PositionerGetPosition",           1, 1},
  {"PositionerGetRotCount",           1, 1},
  {"PositionerGetReference",          1, 2},
  {"PositionerGetReferenceRotCount",  1, 1},
  {"PositionerResetPosition",         1, 0},
  {"PositionerMoveAbsolute",          3, 0},
  {"PositionerMoveRelative",          3, 0},
  {"PositionerMoveReference",         1, 0},
  {"PositionerStopDetection",         2, 0},
  {"PositionerSingleCircleMode",      2, 0},
  {"PositionerAmplitudeControl",      2, 0},
  {"PositionerAmplitude",             2, 0},
  {"PositionerGetAmplitude",          1, 1},
  {"PositionerGetSpeed",              1, 1},
  {"PositionerMoveSingleStep",        2, 0},
  {"PositionerMoveContinuous",        2, 0},
  {"PositionerStopMoving",            1, 0},
  {"PositionerFrequency",             2, 0},
  {"PositionerGetFrequency",          1, 1},
  {"PositionerDCLevel",               2, 0},
  {"PositionerTrigger",               3, 0},
  {"PositionerTriggerAxis",           2, 0},
  {"PositionerTriggerPolarity",       2, 0},
  {"PositionerTriggerEpsilon",        2, 0},
  {"PositionerDcInEnable",            2, 0},
  {"PositionerAcInEnable",            2, 0},
  {"PositionerIntEnable",             2, 0},
  {"PositionerGetDcInEnable",         1, 1},
  {"PositionerGetAcInEnable",         1, 1},
  {"PositionerGetIntEnable",          1, 1},
  {"PositionerBandwidthLimitEnable",  2, 0},
  {"PositionerGetBandwidthLimitEnable",1, 1},
  {"PositionerCapMeasure",            1, 1},
  {"PositionerSetStopDetectionSticky",2, 0},
  {"PositionerClearStopDetection",    1, 0},
  {"PositionerSetTargetGround",       2, 0},
  {"PositionerTriggerModeIn",         1, 0},
  {"PositionerTriggerModeOut",        1, 0},
  {"PositionerQuadratureAxis",        2, 0},
  {"PositionerQuadratureInputPeriod", 2, 0},
  {"PositionerQuadratureOutputPeriod",2, 0},
  {"PositionerStepCount",             2, 0},
  {"PositionerGetDcLevel",            1, 1},
  {"PositionerSetTargetPos",          3, 0},
  {"PositionerMoveAbsoluteSync",      1, 0},
  {"PositionerUpdateAbsolute",        2, 0},
  {"PositionerSensorPowerGroupA",     1, 0},
  {"PositionerSensorPowerGroupB",     1, 0},
  {"PositionerStopApproach",          1, 0},
  {"PositionerDutyCycleEnable",       1, 0},
  {"PositionerDutyCyclePeriod",       1, 0},
  {"PositionerDutyCycleOffTime",      1, 0},
};

#define NUM_FUNC  55

typedef int (_stdcall *PROCOUT)(int); 
typedef int (_stdcall *PROCOUTOUT)(int, int); 
typedef int (_stdcall *PROCOUTOUTOUT)(int, int, int); 
typedef int (_stdcall *PROCOUTOUTOUTOUT)(int, int, int, int); 
typedef int (_stdcall *PROCOUTIN)(int, int*); 
typedef int (_stdcall *PROCOUTOUTIN)(int, int, int*); 
typedef int (_stdcall *PROCOUTOUTOUTIN)(int, int, int, int*); 
typedef int (_stdcall *PROCOUTOUTOUTOUTIN)(int, int, int, int, int*); 
typedef int (_stdcall *PROCOUTININ)(int, int*, int*); 
typedef int (_stdcall *PROCOUTOUTININ)(int, int, int*, int*); 
typedef int (_stdcall *PROCOUTOUTOUTININ)(int, int, int, int*, int*); 
typedef int (_stdcall *PROCOUTOUTOUTOUTININ)(int, int, int, int, int*, int*); 
typedef int (_stdcall *PROCSTRUCTIN)(PositionerInfo**); 

typedef int (_stdcall *PROCFILE)(int, int, char*); 

// CAboutDlg-Dialogfeld für Anwendungsbefehl 'Info'

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialogfelddaten
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterstützung

// Implementierung
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()


// CTestbench_ANC350V2Dlg Dialogfeld



CTestbench_ANC350V2Dlg::CTestbench_ANC350V2Dlg(CWnd* pParent /*=NULL*/)
	: CDialog(CTestbench_ANC350V2Dlg::IDD, pParent)
  , _connectStatus(_T("")), _dev(0)
  , _param1(0)
  , _param2(0)
  , _param3(0)
  , _result1(0)
  , _callStatus(_T(""))
  , _result2(0)
  , _filename(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CTestbench_ANC350V2Dlg::DoDataExchange(CDataExchange* pDX)
{
  CDialog::DoDataExchange(pDX);
  DDX_Text(pDX, IDC_CONNECT_STATUS, _connectStatus);
  DDX_Control(pDX, IDC_FUNCTION_SELECT, _funcSelCtrl);
  DDX_Control(pDX, IDC_PARAM_1, _paramCtrl1);
  DDX_Control(pDX, IDC_PARAM_2, _paramCtrl2);
  DDX_Control(pDX, IDC_PARAM_3, _paramCtrl3);
  DDX_Text(pDX, IDC_PARAM_1, _param1);
  DDX_Text(pDX, IDC_PARAM_2, _param2);
  DDX_Text(pDX, IDC_PARAM_3, _param3);
  DDX_Text(pDX, IDC_RESULT_1, _result1);
  DDX_Control(pDX, IDC_RESULT_1, _resultCtrl1);
  DDX_Text(pDX, IDC_CALL_STATUS, _callStatus);
  DDX_Control(pDX, IDC_RESULT_2, _resultCtrl2);
  DDX_Text(pDX, IDC_RESULT_2, _result2);
  DDX_Text(pDX, IDC_FILENAME, _filename);
  DDX_Control(pDX, IDC_CHECKLIST, _listCtrl);
}

BEGIN_MESSAGE_MAP(CTestbench_ANC350V2Dlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
  ON_BN_CLICKED(IDC_CONNECT, OnBnClickedConnect)
  ON_CBN_SELCHANGE(IDC_FUNCTION_SELECT, OnCbnSelchangeFunctionSelect)
  ON_BN_CLICKED(IDC_CALL, OnBnClickedCall)
  ON_BN_CLICKED(IDC_POSITIONERLOAD, OnBnClickedPositionerload)
  ON_BN_CLICKED(IDC_CLOSE, OnBnClickedClose)
  ON_BN_CLICKED(IDC_CHECK, OnBnClickedCheck)
  ON_BN_CLICKED(IDC_CALLALL, OnBnClickedCallall)
END_MESSAGE_MAP()


// CTestbench_ANC350V2Dlg Meldungshandler

BOOL CTestbench_ANC350V2Dlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Hinzufügen des Menübefehls "Info..." zum Systemmenü.

	// IDM_ABOUTBOX muss sich im Bereich der Systembefehle befinden.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Symbol für dieses Dialogfeld festlegen. Wird automatisch erledigt
	//  wenn das Hauptfenster der Anwendung kein Dialogfeld ist
	SetIcon(m_hIcon, TRUE);			// Großes Symbol verwenden
	SetIcon(m_hIcon, FALSE);		// Kleines Symbol verwenden

	// TODO: Hier zusätzliche Initialisierung einfügen

  _dll = LoadLibrary("hvpositionerv2.dll");

  for (int i=0;i<NUM_FUNC;i++){
    _funcSelCtrl.InsertString( i, funcList[i].name );
  }

	
	return TRUE;  // Geben Sie TRUE zurück, außer ein Steuerelement soll den Fokus erhalten
}

void CTestbench_ANC350V2Dlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// Wenn Sie dem Dialogfeld eine Schaltfläche "Minimieren" hinzufügen, benötigen Sie 
//  den nachstehenden Code, um das Symbol zu zeichnen. Für MFC-Anwendungen, die das 
//  Dokument/Ansicht-Modell verwenden, wird dies automatisch ausgeführt.

void CTestbench_ANC350V2Dlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // Gerätekontext zum Zeichnen

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Symbol in Clientrechteck zentrieren
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Symbol zeichnen
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// Die System ruft diese Funktion auf, um den Cursor abzufragen, der angezeigt wird, während der Benutzer
//  das minimierte Fenster mit der Maus zieht.
HCURSOR CTestbench_ANC350V2Dlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CTestbench_ANC350V2Dlg::OnBnClickedConnect()
{
  PROCOUTIN func = (PROCOUTIN)GetProcAddress(_dll, "PositionerConnect");
  if (NULL == func){
    _connectStatus.Format("DLL Fehler");
    UpdateData(false);
    return;
  }

  int select = _listCtrl.GetCurSel();
  if (LB_ERR == select)
     select = 0;

  Int32 status = (func)( select, &_dev );
  _connectStatus.Format(GetErrStr(status));
  UpdateData(false);
}

void CTestbench_ANC350V2Dlg::OnCbnSelchangeFunctionSelect()
{
  UpdateData(true);
  int index = _funcSelCtrl.GetCurSel();
  if (CB_ERR == index)
    return;
  int outCount = funcList[index].paramCountOut;
  int inCount = funcList[index].paramCountIn;
  if (inCount > 0)
    _resultCtrl1.ShowWindow(true);
  else
    _resultCtrl1.ShowWindow(false);

  if (inCount > 1)
    _resultCtrl2.ShowWindow(true);
  else
    _resultCtrl2.ShowWindow(false);

  if (outCount > 0)
    _paramCtrl1.ShowWindow(true);
  else
    _paramCtrl1.ShowWindow(false);

  if (outCount > 1)
    _paramCtrl2.ShowWindow(true);
  else
    _paramCtrl2.ShowWindow(false);

  if (outCount > 2)
    _paramCtrl3.ShowWindow(true);
  else
    _paramCtrl3.ShowWindow(false);

}



CString CTestbench_ANC350V2Dlg::GetErrStr(int rc)
{
  switch (rc){
    case NCB_Ok:
      return "Ok";

    case NCB_Error:
       return "Unbekannter/sonstiger Fehler";
       
    case NCB_Timeout:
       return "Timeout bei Datenabruf";

    case NCB_NotConnected:
      return "Kein Kontakt zum Positioner über USB";

    case NCB_DriverError:
      return "Fehler bei der Treiberansprache";

    case NCB_BootIgnored:
      return "Booten ignoriert, Gerät lief schon";

    case NCB_FileNotFound:
      return "Boot-Image nicht gefunden";

    case NCB_InvalidParam: 
      return "Übergebener Parameter ungültig";

    case NCB_DeviceLocked:
      return "Ein Verbindungsversuch schlug fehl, da das Device schon verwendet wird";

    case NCB_NotSpecifiedParam:
      return "Übergebener Parameter ist außerhalb der Spezifikation";

    default:
       return "Nicht spezifizierter Returncode, unbekannter Fehler";
  }
}



void CTestbench_ANC350V2Dlg::OnBnClickedCall()
{
  UpdateData(true);

  if (NULL == _dll){
    _callStatus.Format("DLL Fehler");
    UpdateData(false);
    return;
  }

  int index = _funcSelCtrl.GetCurSel();
  if (CB_ERR == index)
    return;
  int outCount = funcList[index].paramCountOut;
  int inCount = funcList[index].paramCountIn;

  int status = NCB_Ok;
  if (0 == inCount){
    if (0 == outCount){
      PROCOUT func = (PROCOUT)GetProcAddress(_dll, funcList[index].name);
      if (NULL == func){
        _callStatus.Format("Funktion in DLL nicht gefunden");
        UpdateData(false);
        return;
      }
      status = (func)(_dev);
    }
    if (1 == outCount){
      PROCOUTOUT func = (PROCOUTOUT)GetProcAddress(_dll, funcList[index].name);
      if (NULL == func){
        _callStatus.Format("Funktion in DLL nicht gefunden");
        UpdateData(false);
        return;
      }
      status = (func)(_dev, _param1);
    }
    else if (2 == outCount){
      PROCOUTOUTOUT func = (PROCOUTOUTOUT)GetProcAddress(_dll, funcList[index].name);
      if (NULL == func){
        _callStatus.Format("Funktion in DLL nicht gefunden");
        UpdateData(false);
        return;
      }
      status = (func)(_dev, _param1, _param2);
    }
    else if (3 == outCount){
      PROCOUTOUTOUTOUT func = (PROCOUTOUTOUTOUT)GetProcAddress(_dll, funcList[index].name);
      if (NULL == func){
        _callStatus.Format("Funktion in DLL nicht gefunden");
        UpdateData(false);
        return;
      }
      status = (func)(_dev, _param1, _param2, _param3);
    }
    else{
      _callStatus.Format("Unbekannte Signatur: out: %d, in:%d", outCount, inCount);
      UpdateData(false);
    }
  }
  else if (1 == inCount){
    if (1 == outCount){
      PROCOUTOUTIN func = (PROCOUTOUTIN)GetProcAddress(_dll, funcList[index].name);
      if (NULL == func){
        _callStatus.Format("Funktion in DLL nicht gefunden");
        UpdateData(false);
        return;
      }
      status = (func)(_dev, _param1, &_result1);
    }
    else if (2 == outCount){
      PROCOUTOUTOUTIN func = (PROCOUTOUTOUTIN)GetProcAddress(_dll, funcList[index].name);
      if (NULL == func){
        _callStatus.Format("Funktion in DLL nicht gefunden");
        UpdateData(false);
        return;
      }
      status = (func)(_dev, _param1, _param2, &_result1);
    }
    else if (3 == outCount){
      PROCOUTOUTOUTOUTIN func = (PROCOUTOUTOUTOUTIN)GetProcAddress(_dll, funcList[index].name);
      if (NULL == func){
        _callStatus.Format("Funktion in DLL nicht gefunden");
        UpdateData(false);
        return;
      }
      status = (func)(_dev, _param1, _param2, _param3, &_result1);
    }
    else{
      _callStatus.Format("Unbekannte Signatur: out: %d, in:%d", outCount, inCount);
      UpdateData(false);
    }
  }
  else if (2 == inCount){
    if (1 == outCount){
      PROCOUTOUTININ func = (PROCOUTOUTININ)GetProcAddress(_dll, funcList[index].name);
      if (NULL == func){
        _callStatus.Format("Funktion in DLL nicht gefunden");
        UpdateData(false);
        return;
      }
      status = (func)(_dev, _param1, &_result1, &_result2);
    }
    else if (2 == outCount){
      PROCOUTOUTOUTININ func = (PROCOUTOUTOUTININ)GetProcAddress(_dll, funcList[index].name);
      if (NULL == func){
        _callStatus.Format("Funktion in DLL nicht gefunden");
        UpdateData(false);
        return;
      }
      status = (func)(_dev, _param1, _param2, &_result1, &_result2);
    }
    else if (3 == outCount){
      PROCOUTOUTOUTOUTININ func = (PROCOUTOUTOUTOUTININ)GetProcAddress(_dll, funcList[index].name);
      if (NULL == func){
        _callStatus.Format("Funktion in DLL nicht gefunden");
        UpdateData(false);
        return;
      }
      status = (func)(_dev, _param1, _param2, _param3, &_result1, &_result2);
    }
    else{
      _callStatus.Format("Unbekannte Signatur: out: %d, in:%d", outCount, inCount);
      UpdateData(false);
    }
  }
  else{
  }
  _callStatus.Format(GetErrStr(status));
  UpdateData(false);
}




void CTestbench_ANC350V2Dlg::OnBnClickedPositionerload()
{
  UpdateData(true);
  PROCFILE func = (PROCFILE)GetProcAddress(_dll, "PositionerLoad");
  if (NULL == func){
    _callStatus.Format("Funktion in DLL nicht gefunden");
    UpdateData(false);
    return;
  }
  char* pStr = _filename.GetBuffer(2);
  int status = (func)(_dev, _param1, pStr);
  _filename.ReleaseBuffer();
  _callStatus.Format(GetErrStr(status));
  UpdateData(false);
}

void CTestbench_ANC350V2Dlg::OnBnClickedClose()
{
  PROCOUT func = (PROCOUT)GetProcAddress(_dll, "PositionerClose");
  if (NULL == func){
    _connectStatus.Format("DLL Fehler");
    return;
  }

  Int32 status = (func)( _dev );
  _connectStatus.Format(GetErrStr(status));

  UpdateData(false);
}

void CTestbench_ANC350V2Dlg::OnBnClickedCheck()
{
  _listCtrl.ResetContent();
  PROCSTRUCTIN f = (PROCSTRUCTIN)GetProcAddress(_dll, "PositionerCheck");
  if (NULL == f){
    _listCtrl.InsertString(0, "DLL Fehler" );
    UpdateData(false);
    return;
  }

  PositionerInfo* info;
  Int32 devcount = (f)(&info);

  for (int i=0;i<devcount;i++){
    CString idstr;
    idstr.Format("Id: %d, %s", info[i].id, info[i].locked ? "locked" : "unlocked");
    _listCtrl.InsertString(i, idstr );
  }
}

void CTestbench_ANC350V2Dlg::OnBnClickedCallall()
{
  int i;
  for (i=0;i<NUM_FUNC;i++){
    _funcSelCtrl.SetCurSel(i);
    UpdateData(false);
    OnBnClickedCall();
    Sleep(1000);
  }
}
