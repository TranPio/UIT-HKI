#pragma once
#include "Canbo.h"
#include <iostream>
#include <string>
using namespace std;
class Giangvien : public Canbo
{
private:
	string Khoa;
	string Trinhdo;
	int Sotietday;

public:
	void Nhap();
	void Xuat(ostream& os);
	double Tinh_tien_luong();
	Giangvien();
	~Giangvien();
};

