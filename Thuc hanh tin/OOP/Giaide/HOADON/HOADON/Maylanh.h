#pragma once
#include "SanPham.h"
class Maylanh :public SanPham
{
protected:
	int inverter;
public:
	Maylanh();
	virtual void Nhap();
	virtual void Xuat();
	virtual int getloai();
	virtual int Tinh_gia_ban();
};

