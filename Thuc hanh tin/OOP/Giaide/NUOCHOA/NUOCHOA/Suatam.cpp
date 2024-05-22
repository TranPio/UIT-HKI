#include "Suatam.h"

Suatam::Suatam()
{
	loai = 8;
}

void Suatam::Nhap()
{
	Sanpham::Nhap();
	cout << "\n\t Nhap vao dung tich: ";
	cin >> dungtich;
}

void Suatam::Xuat(fstream& os)
{
	os << "\n\t Dung tich la: " << dungtich << endl;
}

int Suatam::Gia_goi_sp()
{
	return 0;
}

int Suatam::getloai()
{
	return loai;
}

Suatamkho::Suatamkho()
{
	loai = 9;
}

void Suatamkho::Nhap()
{
	Suatam::Nhap();
}

void Suatamkho::Xuat(fstream& os)
{
	os << "\n Sua tam: ";
	Sanpham::Xuat(os);
	os << "\n\t Sua tam kho" << endl;
	Suatam::Xuat(os);
}

int Suatamkho::Gia_goi_sp()
{
	return dungtich*20;
}

int Suatamkho::getloai()
{
	return loai;
}

Suatamnhon::Suatamnhon()
{
	loai = 10;
}

void Suatamnhon::Nhap()
{
	Suatam::Nhap();
}

void Suatamnhon::Xuat(fstream& os)
{
	os << "\n Sua tam: ";
	Sanpham::Xuat(os);
	os << "\n\t Sua tam dau" << endl;
	Suatam::Xuat(os);
}

int Suatamnhon::Gia_goi_sp()
{
	return dungtich*40;
}

int Suatamnhon::getloai()
{
	return loai;
}
