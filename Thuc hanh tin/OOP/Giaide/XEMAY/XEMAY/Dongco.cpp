#include "Dongco.h"

Dongco::Dongco()
{
	Loai = 0;
}

Dongco::~Dongco()
{
}

void Dongco::Nhap()
{
	cin.ignore();
	cout << "\n Nhap vao ma loai dong co:";
	getline(cin, Ma);
	cout << "\n Nhap hang san xuat: ";
	getline(cin, Hangsanxuat);
}

void Dongco::Xuat()
{
	cout << "\n Ma dong co la: " << Ma;
	cout << "\n Hang san xuat la: " << Hangsanxuat;
}

int Dongco::getloai()
{
	return 0;
}
