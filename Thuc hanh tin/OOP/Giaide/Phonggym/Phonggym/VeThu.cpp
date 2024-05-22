#include "VeThu.h"

VeThu::VeThu()
{
	loai = 3;
}

void VeThu::Nhap()
{
	Ve::Nhap();
	cout << "\n Nhap vao so dich vu su dung them ";
	cin >> sodichvu;
}

void VeThu::Xuat()
{
	cout << "\n Day la VE THU"<<endl;
	Ve::Xuat();
	cout << "\n So dich vu mua them la: " << sodichvu <<endl;
}

int VeThu::Tinh_tien()
{
	return 150000 + sodichvu * 50000;
}

int VeThu::getloai()
{
	return loai;
}
