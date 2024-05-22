#include "CDocGiaTreEm.h"
#include "CDocGia.h"
void CDocGiaTreEm::Nhap() {
	CDocGia::Nhap();
	cin.ignore();
	cout << "Nhap vao nguoi dai dien: " << endl;
	getline(cin, Nguoidaidien);
}
void CDocGiaTreEm::Xuat() {
	CDocGia::Xuat();
	cout << "Nguoi dai dien la: " << Nguoidaidien;
}
int CDocGiaTreEm::Tinh_tien() {
	return Sothanghieuluc * 5000;
}
CDocGiaTreEm::CDocGiaTreEm()
{
}

CDocGiaTreEm::~CDocGiaTreEm()
{
}
