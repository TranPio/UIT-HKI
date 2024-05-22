#include<iostream>
#include"Banhxe.h"
using namespace std;
void Banhxe::nhap() {
	cout << "\n\nNhap ma so banh xe: ";
	cin.ignore();
	getline(cin, this->maso);
	cout << "\nNhap hang san xuat: ";
	getline(cin, this->hangSX);
}
void Banhxe::xuat()const {
	cout << this->maso << "\t" << this->loai << "\t" << this->hangSX << "\t" << this->donGia;
}
void Banhxe::xuatfile(fstream& fileout)const {
	fileout << this->maso << "\t" << this->loai << "\t" << this->hangSX << "\t" << this->donGia;
}
int Banhxe::getDonGia()const {
	return this->donGia;
}
banhxeloaiD::banhxeloaiD() {
	this->loai = "D";
	this->donGia = 400;
}
banhxeloaiE::banhxeloaiE() {
	this->loai = "E";
	this->donGia = 300;
}