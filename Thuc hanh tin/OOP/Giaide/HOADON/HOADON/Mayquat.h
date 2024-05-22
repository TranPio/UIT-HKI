#pragma once
#include "SanPham.h"
class Mayquat:public SanPham
{
public:
	Mayquat();
	virtual void Nhap();
	virtual void Xuat();
	virtual int getloai();
	virtual int Tinh_gia_ban();
};

