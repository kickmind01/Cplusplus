// Mit Microsoft Visual C++ automatisch erstellte IDispatch-Kapselungsklasse(n).

// HINWEIS: Die Inhalte dieser Datei nicht ändern. Wenn Microsoft Visual C++
// diese Klasse erneuert, werden Ihre Änderungen überschrieben.


#include "stdafx.h"
#include "calendar.h"

// Dispatch-Schnittstellen, auf die von dieser Schnittstelle verwiesen wird
#include "font.h"

/////////////////////////////////////////////////////////////////////////////
// CCalendar

IMPLEMENT_DYNCREATE(CCalendar, CWnd)

BEGIN_MESSAGE_MAP(CCalendar, CWnd)
	ON_WM_HELPINFO()
END_MESSAGE_MAP()
/////////////////////////////////////////////////////////////////////////////
// Eigenschaften CCalendar 

/////////////////////////////////////////////////////////////////////////////
// Operationen CCalendar 

unsigned long CCalendar::GetHintergrundfarbe()
{
	unsigned long result;
	InvokeHelper(DISPID_BACKCOLOR, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CCalendar::SetHintergrundfarbe(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(DISPID_BACKCOLOR, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

short CCalendar::GetTag()
{
	short result;
	InvokeHelper(0x11, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CCalendar::SetTag(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x11, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

COleFont CCalendar::GetTagSchriftart()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x1, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return COleFont(pDispatch);
}

void CCalendar::SetTagSchriftart(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x1, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

unsigned long CCalendar::GetTagSchriftfarbe()
{
	unsigned long result;
	InvokeHelper(0x2, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CCalendar::SetTagSchriftfarbe(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x2, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

short CCalendar::GetLngeDesTages_1()	// GetLängeDesTages
{
	short result;
	InvokeHelper(0x12, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CCalendar::SetLngeDesTages_2(short nNewValue)	// SetLängeDesTages
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x12, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

short CCalendar::GetErsterTag()
{
	short result;
	InvokeHelper(0x13, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CCalendar::SetErsterTag(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x13, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

long CCalendar::GetRastereffekt()
{
	long result;
	InvokeHelper(0x14, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CCalendar::SetRastereffekt(long nNewValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x14, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

COleFont CCalendar::GetGitterSchriftart()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0x3, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return COleFont(pDispatch);
}

void CCalendar::SetGitterSchriftart(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0x3, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

unsigned long CCalendar::GetGitterSchriftfarbe()
{
	unsigned long result;
	InvokeHelper(0x4, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CCalendar::SetGitterSchriftfarbe(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0x4, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

unsigned long CCalendar::GetGitterZeilenfarbe()
{
	unsigned long result;
	InvokeHelper(0xd, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CCalendar::SetGitterZeilenfarbe(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xd, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

short CCalendar::GetMonat()
{
	short result;
	InvokeHelper(0x10, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CCalendar::SetMonat(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x10, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

short CCalendar::GetMonatLnge_3()	// GetMonatLänge
{
	short result;
	InvokeHelper(0x15, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CCalendar::SetMonatLnge_4(short nNewValue)	// SetMonatLänge
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0x15, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

BOOL CCalendar::GetDatumsmarkierer()
{
	BOOL result;
	InvokeHelper(0x5, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CCalendar::SetDatumsmarkierer(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x5, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CCalendar::GetTageAnzeigen()
{
	BOOL result;
	InvokeHelper(0x6, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CCalendar::SetTageAnzeigen(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x6, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CCalendar::GetHorizontalesRaster()
{
	BOOL result;
	InvokeHelper(0x7, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CCalendar::SetHorizontalesRaster(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x7, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CCalendar::GetTitelAnzeigen()
{
	BOOL result;
	InvokeHelper(0x8, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CCalendar::SetTitelAnzeigen(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x8, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

BOOL CCalendar::GetVertikalesRaster()
{
	BOOL result;
	InvokeHelper(0x9, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CCalendar::SetVertikalesRaster(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0x9, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

COleFont CCalendar::GetTitelSchriftart()
{
	LPDISPATCH pDispatch;
	InvokeHelper(0xa, DISPATCH_PROPERTYGET, VT_DISPATCH, (void*)&pDispatch, NULL);
	return COleFont(pDispatch);
}

void CCalendar::SetTitelSchriftart(LPDISPATCH newValue)
{
	static BYTE parms[] =
		VTS_DISPATCH;
	InvokeHelper(0xa, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

unsigned long CCalendar::GetTitelSchriftfarbe()
{
	unsigned long result;
	InvokeHelper(0xb, DISPATCH_PROPERTYGET, VT_I4, (void*)&result, NULL);
	return result;
}

void CCalendar::SetTitelSchriftfarbe(unsigned long newValue)
{
	static BYTE parms[] =
		VTS_I4;
	InvokeHelper(0xb, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 newValue);
}

VARIANT CCalendar::GetWert()
{
	VARIANT result;
	InvokeHelper(0xc, DISPATCH_PROPERTYGET, VT_VARIANT, (void*)&result, NULL);
	return result;
}

void CCalendar::SetWert(const VARIANT& newValue)
{
	static BYTE parms[] =
		VTS_VARIANT;
	InvokeHelper(0xc, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 &newValue);
}

BOOL CCalendar::GetWertIstNull()
{
	BOOL result;
	InvokeHelper(0xe, DISPATCH_PROPERTYGET, VT_BOOL, (void*)&result, NULL);
	return result;
}

void CCalendar::SetWertIstNull(BOOL bNewValue)
{
	static BYTE parms[] =
		VTS_BOOL;
	InvokeHelper(0xe, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 bNewValue);
}

short CCalendar::GetJahr()
{
	short result;
	InvokeHelper(0xf, DISPATCH_PROPERTYGET, VT_I2, (void*)&result, NULL);
	return result;
}

void CCalendar::SetJahr(short nNewValue)
{
	static BYTE parms[] =
		VTS_I2;
	InvokeHelper(0xf, DISPATCH_PROPERTYPUT, VT_EMPTY, NULL, parms,
		 nNewValue);
}

void CCalendar::NextDay()
{
	InvokeHelper(0x3e9, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CCalendar::NextMonth()
{
	InvokeHelper(0x3ea, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CCalendar::NextWeek()
{
	InvokeHelper(0x3eb, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CCalendar::NextYear()
{
	InvokeHelper(0x3ec, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CCalendar::PreviousDay()
{
	InvokeHelper(0x3ed, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CCalendar::PreviousMonth()
{
	InvokeHelper(0x3ee, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CCalendar::PreviousWeek()
{
	InvokeHelper(0x3ef, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CCalendar::PreviousYear()
{
	InvokeHelper(0x3f0, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CCalendar::Refresh()
{
	InvokeHelper(DISPID_REFRESH, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CCalendar::Today()
{
	InvokeHelper(0x3f1, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}

void CCalendar::AboutBox()
{
	InvokeHelper(0xfffffdd8, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
}


BOOL CCalendar::OnHelpInfo(HELPINFO* pHelpInfo) 
{
	// Passen Sie die folgende Zeichenfolge an Ihr System an
	::WinHelp(GetSafeHwnd(), "c:\\windows\\system\\mscal.hlp",
	          HELP_FINDER, 0);
	return FALSE;
}
