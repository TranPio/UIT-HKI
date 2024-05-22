#include "DsXemay.h"
void DsXemay::Nhap() {
	system("cls");
	Xemay* x;
	while (true) {
		int luachon;
		cout << "\n\n\t\t================XEMAY================";
		cout << "\n\t 1.Nhap vao xe may";
		cout << "\n\t 2.Xuat ra danh sach xe may";
		cout << "\n\n\t\t================ END ================";
		cout << "\n Nhap vao lua chon: ";
		cin >> luachon;
		if (luachon == 1) {
			x = new Xemay;
			x->Nhap();
			ds_xemay.push_back(x);
		}
		else {
			break;
		}
	}
}

void DsXemay::Xuat()
{
	int dem = 0;
	for (int i = 0; i < ds_xemay.size(); i++) {
		cout << "\n\t THONG TIN XE MAY THU " << ++dem << " LA: ";
		ds_xemay[i]->Xuat();
		}
}

long DsXemay::Tong_tien_xe()
{
	long sum = 0;
	for (int i = 0; i < ds_xemay.size(); i++) {
		 sum += ds_xemay[i]->Tong_don_gia();
	}
	return sum;
}
