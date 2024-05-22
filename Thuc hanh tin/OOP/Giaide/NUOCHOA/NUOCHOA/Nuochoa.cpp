#include "Nuochoa.h"

Nuochoa::Nuochoa()
{
	loai = 1;
}

void Nuochoa::Nhap()
{
	Sanpham::Nhap();
	cout << "\n\t Nhap vao dung tich: ";
	cin >> dungtich;
}

void Nuochoa::Xuat(fstream& os)
{
	os << "\n\t Dung tich la: " << dungtich << endl;
}

int Nuochoa::Gia_goi_sp()
{
	return 0;
}

int Nuochoa::getloai()
{
	return loai;
}

NuochoaHong::NuochoaHong()
{
	loai = 2;
}

void NuochoaHong::Nhap()
{
	Nuochoa::Nhap();
}

void NuochoaHong::Xuat(fstream& os)
{
	os << "\n Nuoc hoa: ";
	Sanpham::Xuat(os);
	os << "\n\t Nuoc hoa hong" << endl;
	Nuochoa::Xuat(os);
}

int NuochoaHong::Gia_goi_sp()
{
	return dungtich*20;
}

int NuochoaHong::getloai()
{
	return loai;
}

NuochoaCuc::NuochoaCuc()
{
	loai = 3;
}

void NuochoaCuc::Nhap()
{
	Nuochoa::Nhap();
}

void NuochoaCuc::Xuat(fstream& os)
{
	os << "\n Nuoc hoa: ";
	Sanpham::Xuat(os);
	os << "\n\t Nuoc hoa cuc" << endl;
	Nuochoa::Xuat(os);
}

int NuochoaCuc::Gia_goi_sp(){
	return dungtich*15;
}

int NuochoaCuc::getloai()
{
	return loai;
}
