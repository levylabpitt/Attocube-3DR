// Testbench_ANC350V2Dlg.h : Headerdatei
//

#pragma once
#include "afxwin.h"


// CTestbench_ANC350V2Dlg Dialogfeld
class CTestbench_ANC350V2Dlg : public CDialog
{
// Konstruktion
public:
	CTestbench_ANC350V2Dlg(CWnd* pParent = NULL);	// Standardkonstruktor

// Dialogfelddaten
	enum { IDD = IDD_TESTBENCH_ANC350V2_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV-Unterstützung


// Implementierung
protected:
	HICON m_hIcon;

	// Generierte Funktionen für die Meldungstabellen
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()

  int _dev;
  HMODULE _dll;
public:
  CString _connectStatus;
  afx_msg void OnBnClickedConnect();
  CComboBox _funcSelCtrl;
  CEdit _paramCtrl1;
  CEdit _paramCtrl2;
  CEdit _paramCtrl3;
  int _param1;
  int _param2;
  int _param3;
  int _result1;
  afx_msg void OnCbnSelchangeFunctionSelect();
  CEdit _resultCtrl1;
  afx_msg void OnBnClickedCall();
  CString _callStatus;
  CString GetErrStr(int rc);
  CEdit _resultCtrl2;
  int _result2;
  CString _filename;
  afx_msg void OnBnClickedPositionerload();
  afx_msg void OnBnClickedClose();
  afx_msg void OnBnClickedCheck();
  CListBox _listCtrl;
  afx_msg void OnBnClickedCallall();
};
