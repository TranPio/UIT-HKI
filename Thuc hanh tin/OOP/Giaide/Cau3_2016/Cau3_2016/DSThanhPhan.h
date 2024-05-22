#pragma once
#include "Thanhphan.h"
class DSThanhPhan
{
private:
	vector<Thanhphan*> dstp;
	int n, x1, y1;
	float dai, rong;
public:
	void nhap();
	friend int kiemtra(int x, int y);
	friend int kiemtratuongdong(int x, int y, int z);
	void xuat();
};