#include "Khungxe.h"

Khungxe::Khungxe()
{
	loai = 0;
}

void Khungxe::Nhap()
{
	cin.ignore();
	cout << "\nNhap vao ma khung xe: ";
	getline(cin, Ma);
	cout << "\n Nhap vao hang san xuat: ";
	getline(cin, Hangsanxuat);
}

void Khungxe::Xuat()
{
	cout << "\n Ma khung xe la: " << Ma;
	cout << "\n Hang san xuat la: " << Hangsanxuat;
}

int Khungxe::getloai()
{
	return 0;
}
