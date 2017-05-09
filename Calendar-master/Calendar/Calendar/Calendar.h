#pragma once

#include "resource.h"
const int windowHeightMin = 500;
const int windowWidthMin = 1100;

/*
	For button use:
	HWND hwndButton = CreateWindow(L"BUTTON", L"OK", WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON, 10, 10, 50, 50, m_hwnd, NULL, (HINSTANCE)GetWindowLong(m_hwnd, GWL_HINSTANCE), NULL);
*/