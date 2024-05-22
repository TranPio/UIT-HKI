#pragma once
#include "Mayquat.h"
using namespace std;
class MayquatSacdien :public Mayquat
{
private:
	int Dung_luong_pin;
public:
	MayquatSacdien();
	void Nhap();
	void Xuat();
	int getloai();
	int Tinh_gia_ban();
};

