#include "DanhsachHOADON.h"

void DanhsachHOADON::Nhap()
{
	HoaDon* x;
	while (2004) {
		system("cls");
		cout << "\n\n\t\t =============== QUAN LY HOA DON ===============";
		cout << "\n\n\t 1.NHAP VAO HOA DON";
		cout << "\n\t 2.XUAT DANH SACH HOA DON";
		cout << "\n\n\t\t ===============       END      ===============";
		int luachon;
		cout << "\n\n\t Nhap vao lua chon cua ban: ";
		cin >> luachon;
		if (luachon == 1) {
			x = new HoaDon;
			x->Nhap();
			ds_hoadon.push_back(x);
		}
		else {
			break;
		}

	}
}

void DanhsachHOADON::Xuat()
{
	for (int i = 0; i < ds_hoadon.size(); i++) {
		cout << "\n\t HOA DON THU " << i + 1 << " LA: ";
		ds_hoadon[i]->Xuat();
	}
}

int DanhsachHOADON::Tinh_tien_hoa_don()
{
	int sum = 0;
	for (int i = 0; i < ds_hoadon.size(); i++) {
		sum += ds_hoadon[i]->Tong_hoa_don();
	}
	return (size_t)sum;
}
