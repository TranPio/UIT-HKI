#pragma once
#include<string>
#include<fstream>
using namespace std;
class Banhxe {
protected:
	string maso;
	string loai;
	int donGia;
	string hangSX;
public:
	Banhxe() {
		this->maso = "***";
		this->hangSX = "***";
	}
	virtual void nhap();
	virtual void xuat()const;
	virtual void xuatfile(fstream&)const;
	virtual int getDonGia()const;
};
class banhxeloaiD : public Banhxe {
public:
	banhxeloaiD();
};
class banhxeloaiE : public Banhxe {
public:
	banhxeloaiE();
};