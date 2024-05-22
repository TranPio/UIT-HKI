#include "BanhxeE.h"

BanhxeE::BanhxeE()
{
	loai = 2;
}

void BanhxeE::Nhap()
{
	Banhxe::Nhap();
}

void BanhxeE::Xuat()
{
	Banhxe::Xuat();
	cout << "\n Loai banh xe la: E";
}

int BanhxeE::getloai()
{
	return loai;
}

int BanhxeE::Tinh_tien_banh_xe()
{
	return 300;
}
