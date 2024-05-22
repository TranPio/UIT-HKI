#include "Sanpham.h"

Sanpham::Sanpham()
{
	loai = 0;
}

int Sanpham::getloai()
{
	return 0;
}

void Sanpham::Nhap()
{
	cin.ignore();
	cout << "\n\t Nhap ma so: ";
	getline(cin, maso);
}

void Sanpham::Xuat(fstream &os)
{
	os << "\nMa so la: " << maso << endl;
}
