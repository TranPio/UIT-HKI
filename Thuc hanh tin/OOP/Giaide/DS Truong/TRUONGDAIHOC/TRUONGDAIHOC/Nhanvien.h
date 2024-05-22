#pragma once
#include "Canbo.h"
#include <iostream>
#include <string>
using namespace std;
class Nhanvien : public Canbo
{
private:
	int Songaycong;
	string Chucvu, Phongban;
public:
	void Nhap();
	void Xuat(ostream& os);
	double Tinh_tien_luong();
	Nhanvien();
	~Nhanvien();
};

