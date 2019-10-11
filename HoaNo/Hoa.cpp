#include "pch.h"
#include "Hoa.h"

Hoa::Hoa(void)
{

}
void Hoa::thietlap(int mx1, int my1, int mx3, int my3)
{
	x1 = mx1; y1 = my1;
	x3 = mx3; y3 = my3;
}
void Hoa::ve(CClientDC* pDC)
{
	pDC->Ellipse(x1, y1, x3, y3);
}
void Hoa::no(CClientDC* pDC, int a1, int a2, int b1, int b2)
{
	x1 += a1; y1 += a2;
	x3 += b1; y3 += b2;
}
Hoa::~Hoa(void)
{

}