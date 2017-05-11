#include "DisplayMgr.h"
#include "stdafx.h"

HFONT fntChosen;
char key;

void plannerReset() {

}

void PlannerDrawWindow(HWND hwnd, HDC hdc) {

	HGDIOBJ fntOld = SelectObject(hdc, fntChosen);
	TextOut(hdc, 500, 35, _T("Planner"), 7);
	if (key != 0) {
		TCHAR s[20];
		int cb = 1;
		TextOut(hdc, 100, 50, _T("Key:"), 4);
		switch (key) {
		case VK_UP:
			s[0] = _T('U'); s[1] = _T('P'); s[2] = '\0';
			cb = 2;
			break;
		default:
			s[0] = key; s[1] = '\0';
			cb = 1;
		}
		TextOut(hdc, 0, 50, s, cb);
	}
	SelectObject(hdc, fntOld);

	//Verticle Lines

	MoveToEx(hdc, 25, 100, NULL); LineTo(hdc, 25, 500);
	MoveToEx(hdc, 225, 100, NULL); LineTo(hdc, 225, 500);
	MoveToEx(hdc, 425, 100, NULL); LineTo(hdc, 425, 500);
	MoveToEx(hdc, 625, 100, NULL); LineTo(hdc, 625, 500);
	MoveToEx(hdc, 825, 100, NULL); LineTo(hdc, 825, 500);
	MoveToEx(hdc, 1025, 100, NULL); LineTo(hdc, 1025, 500);

	//Horizontal Lines

	MoveToEx(hdc, 25, 100, NULL); LineTo(hdc, 1025, 100);
	MoveToEx(hdc, 25, 500, NULL); LineTo(hdc, 1025, 500);

	
	TextOut(hdc, 100, 300, _T("Monday"), 6);
	TextOut(hdc, 300, 300, _T("Tuesday"), 7);
	TextOut(hdc, 500, 300, _T("Wednesday"), 9);
	TextOut(hdc, 700, 300, _T("Thursday"), 8);
	TextOut(hdc, 900, 300, _T("Friday"), 6);
}