#pragma once
#include "Mayquat.h"
using namespace std;
class MayquatHoinuoc :public Mayquat
{
private:
	int Dung_tich_nuoc;
public:
	MayquatHoinuoc();
	void Nhap();
	void Xuat();
	int getloai();
	int Tinh_gia_ban();
};

