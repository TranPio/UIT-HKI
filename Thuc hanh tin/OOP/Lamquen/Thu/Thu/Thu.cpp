#include <iostream>
#include "Thu.h"
using namespace std;
void sinhvien::Nhap_thong_tin() {
	cout << "Nhap ho ten: " << endl;
	getline(cin, hoten);
	cout << "Nhap MSSV: " << endl;
	getline(cin, maso);
	cout << "Nhap diem toan: " << endl;
	cin >> diemtoan;
	cout << "Nhap diem ly: " << endl;
	cin >> diemly;
}
void sinhvien::Xuat_thong_tin() {
	cout << "Ho ten: "<<hoten << endl;
	cout << "MSSV: " <<maso<< endl;
	cout << "Diem toan: " <<diemtoan<< endl;
	cout << "Diem ly: " <<diemly<< endl;
}
string sinhvien::Getter_hoten() {
	return hoten;
}
void sinhvien::Setter(string HOTEN) {
	hoten = HOTEN;
}
sinhvien::sinhvien() {

};
sinhvien::~sinhvien() {

};