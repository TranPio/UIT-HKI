#include "Donhang.h"

void Donhang::Nhap()
{
	cin.ignore();
	cout << "\n Ma don hang: ";
	getline(cin, Madonhang);
	cout << "\n Ngay lap don hang: ";
	getline(cin, Ngaylapdonhang);
	cout << "\n Thong tin khach hang: ";
	cout << "\n\t Ma khach hang: ";
	getline(cin, Makhachhang);
	cout << "\n\t Ten khach hang: ";
	getline(cin, Tenkhachhang);
	cout << "\n\t Dia chi: ";
	getline(cin, Diachi);
	cout << "\n\t So dien thoai: ";
	getline(cin, SDT);
	GoiSanpham::Nhap();
}

void Donhang::Xuat(fstream& os)
{
	os << "\nDon hang: " << endl << " Ma don hang: " << Madonhang << " || " << " Ngay lap don hang: " << Ngaylapdonhang << " || " << " Gia tri don hang: " << GoiSanpham::Tong_tien() << endl;
	os << "\n\t Thong tin khach hang: " << endl << " Ma khach hang: " << Makhachhang << " || " << " Ten: " << Tenkhachhang << " || " << " Dia chi: " << Diachi << " || " << " So dien thoai: " << SDT << endl;
	GoiSanpham::Xuat(os);
}

int Donhang::Tong_hoa_don()
{
	return (size_t)GoiSanpham::Tong_tien();
}
