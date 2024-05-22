#pragma once
#include<string>
#include<fstream>
using namespace std;
class Dongco {
protected:
	string maso;
	string loaidongco;
	int gia;
	string Hangsanxuat;
public:
	virtual void nhap();
	virtual void xuat()const;
	virtual void xuatfile(fstream&)const;
	virtual int getDonGia()const;
};
class DongcoloaiB : public Dongco {
protected:
	int Thongtinxacdinh;
public:
	void nhap();
	void xuat()const;
	void xuatfile(fstream&)const;
};
class DongcoloaiA : public Dongco {
public:
	DongcoloaiA();
};
class DongcoloaiC : public Dongco {
public:
	DongcoloaiC();
};
