#pragma once
#include <iostream>
#include <string>
using namespace std;
class SanPham
{
protected:
	string masp;
	string tensp;
	int giaban;
	string noisx;
	int loai;
public:
	SanPham();
	virtual void Nhap();
	virtual void Xuat();
	virtual int getloai();
	virtual int Tinh_gia_ban() = 0;
};

