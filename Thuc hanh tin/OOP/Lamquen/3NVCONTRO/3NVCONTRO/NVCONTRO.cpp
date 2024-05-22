#include "NVCONTRO.h"
#include <iostream>
#include <string>
using namespace std;
void NVCONTRO::nhap() {
	cout <<endl<< "Nhap vao ten nhan vien: ";
	getline(cin, hoten);
	cout << endl<<"Nhap vao so tuoi: ";
	cin >> tuoi;
	cin.ignore();
	cout << endl << "Nhap vao gioi tinh: ";
	getline(cin, gioitinh);
	cout << endl << "Nhap vao dia chi: ";
	getline(cin, diachi);
	cout << endl << "Nhap vao so dien thoai: ";
	getline(cin, sdt);
	cout << endl << "Nhap vao chieu cao: ";
	cin >> chieucao;
	cout << endl << "Nhap vao cang nang: ";
	cin >> cannag;
}
void NVCONTRO::xuat() {
	cout << endl << "Ten nhan vien la: "<<hoten;
	cout << endl << "Tuoi la: " << tuoi;
	cout << endl << "Gioi tinh la: " << gioitinh;
	cout << endl << "Dia chi la: " << diachi;
	cout << endl << "So dien thoai la: " << sdt;
	cout << endl << "Chieu cao la: " << chieucao;
	cout << endl << "Cang nang la: " << cannag;
}
NVCONTRO::NVCONTRO() {

};
NVCONTRO::~NVCONTRO() {

};
void Nhanvien_suaongnuoc::nhap() {
	NVCONTRO::nhap();
	cout << endl << "Nhap vao so gio sua ong nuoc: ";
	cin >> so_h_sua;
}
void Nhanvien_suaongnuoc::xuat() {
	NVCONTRO::xuat();
	cout << "So gio sua ong nuoc la: " << so_h_sua;
	cout << endl << "Tien luong: " << size_t(tinhtien());
}
float Nhanvien_suaongnuoc::tinhtien() {
	return so_h_sua * 50000;
}
Nhanvien_suaongnuoc::Nhanvien_suaongnuoc() {

}
Nhanvien_suaongnuoc::~Nhanvien_suaongnuoc() {

}
void Nhanvien_giaohang::nhap() {
	NVCONTRO::nhap();
	cout << endl << "Nhap vao so don hang giao: ";
	cin >> sohanggiao;
}
void Nhanvien_giaohang::xuat() {
	NVCONTRO::xuat();
	cout << endl << "So don hang da giao la: " << sohanggiao;
	cout << endl << "Tien luong: " << size_t(tinhtien());
}
float Nhanvien_giaohang::tinhtien() {
	return sohanggiao * 33500;
}
Nhanvien_giaohang::Nhanvien_giaohang() {

}
Nhanvien_giaohang::~Nhanvien_giaohang() {

}
void Nhanvien_xeom::nhap() {
	NVCONTRO::nhap();
	cout << endl<<"Nhap vao so km: ";
	cin >> sokm;
}
void Nhanvien_xeom::xuat() {
	NVCONTRO::xuat();
	cout << endl << "So km la: " << sokm;
	cout << endl << "Tien luong: " << size_t(tinhtien());
}
float Nhanvien_xeom::tinhtien() {
	return sokm * 10000;
}
Nhanvien_xeom::Nhanvien_xeom() {

}
Nhanvien_xeom::~Nhanvien_xeom() {

}