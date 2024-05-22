#pragma once
#include<string>
#include<fstream>
using namespace std;
class Khungxe {
protected:
	string maso;
	string loai;
	int donGia;
	string hangSX;
public:
	virtual void nhap();
	virtual void xuat()const;
	virtual void xuatfile(fstream&)const;
	virtual int getDonGia()const;
};
class Khungnhua : public Khungxe {
public:
	Khungnhua();
};
class Khungnhom : public Khungxe {
public:
	Khungnhom();
};