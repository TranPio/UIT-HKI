#pragma once
#include <iostream>
#include <string>
using namespace std;
class Banhxe
{
protected:
	int loai;
	string Ma;
	int Dongia;
	string Hangsanxuat;
public:
	Banhxe();
	virtual void Nhap();
	virtual void Xuat();
	virtual int Tinh_tien_banh_xe() = 0;
	virtual int getloai();
};

