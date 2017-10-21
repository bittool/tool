#pragma once
#include "afxcmn.h"
#include	<string>
#include	"dev_info.h"
using namespace std;
// CDialogPool 对话框

class CDialogPool : public CDialogEx
{
	DECLARE_DYNAMIC(CDialogPool)

public:
	CDialogPool(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CDialogPool();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DLG_POOL };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLvnItemchangedList1(NMHDR *pNMHDR, LRESULT *pResult);
	CListCtrl m_listCtrl;
	virtual BOOL OnInitDialog();
	int AddNote(string resp, string host);
	int addListNote(dev_info &info, string host);
	int saveParam();
	afx_msg void OnBnClickedBtnCheck();
	afx_msg void OnBnClickedBtnSet();
};
