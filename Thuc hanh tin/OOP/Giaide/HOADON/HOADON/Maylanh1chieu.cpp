#include "Maylanh1chieu.h"

Maylanh1chieu::Maylanh1chieu()
{
	loai=6;
}

void Maylanh1chieu::Nhap()
{
	Maylanh::Nhap();
}

void Maylanh1chieu::Xuat()
{
	Maylanh::Xuat();
	cout << "\n\t Day la MAY LANH 1 CHIEU " << endl;
}

int Maylanh1chieu::getloai()
{
	return loai;
}

int Maylanh1chieu::Tinh_gia_ban()
{
	if (inverter == 1) {
		return 1500;
	}
	else if (inverter == 2) {
		return 1000;
	}
}
