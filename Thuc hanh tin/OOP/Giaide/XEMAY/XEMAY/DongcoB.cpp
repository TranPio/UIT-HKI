#include "DongcoB.h"

DongcoB::DongcoB()
{
	Loai = 2;
}

DongcoB::~DongcoB()
{
}

void DongcoB::Nhap()
{
	Dongco::Nhap();
	while (true) {
		cout << "\n Tieu chuan 1 thi nhap 1";
		cout << "\n Tieu chuan 2 thi nhap 2";
		cout << "\n Tieu chuan 3 thi nhap 3";
		int luachon;
		cout << "\n Nhap vao lua chon tieu chuan cua loai dong co B: ";
		cin >> luachon;
		if (luachon == 1) {
			tieuchuan = 1;
		}
		else if (luachon == 2) {
			tieuchuan = 2;
		}
		else if (luachon == 3) {
			tieuchuan = 3;
		}
		break;
	}
	
}

void DongcoB::Xuat()
{
	Dongco::Xuat();
	cout << "\nLoai dong co la: B";
	if (tieuchuan == 1) {
		cout << "\n Tieu chuan cua loai dong co B la: 1";
	}
	else if (tieuchuan == 2) {
		cout << "\n Tieu chuan cua loai dong B la: 2";
	}
	else if (tieuchuan == 3) {
		cout << "\n Tieu chuan cua loai dong B la: 3";
	}
}

int DongcoB::Tinhtien()
{
	if (tieuchuan == 1) {
		return 600;
	}
	else if (tieuchuan == 2) {
		return 700;
	}
	else if (tieuchuan == 3) {
		return 800;
	}
}

int DongcoB::getloai()
{
	return Loai;
}
