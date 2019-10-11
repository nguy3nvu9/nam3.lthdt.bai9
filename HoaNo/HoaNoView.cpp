
// HoaNoView.cpp : implementation of the CHoaNoView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "HoaNo.h"
#endif

#include "HoaNoDoc.h"
#include "HoaNoView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CHoaNoView

IMPLEMENT_DYNCREATE(CHoaNoView, CView)

BEGIN_MESSAGE_MAP(CHoaNoView, CView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()

// CHoaNoView construction/destruction

CHoaNoView::CHoaNoView() noexcept
{
	// TODO: add construction code here
	canhnho1.thietlap(180, 180, 240, 240);
	canhnho2.thietlap(180, 260, 240, 320);
	canhnho3.thietlap(260, 180, 320, 240);
	canhnho4.thietlap(260, 260, 320, 320);
	canh1.thietlap(200,270,300,340);
	canh2.thietlap(270,200, 340, 300);
	canh3.thietlap(200,160, 300,230);
	canh4.thietlap(160, 200,230, 300);
	hoa.thietlap(210,210,290,290);
	


}

CHoaNoView::~CHoaNoView()
{
}

BOOL CHoaNoView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CHoaNoView drawing

void CHoaNoView::OnDraw(CDC* /*pDC*/)
{
	CHoaNoDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
	CClientDC pDC(this);
	CPen* pen1;
	pen1 = new CPen(PS_SOLID, 2, RGB(0, 0, 0));
	pDC.SelectObject(pen1);
	CBrush* brushcanhnho = new CBrush(RGB(255, 105, 237));
	pDC.SelectObject(brushcanhnho);	
	canhnho1.ve(&pDC);
	canhnho2.ve(&pDC);
	canhnho3.ve(&pDC);
	canhnho4.ve(&pDC);
	CBrush* brushcanh = new CBrush(RGB(255, 0, 0));
	pDC.SelectObject(brushcanh);
	canh1.ve(&pDC);
	canh2.ve(&pDC);
	canh3.ve(&pDC);
	canh4.ve(&pDC);
	CBrush* brushhoa = new CBrush(RGB(221, 255, 0));
	pDC.SelectObject(brushhoa);
	hoa.ve(&pDC);
	//tạo ô
	CBrush* veo = new CBrush(RGB(245, 245, 245));
	pDC.SelectObject(veo);
	pDC.Rectangle(400, 400, 500, 450);
	pDC.TextOutW(430, 415, _T("No Hoa"));
	pDC.Rectangle(550, 400, 650, 450);
	pDC.TextOutW(580, 415, _T("Reset"));
}


// CHoaNoView diagnostics

#ifdef _DEBUG
void CHoaNoView::AssertValid() const
{
	CView::AssertValid();
}

void CHoaNoView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CHoaNoDoc* CHoaNoView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CHoaNoDoc)));
	return (CHoaNoDoc*)m_pDocument;
}
#endif //_DEBUG


// CHoaNoView message handlers


void CHoaNoView::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	if (point.x >= 400 && point.y >= 400 && point.x <= 500 && point.y <= 440)
	{
		CClientDC pDC(this);
		CPen* pen1;
		pen1 = new CPen(PS_SOLID, 2, RGB(0, 0, 0));
		pDC.SelectObject(pen1);
		CBrush* brushcanhnho = new CBrush(RGB(255, 105, 237));
		pDC.SelectObject(brushcanhnho);
		canhnho1.no(&pDC, -7, -7, 0, 0);
		canhnho1.ve(&pDC);
		canhnho2.no(&pDC, -7, 0, 0, +7);
		canhnho2.ve(&pDC);
		canhnho3.no(&pDC, 0, -7, +7, 0);
		canhnho3.ve(&pDC);
		canhnho4.no(&pDC, 0, 0, +7, +7);
		canhnho4.ve(&pDC);
		CBrush* brushcanh = new CBrush(RGB(255, 0, 0));
		pDC.SelectObject(brushcanh);
		canh1.no(&pDC, 0, 0, 0, 10);
		canh1.ve(&pDC);
		canh2.no(&pDC, 0, 0, 10, 0);
		canh2.ve(&pDC);
		canh3.no(&pDC, 0, -10, 0, 0);
		canh3.ve(&pDC);
		canh4.no(&pDC, -10, 0, 0, 0);
		canh4.ve(&pDC);
		CBrush* brushhoa = new CBrush(RGB(221, 255, 0));
		pDC.SelectObject(brushhoa);
		hoa.no(&pDC, -3, -3, 3, 3);
		hoa.ve(&pDC);
	}
	
	CView::OnLButtonDown(nFlags, point);
}


void CHoaNoView::OnRButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default

	CView::OnRButtonDown(nFlags, point);

}
