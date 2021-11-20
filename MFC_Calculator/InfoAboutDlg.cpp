// InfoAboutDlg.cpp: 实现文件
//

#include "pch.h"
#include "MFC_Calculator.h"
#include "InfoAboutDlg.h"
#include "afxdialogex.h"


// InfoAboutDlg 对话框

IMPLEMENT_DYNAMIC(InfoAboutDlg, CDialogEx)

InfoAboutDlg::InfoAboutDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_ABOUTBOX, pParent)
{

}

InfoAboutDlg::~InfoAboutDlg()
{
}

void InfoAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(InfoAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// InfoAboutDlg 消息处理程序
