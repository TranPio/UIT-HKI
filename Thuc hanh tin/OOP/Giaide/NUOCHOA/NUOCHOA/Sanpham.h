#pragma once
#include<iostream>
#include<string>
#include <vector>
#include <fstream>
using namespace std;
class Sanpham
{
protected:
	string maso;
	int loai;
public:
	Sanpham();
	virtual int getloai();
	virtual void Nhap();
	virtual void Xuat(fstream &os);
	virtual int Gia_goi_sp() = 0;
};

