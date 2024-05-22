#pragma once
#include "Sanpham.h"
class Nuochoa:public Sanpham
{
protected:
	int dungtich;
public:
	Nuochoa();
	virtual void Nhap();
	virtual void Xuat(fstream& os);
	virtual int Gia_goi_sp();
	virtual int getloai();
};
class NuochoaHong :public Nuochoa
{
public:
	NuochoaHong();
	void Nhap();
	void Xuat(fstream& os);
	int Gia_goi_sp();
	int getloai();

};
class NuochoaCuc :public Nuochoa {
public:
	NuochoaCuc();
	void Nhap();
	void Xuat(fstream& os);
	int Gia_goi_sp();
	int getloai();
};
