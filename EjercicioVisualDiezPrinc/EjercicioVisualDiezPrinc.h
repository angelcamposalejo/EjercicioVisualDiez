#pragma once  //______________________________________ EjercicioVisualDiezPrinc.h  
#include "Resource.h"
#include "FabiDlg.h"
class EjercicioVisualDiezPrinc: public Win::Dialog
{
public:
	EjercicioVisualDiezPrinc()
	{
	}
	~EjercicioVisualDiezPrinc()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Button btJavier;
	Win::Button btJesus;
	Win::Button btAdri;
	Win::Button btAngel;
	Win::Button btFabi;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(14.44625);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(1.53458);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"EjercicioVisualDiezPrinc";
		btJavier.CreateX(NULL, L"Javier", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 0.44979, 0.58208, 2.83104, 0.68792, hWnd, 1000);
		btJesus.CreateX(NULL, L"Jesus", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 3.33375, 0.58208, 2.83104, 0.68792, hWnd, 1001);
		btAdri.CreateX(NULL, L"Adri", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 6.29708, 0.63500, 2.51354, 0.60854, hWnd, 1002);
		btAngel.CreateX(NULL, L"Angel", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 9.10167, 0.63500, 2.51354, 0.68792, hWnd, 1003);
		btFabi.CreateX(NULL, L"Fabi", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 11.80042, 0.66146, 2.46062, 0.68792, hWnd, 1004);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		btJavier.Font = fontArial009A;
		btJesus.Font = fontArial009A;
		btAdri.Font = fontArial009A;
		btAngel.Font = fontArial009A;
		btFabi.Font = fontArial009A;
	}
	//_________________________________________________
	void btJavier_Click(Win::Event& e);
	void btJesus_Click(Win::Event& e);
	void btAdri_Click(Win::Event& e);
	void btAngel_Click(Win::Event& e);
	void btFabi_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btJavier.IsEvent(e, BN_CLICKED)) {btJavier_Click(e); return true;}
		if (btJesus.IsEvent(e, BN_CLICKED)) {btJesus_Click(e); return true;}
		if (btAdri.IsEvent(e, BN_CLICKED)) {btAdri_Click(e); return true;}
		if (btAngel.IsEvent(e, BN_CLICKED)) {btAngel_Click(e); return true;}
		if (btFabi.IsEvent(e, BN_CLICKED)) {btFabi_Click(e); return true;}
		return false;
	}
};
