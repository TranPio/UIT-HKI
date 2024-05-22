#include "MayquatHoinuoc.h"

MayquatHoinuoc::MayquatHoinuoc()
{
	loai =4;
}

void MayquatHoinuoc::Nhap()
{
	Mayquat::Nhap();
	cout << "\n Nhap vao dung tich quat: ";
	cin >> Dung_tich_nuoc;
}

void MayquatHoinuoc::Xuat()
{
	Mayquat::Xuat();
	cout << "\n\t Day la MAY HOI NUOC " << endl;
	cout << "\n\t Dung tich nuoc cua quat la: " << Dung_tich_nuoc << endl;
}

int MayquatHoinuoc::getloai()
{
	return loai;
}

int MayquatHoinuoc::Tinh_gia_ban()
{
	return Dung_tich_nuoc*400;
}
