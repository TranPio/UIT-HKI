#include "DanhsachDonhang.h"

void DanhsachDonhang::Nhap()
{
	cout << "Nhap so luong don hang: ";
	cin >> soluong;
	for (int i = 0; i < soluong; i++) {
		Donhang* x = new Donhang;
		cout << "NHAP THONG TIN DON HANG " << i + 1 << ": " << endl;
		x->Nhap();
		ds_donhang.push_back(x);
	}
}

void DanhsachDonhang::Xuat(fstream& os)
{
	for (int i = 0; i < soluong; i++) {
		os << "\n THONG TIN DON HANG THU " << i + 1 << ": ";
		ds_donhang[i]->Xuat(os);
	}
}

int DanhsachDonhang::Tong_cac_don_hang()
{
	int sum=0;
	for (int i = 0; i < soluong; i++) {
		sum += ds_donhang[i]->Tong_hoa_don();
	}
	return (size_t)sum;
}
