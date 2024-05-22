#pragma once
#include "Dongco.h"
class DongcoB :public Dongco
{
private:
	int tieuchuan;
public:
	DongcoB();
	~DongcoB();
	void Nhap();
	void Xuat();
	int Tinhtien();
	int getloai();
};

