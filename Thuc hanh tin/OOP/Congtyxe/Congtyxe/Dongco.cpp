#include<iostream>
#include<string.h>
#include<fstream>
#include"Dongco.h"
using namespace std;
void Dongco::nhap() {
	cout << "\nNhap ma so dong co: ";
	cin.ignore();
	getline(cin, this->maso);
	cout << "\nNhap hang san xuat: ";
	getline(cin, this->Hangsanxuat);
}
void Dongco::xuat()const {
	cout << this->maso << "\t" << this->loaidongco << "\t" << this->Hangsanxuat << "\t" << this->gia;
}
void Dongco::xuatfile(fstream& fileout)const {
	fileout << this->maso << "\t" << this->loaidongco << "\t" << this->Hangsanxuat << "\t" << this->gia;
}
int Dongco::getDonGia()const {
	return this->gia;
}
void DongcoloaiB::nhap() {
	Dongco::nhap();
	this->loaidongco = "B";
	cout << "Nhap thong tin xac dinh, dong co dat tieu chuan: ";
	cin >> this->Thongtinxacdinh;
	if (this->Thongtinxacdinh == 1) {
		this->gia = 600;
	}
	else if (this->Thongtinxacdinh == 2){
		this->gia = 700;
	}
	else if (this->Thongtinxacdinh == 3) {
		this->gia == 800;
	}
}
void DongcoloaiB::xuat()const {
	cout << this->maso << "\t" << this->loaidongco << "\t" << this->Thongtinxacdinh << "\t" << this->Hangsanxuat << "\t" << this->gia;
}
void DongcoloaiB::xuatfile(fstream& fileout)const {
	fileout << this->maso << "\t" << this->loaidongco << "\t" << this->Hangsanxuat << "\t" << this->gia;
}
DongcoloaiA::DongcoloaiA() {
	this->loaidongco = "A";
	this->gia = 500;
}
DongcoloaiC::DongcoloaiC() {
	this->loaidongco = "C";
	this->gia = 400;
}
