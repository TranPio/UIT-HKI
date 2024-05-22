#pragma once
#include "Sanpham.h"
class Daugoi:public Sanpham
{
protected:
	int dungtich;
public:
	Daugoi();
	virtual void Nhap();
	virtual void Xuat(fstream &os);
	virtual int Gia_goi_sp();
	virtual int getloai();
};
class Daugoikho :public Daugoi {
public:
	Daugoikho();
    void Nhap();
	void Xuat(fstream& os) ;
	int Gia_goi_sp();
	int getloai();
};
class Daugoidau :public Daugoi {
private:
	int tieuchuan;
public:
	Daugoidau();
	void Nhap();
	void Xuat(fstream& os);
	int Gia_goi_sp();
	int getloai();
};

