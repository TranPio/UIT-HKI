#pragma once
#include "Ve.h"
class VeThuong :public Ve
{
private:
	//int sodichvu;
	//vector<VeThuong*> ds_dichvu;
public:
	VeThuong();
	void Nhap();
	void Xuat();
	int Tinh_tien();
	int getloai();
};

