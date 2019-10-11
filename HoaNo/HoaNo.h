
// HoaNo.h : main header file for the HoaNo application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CHoaNoApp:
// See HoaNo.cpp for the implementation of this class
//

class CHoaNoApp : public CWinApp
{
public:
	CHoaNoApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CHoaNoApp theApp;
