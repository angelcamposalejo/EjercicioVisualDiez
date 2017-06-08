#include "stdafx.h"  //________________________________________ EjercicioVisualDiezPrinc.cpp
#include "EjercicioVisualDiezPrinc.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	EjercicioVisualDiezPrinc app;
	return app.BeginDialog(IDI_EjercicioVisualDiezPrinc, hInstance);
}

void EjercicioVisualDiezPrinc::Window_Open(Win::Event& e)
{
}

void EjercicioVisualDiezPrinc::btJavier_Click(Win::Event& e)
{
}

void EjercicioVisualDiezPrinc::btJesus_Click(Win::Event& e)
{
}

void EjercicioVisualDiezPrinc::btAdri_Click(Win::Event& e)
{
}

void EjercicioVisualDiezPrinc::btAngel_Click(Win::Event& e)
{
}

void EjercicioVisualDiezPrinc::btFabi_Click(Win::Event& e)
{
	FabiDlg objFabi;
	objFabi.BeginDialog(hWnd);
}

