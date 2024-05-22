#include "DongcoC.h"

DongcoC::DongcoC()
{
	Loai = 3;
}

DongcoC::~DongcoC()
{
}

void DongcoC::Nhap()
{
	Dongco::Nhap();
}

void DongcoC::Xuat()
{
	Dongco::Xuat();
	cout << "\n Loai dong co la: C";
}

int DongcoC::Tinhtien()
{
	return 400;
}

int DongcoC::getloai()
{
	return Loai;
}
