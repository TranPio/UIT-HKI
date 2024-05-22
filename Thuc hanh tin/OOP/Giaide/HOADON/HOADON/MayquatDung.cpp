#include "MayquatDung.h"

MayquatDung::MayquatDung()
{
	loai = 3;
}

void MayquatDung::Nhap()
{
	Mayquat::Nhap();
}

void MayquatDung::Xuat()
{
	Mayquat::Xuat();
	cout << "\n\t Day la MAY QUAT DUNG " << endl;
}

int MayquatDung::getloai()
{
	return loai;
}

int MayquatDung::Tinh_gia_ban()
{
	return 500;
}
