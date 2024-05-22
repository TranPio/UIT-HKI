#pragma once
#include <iostream>
#include <string>
using namespace std;
class Khungxe
{
protected:
	int loai;
	string Ma;
	int Dongia;
	string Hangsanxuat;
public:
	Khungxe();
	virtual void Nhap();
	virtual void Xuat();
	virtual int Tinh_tien_khung_xe() = 0;
	virtual int getloai();
};

