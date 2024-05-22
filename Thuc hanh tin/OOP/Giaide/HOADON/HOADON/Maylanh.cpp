#include "Maylanh.h"

Maylanh::Maylanh()
{
	loai = 2;
}

void Maylanh::Nhap()
{
	SanPham::Nhap();
	cout << "\n Nhap vao may lanh co inverter(1-CO,2-KHONG): ";
	cin >> inverter;
}

void Maylanh::Xuat()
{
	SanPham::Xuat();
	cout << "\n\t Day la san pham: MAY LANH " << endl;
	if (inverter == 1) {
		cout << "\n\t MAY LANH CO INVERTER "<<endl;
	}
	else {
		cout << "\n\t MAY LANH KHONG CO INVERTER"<<endl;
	}
}


int Maylanh::getloai()
{
	return loai;
}

int Maylanh::Tinh_gia_ban()
{
	return 0;
}
