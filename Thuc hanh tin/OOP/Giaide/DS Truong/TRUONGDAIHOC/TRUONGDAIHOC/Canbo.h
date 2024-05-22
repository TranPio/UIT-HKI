#pragma once
#include <iostream>
#include <string>
using namespace std;

class Canbo
{
protected:
	string Hoten;
	int Phucap;
	float Hesoluong;
public:
	virtual void Nhap();
	virtual void Xuat(ostream& os);
	virtual double Tinh_tien_luong() = 0;
	Canbo();
	~Canbo();
};

