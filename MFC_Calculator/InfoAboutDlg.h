#pragma once


// InfoAboutDlg 对话框

class InfoAboutDlg : public CDialogEx
{
	DECLARE_DYNAMIC(InfoAboutDlg)

public:
	InfoAboutDlg(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~InfoAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
};
