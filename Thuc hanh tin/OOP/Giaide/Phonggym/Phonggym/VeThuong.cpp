#include "VeThuong.h"

VeThuong::VeThuong()
{
	loai = 2;
}

void VeThuong::Nhap()
{
	Ve::Nhap();
	cout << "\n Nhap vao so dich vu su dung them ";
	cin >> sodichvu;
}

void VeThuong::Xuat()
{
	cout << "\n Day la VE THUONG"<<endl;
	Ve::Xuat();
	cout << "\n So dich vu mua them la: " << sodichvu<<endl;
}

int VeThuong::Tinh_tien()
{
	return 500000+sodichvu*100000;
}

int VeThuong::getloai()
{
	return loai;
}
