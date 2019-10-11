
// HoaNoView.h : interface of the CHoaNoView class
//

#pragma once
#include"Hoa.h"


class CHoaNoView : public CView
{
protected: // create from serialization only
	CHoaNoView() noexcept;
	DECLARE_DYNCREATE(CHoaNoView)

// Attributes
public:
	CHoaNoDoc* GetDocument() const;
	Hoa hoa,canh1,canh2,canh3,canh4,canhnho1,canhnho2,canhnho3,canhnho4;

// Operations
public:
	


// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:

// Implementation
public:
	virtual ~CHoaNoView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};

#ifndef _DEBUG  // debug version in HoaNoView.cpp
inline CHoaNoDoc* CHoaNoView::GetDocument() const
   { return reinterpret_cast<CHoaNoDoc*>(m_pDocument); }
#endif

