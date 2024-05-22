#include "MayquatSacdien.h"

MayquatSacdien::MayquatSacdien()
{
	loai =5;
}

void MayquatSacdien::Nhap()
{
	Mayquat::Nhap();
	cout << "\n Nhap vao dung luong pin: ";
	cin >> Dung_luong_pin;
}

void MayquatSacdien::Xuat()
{
	Mayquat::Xuat();
	cout << "\n\t Day la MAY QUAT SAC DIEN " << endl;
	cout << "\n\t Dung luong pin cua quat la: " << Dung_luong_pin << endl;
}

int MayquatSacdien::getloai()
{
	return loai;
}

int MayquatSacdien::Tinh_gia_ban()
{
	return Dung_luong_pin * 500;
}
