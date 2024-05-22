#include "VeVip.h"

VeVip::VeVip()
{
	loai = 1;
}

void VeVip::Nhap()
{
	Ve::Nhap();
}

void VeVip::Xuat()
{
	cout << "\n Day la VE VIP"<<endl;
	Ve::Xuat();
	cout << "\n Duoc su dung tat ca dich vu"<<endl;
}

int VeVip::Tinh_tien()
{
	return 1000000;
}



int VeVip::getloai()
{
	return loai;
}
