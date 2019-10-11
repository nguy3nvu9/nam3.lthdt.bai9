#pragma once
class Hoa
{
private:
	int x1, y1, x3, y3;
public:
	Hoa(void);
	void thietlap(int x1, int y1, int x3, int y3);
	void ve(CClientDC* pDC);
	void no(CClientDC* pDC, int a1, int a2, int b1, int b2);
	~Hoa(void);
};

