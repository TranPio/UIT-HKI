#include "KhungxeNHom.h"

KhungxeNhom::KhungxeNhom()
{
	loai = 1;
}

void KhungxeNhom::Nhap()
{
	Khungxe::Nhap();
}

void KhungxeNhom::Xuat()
{
	Khungxe::Xuat();
	cout << "\n Loai khung xe la: Nhom";
}

int KhungxeNhom::getloai()
{
	return loai;
}

int KhungxeNhom::Tinh_tien_khung_xe()
{
	return 500;
}
