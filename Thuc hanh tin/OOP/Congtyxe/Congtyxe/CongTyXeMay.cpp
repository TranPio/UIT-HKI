#include<iostream>
#include<fstream>
#include"CongTyXeMay.h"
using namespace std;
void CongTy::nhap() {
	cout << "\n===== Nhap Danh Sach =====\n";
	cout << "\nNhap so luong xe: ";
	cin >> this->slXe;
	this->dsXe = new Xemay[slXe];
	for (int i = 0; i < this->slXe; i++) {
		dsXe[i].nhap();
	}
}void CongTy::xuat()const {
	for (int i = 0; i < this->slXe; i++) {
		dsXe[i].xuat();
	}
}
void CongTy::xuatfile()const {
	fstream fileout;
	fileout.open("danh_sach_xe_may.txt", ios_base::out);
	for (int i = 0; i < this->slXe; i++) {
		dsXe[i].xuatfile(fileout);
	}
	fileout.close();
}
CongTy::~CongTy() {
	if (this->dsXe != NULL) {
		delete dsXe;
	}
}