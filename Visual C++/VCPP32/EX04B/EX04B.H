// ex04b.h : Haupt-Header-Datei f�r die Anwendung EX04B
//

#if !defined(AFX_EX04B_H__820317E4_EB56_11D0_A68E_00009290A263__INCLUDED_)
#define AFX_EX04B_H__820317E4_EB56_11D0_A68E_00009290A263__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // Hauptsymbole

/////////////////////////////////////////////////////////////////////////////
// CEx04bApp:
// Siehe ex04b.cpp f�r die Implementierung dieser Klasse
//

class CEx04bApp : public CWinApp
{
public:
	CEx04bApp();

// �berladungen
	// Vom Klassenassistenten generierte �berladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CEx04bApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementierung

	//{{AFX_MSG(CEx04bApp)
	afx_msg void OnAppAbout();
		// HINWEIS - An dieser Stelle werden Member-Funktionen vom Klassen-Assistenten eingef�gt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VER�NDERN!
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio f�gt zus�tzliche Deklarationen unmittelbar vor der vorhergehenden Zeile ein.

#endif // !defined(AFX_EX04B_H__820317E4_EB56_11D0_A68E_00009290A263__INCLUDED_)
