#include "Banhxe.h"

Banhxe::Banhxe()
{
	loai = 0;
}

void Banhxe::Nhap()
{ 
	cin.ignore();
	cout << "\nNhap vao ma banh xe: ";
	getline(cin, Ma);
	cout << "\n Nhap vao hang san xuat: ";
	getline(cin, Hangsanxuat);
}

void Banhxe::Xuat()
{
	cout << "\n Ma banh xe la: " << Ma;
	cout << "\n Hang san xuat la: " << Hangsanxuat;
}

int Banhxe::getloai()
{
	return 0;
}
