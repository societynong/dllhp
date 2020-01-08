// MainDialog.cpp: 实现文件
//

#include "pch.h"
#include "DNF助手.h"
#include "MainDialog.h"
#include "afxdialogex.h"


// MainDialog 对话框

IMPLEMENT_DYNAMIC(MainDialog, CDialog)

MainDialog::MainDialog(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_MainDialog, pParent)
{

}

MainDialog::~MainDialog()
{
}

void MainDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(MainDialog, CDialog)
END_MESSAGE_MAP()


// MainDialog 消息处理程序
