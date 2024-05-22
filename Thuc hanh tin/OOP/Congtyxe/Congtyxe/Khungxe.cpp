#include<iostream>

#include"Khungxe.h"
using namespace std;
void Khungxe::nhap() {
	cout << "\nNhap ma so khung xe: ";
	cin >> this->maso;
	cin.ignore();
	cout << "\nNhap hang san xuat: ";
	getline(cin, this->hangSX);
}
void Khungxe::xuat()const {
	cout << this->maso << "\t" << this->loai << "\t" << this->hangSX << "\t" << this->donGia;
}
void Khungxe::xuatfile(fstream& fileout)const {
	fileout << this->maso << "\t" << this->loai << "\t" << this->hangSX << "\t" << this->donGia;
}
int Khungxe::getDonGia()const {
	return this->donGia;
}
Khungnhom::Khungnhom() {
	this->loai = "Khung Nhom";
	this->donGia = 500;
}
Khungnhua::Khungnhua() {
	this->loai = "Khung Nhua";
	this->donGia = 200;
}