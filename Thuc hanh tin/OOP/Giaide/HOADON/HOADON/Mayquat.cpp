#include "Mayquat.h"

Mayquat::Mayquat()
{
	loai = 1;
}

void Mayquat::Nhap()
{
	SanPham::Nhap();
}

void Mayquat::Xuat()
{
	SanPham::Xuat();
	cout << "\n\t Day la san pham: MAY QUAT " << endl;
}


int Mayquat::getloai()
{
	return loai;
}

int Mayquat::Tinh_gia_ban()
{
	return 0;
}
