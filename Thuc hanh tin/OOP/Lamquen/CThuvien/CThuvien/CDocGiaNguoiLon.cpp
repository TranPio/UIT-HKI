#include "CDocGiaNguoiLon.h"
#include "CDocGia.h"

void CDocGiaNguoiLon::Nhap()
{
	CDocGia::Nhap();
	cin.ignore();
	cout << "Nhap vao so CMND: " << endl;
	getline(cin, CMND);
}

void CDocGiaNguoiLon::Xuat()
{
	CDocGia::Xuat();
	cout << "So CMND la: " << CMND << endl;
}

int CDocGiaNguoiLon::Tinh_tien()
{
	return Sothanghieuluc*10000;
}

CDocGiaNguoiLon::CDocGiaNguoiLon()
{
}

CDocGiaNguoiLon::~CDocGiaNguoiLon()
{
}
