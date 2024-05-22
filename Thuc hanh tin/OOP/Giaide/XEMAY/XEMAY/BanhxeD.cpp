#include "BanhxeD.h"

BanhxeD::BanhxeD()
{
	loai = 1;
}

void BanhxeD::Nhap()
{
	Banhxe::Nhap();
}

void BanhxeD::Xuat()
{
	Banhxe::Xuat();
	cout << "\n Loai banh xe la: D";
}

int BanhxeD::getloai()
{
	return loai;
}

int BanhxeD::Tinh_tien_banh_xe()
{
	return 400;
}
