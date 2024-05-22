#pragma once
#include <iostream>
#include <string>
using namespace std;
class Dongco
{
protected:
	string Ma;
	int Loai;
	int Dongia;
	string Hangsanxuat;
public:
	Dongco();
	~Dongco();
	virtual void Nhap();
	virtual void Xuat();
	virtual int Tinhtien() = 0;
	virtual int getloai();
};

