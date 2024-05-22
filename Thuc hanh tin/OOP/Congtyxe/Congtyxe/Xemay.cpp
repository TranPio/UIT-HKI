#include<iostream>
#include"Xemay.h"
using namespace std;
void Xemay::HamNhapbanhxe() {
	this->ThongTinBanhXe = new Banhxe*[2];
	for (int i = 0; i < 2; i++) {
		cout << "\nChon loai banh xe (1-Loai D, 2-Loai E): ";
		int luachon;
		cin >> luachon;
		cout << "\nNhap banh xe thu " << i + 1;
		if (luachon == 1) {
			this->ThongTinBanhXe[i] = new banhxeloaiD;
		}
		else if (luachon == 2) {
			this->ThongTinBanhXe[i] = new banhxeloaiE;
		}
		this->ThongTinBanhXe[i]->nhap();
	}
}
void Xemay::nhap() {
	cout << "\nNhap ma so xe: ";
	cin >> this->masoxe;
	cout << "\nChon loai dong co (1-Loai A, 2-Loai B, 3-Loai C): ";
	int luachon;
	cin >> luachon;
	if (luachon == 1){
		this->ThongTinDongCo = new DongcoloaiA;
	}
	else if (luachon == 2)
	{
		this->ThongTinDongCo = new DongcoloaiB;
	}
	else if (luachon == 3){
		this->ThongTinDongCo = new DongcoloaiC;
	}
	ThongTinDongCo->nhap();
	cout << "\nChon loai khung xe (1-Loai nhom, 2-Loai nhua): ";
	int lc;
	cin >> lc;
	if (lc == 1){
		this->ThongTinKhungXe = new Khungnhom;
	}
	else if (lc ==2)
	{
		this->ThongTinKhungXe = new Khungnhua;
	}
	ThongTinKhungXe->nhap();
	HamNhapbanhxe();
}
void Xemay::xuat() {
	cout << "\nXe may: \t" << this->masoxe << "\t";
	tinhtien();
	cout << "\nDong co: \t";
	this->ThongTinDongCo->xuat();
	cout << "\nBanh xe 1: \t";
	this->ThongTinBanhXe[0]->xuat();
	cout << "\nBanh xe 2: \t";
	this->ThongTinBanhXe[1]->xuat();
	cout << "\nKhung xe: \t";
	this->ThongTinKhungXe->xuat();
};
void Xemay::xuatfile(fstream& fileout)const {
	fileout << "\nXe may: \t" << this->masoxe << "\t" << this->tongtien;
	fileout << "\nDong co: \t";
	this->ThongTinDongCo->xuatfile(fileout);
	fileout << "\nBanh xe 1: \t";
	this->ThongTinBanhXe[0]->xuatfile(fileout);
	fileout << "\nBanh xe 2: \t";
	this->ThongTinBanhXe[1]->xuatfile(fileout);
	fileout << "\nKhung xe: \t";
	this->ThongTinKhungXe->xuatfile(fileout);
}
void Xemay::tinhtien() {
	tongtien = ThongTinDongCo->getDonGia() + ThongTinKhungXe->getDonGia() + ThongTinBanhXe[0]->getDonGia() + ThongTinBanhXe[1]->getDonGia();
	cout << tongtien;
}
Xemay::~Xemay() {
	if (this->ThongTinBanhXe != NULL) {
		delete this->ThongTinBanhXe;
	}
	if (this->ThongTinDongCo != NULL) {
		delete this->ThongTinDongCo;
	}
	if (this->ThongTinKhungXe != NULL) {
		delete this->ThongTinKhungXe;
	}
}