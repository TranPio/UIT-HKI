#include "KhungxeNhua.h"

KhungxeNhua::KhungxeNhua()
{
	loai = 2;
}

void KhungxeNhua::Nhap()
{
	Khungxe::Nhap();
}

void KhungxeNhua::Xuat()
{
	Khungxe::Xuat();
	cout << "\n Loai khung xe la: Nhua";
}

int KhungxeNhua::getloai()
{
	return loai;
}

int KhungxeNhua::Tinh_tien_khung_xe()
{
	return 200;
}
