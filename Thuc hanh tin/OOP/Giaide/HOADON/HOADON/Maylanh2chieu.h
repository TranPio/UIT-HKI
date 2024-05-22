#pragma once
#include "Maylanh.h"
using namespace std;
class Maylanh2chieu :public Maylanh
{
private:
	int khu_mui;
	int khang_khuan;
public:
	Maylanh2chieu();
	void Nhap();
	void Xuat();
	int getloai();
	int Tinh_gia_ban();
};

