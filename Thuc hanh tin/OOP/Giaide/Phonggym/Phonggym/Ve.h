#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Ve
{
protected:
	string Mave;
	string Hoten;
	int Namsinh;
	int sodichvu;
	int loai;
public:
	Ve();
	virtual void Nhap();
	virtual void Xuat();
	virtual int Tinh_tien() = 0;
	virtual int getloai();
};

