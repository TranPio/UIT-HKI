#include "CDocGia.h"
void CDocGia::Nhap() {
	cin.ignore();
	cout << "Nhap vao ho ten: " << endl;
	getline(cin, Hoten);
	cout << "Nhap vao ngay lap the(dd/mm/yyyy): " << endl;
	getline(cin, Ngaylapthe);
	cout << "Nhap vao so thang hieu luc: " << endl;
	cin >> Sothanghieuluc;
}
void CDocGia::Xuat() {
	cout << "Ho ten la: " << Hoten<<endl;
	cout << "Ngay lap the: " << Ngaylapthe<<endl;
	cout << "So thang co hieu luc: " << Sothanghieuluc<<endl;
}

CDocGia::CDocGia() {

}
CDocGia::~CDocGia() {

}