#include "SanPham.h"

SanPham::SanPham()
{
	loai = 0;
}

void SanPham::Nhap()
{
	cin.ignore();
	cout << "\n Nhap vao ma san pham: ";
	getline(cin, masp);
	cout << "\n Nhap vao ten san pham: ";
	getline(cin, tensp);
	cout << "\n Nhap vao noi san xuat: ";
	getline(cin, noisx);
}

void SanPham::Xuat()
{
	cout << "\n\t Ma san pham: "<< masp<<endl;
	cout << "\n\t Ten san pham: " << tensp << endl;
	cout << "\n\t Noi san xuat: "<<noisx<<endl;
}

int SanPham::getloai()
{
	return loai;
}
