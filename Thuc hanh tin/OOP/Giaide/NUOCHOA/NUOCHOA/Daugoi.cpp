#include "Daugoi.h"

Daugoi::Daugoi()
{
	loai = 4;
}

void Daugoi::Nhap()
{
	cout << "\n\t Nhap dung tich: ";
	cin >> dungtich;
}

void Daugoi::Xuat(fstream& os)
{
	os << "\n\t Dung tich la: " << dungtich << endl;
}

int Daugoi::Gia_goi_sp()
{
	return 0;
}

int Daugoi::getloai()
{
	return loai;
}

Daugoikho::Daugoikho()
{
	loai = 5;
}

void Daugoikho::Nhap()
{
	Sanpham::Nhap();
	Daugoi::Nhap();
}

void Daugoikho::Xuat(fstream& os)
{
	os << "\n Dau goi: ";
	Sanpham::Xuat(os);
	os << "\n\t Dau goi kho" << endl;
	Daugoi::Xuat(os);
}

int Daugoikho::Gia_goi_sp()
{
	return dungtich*20;
}

int Daugoikho::getloai()
{
	return loai;
}

Daugoidau::Daugoidau()
{
	loai = 6;
}

void Daugoidau::Nhap()
{
	Sanpham::Nhap();
	cout << "\n\t Dat tieu chuan ( 1- tieu chuan 1, 2-tieu chuan 2 ): ";
	cin >> tieuchuan;
	Daugoi::Nhap();
}

void Daugoidau::Xuat(fstream& os)
{
	os << "\n Dau goi: ";
	Daugoi::Xuat(os);
	os << "\n\t Dau goi dau" << endl;
	if (tieuchuan == 1) {
		os << "\n\t Dat tieu chuan 1" << endl;
	}
	else {
		os << "\n\t Dat tieu chuan 2" << endl;
	}
	Daugoi::Xuat(os);
}

int Daugoidau::Gia_goi_sp()
{
	if (tieuchuan == 1) {
		return dungtich * 30;
	}
	else {
		return dungtich * 40;
	}
}

int Daugoidau::getloai()
{
	return loai;
}
