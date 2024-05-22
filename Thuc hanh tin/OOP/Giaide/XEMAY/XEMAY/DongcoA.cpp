#include "DongcoA.h"

DongcoA::DongcoA()
{
	Loai = 1;
}

DongcoA::~DongcoA()
{
}

void DongcoA::Nhap()
{
	Dongco::Nhap();
}

void DongcoA::Xuat()
{
	Dongco::Xuat();
	cout << "\n Loai dong co la: A";
}

int DongcoA::Tinhtien()
{
	return 500;
}

int DongcoA::getloai()
{
	return Loai;
}
