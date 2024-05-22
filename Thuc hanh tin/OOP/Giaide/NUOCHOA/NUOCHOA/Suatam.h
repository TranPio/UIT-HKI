#pragma once
#include "Sanpham.h"
class Suatam:public Sanpham
{
protected:
	int dungtich;
public:
	Suatam();
	virtual void Nhap();
	virtual void Xuat(fstream& os);
	virtual int Gia_goi_sp();
	virtual int getloai();
};
class Suatamkho :public Suatam {
public:
	Suatamkho();
	virtual void Nhap();
	virtual void Xuat(fstream& os);
	virtual int Gia_goi_sp();
	virtual int getloai();
};
class Suatamnhon :public Suatam {
public:
	Suatamnhon();
	virtual void Nhap();
	virtual void Xuat(fstream& os);
	virtual int Gia_goi_sp();
	virtual int getloai();
};

