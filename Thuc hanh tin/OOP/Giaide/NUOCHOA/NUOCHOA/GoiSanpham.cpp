#include "GoiSanpham.h"

void GoiSanpham::Nhap()
{
	Sanpham* x;
	cout << "\n\n\t\t NHAP THONG SO GOI SAN PHAM" << endl;
	cout << "\n\t Nhom goi san pham (1- Romantic,2- Fresh-Air): ";
	cin >> goisp;
	if (goisp == 1) {
		cin.ignore();
		cout << "\n\t Nhap ma so: ";
		getline(cin, Ms);
		cout << "\n\t Nhap ten goi san pham: ";
		getline(cin, Tensp);
		cout << "\n Nuoc hoa: ";
		x = new NuochoaHong;
		x->Nhap();
		ds_goisanpham.push_back(x);
		cout << "\n Chon dau goi (1- cho toc kho, 2- cho toc dau): ";
		cin >> daugoi;
		if (daugoi == 1) {
			x = new Daugoikho;
			x->Nhap();
			ds_goisanpham.push_back(x);
		}
		else {
			x = new Daugoidau;
			x->Nhap();
			ds_goisanpham.push_back(x);
		}
		cout << "\n Chon sua tam (1- cho da kho, 2- cho da nhon): ";
		cin >> suatam;
		if (suatam == 1) {
			x = new Suatamkho;
			x->Nhap();
			ds_goisanpham.push_back(x);
		}
		else {
			x = new Suatamnhon;
			x->Nhap();
			ds_goisanpham.push_back(x);
		}
	}
	else {
		cin.ignore();
		cout << "\n\t Nhap ma so: ";
		getline(cin, Ms);
		cout << "\n\t Nhap ten goi san pham: ";
		getline(cin, Tensp);
		cout << "\n Chon nuoc hoa (1- nuoc hoa hong, 2- nuoc hoa cuc): ";
		cin >> nuochoa;
		if (nuochoa == 1) {
			x = new NuochoaHong;
			x->Nhap();
			ds_goisanpham.push_back(x);
		}
		else {
			x = new NuochoaCuc;
			x->Nhap();
			ds_goisanpham.push_back(x);
		}
		cout << "\n Dau goi: ";
			x = new Daugoikho;
			x->Nhap();
			ds_goisanpham.push_back(x);
		cout << "\n Chon sua tam (1- cho da kho, 2- cho da nhon): ";
		cin >> suatam;
		if (suatam == 1) {
			x = new Suatamkho;
			x->Nhap();
			ds_goisanpham.push_back(x);
		}
		else {
			x = new Suatamnhon;
			x->Nhap();
			ds_goisanpham.push_back(x);
		}
	}
}

void GoiSanpham::Xuat(fstream& os)
{
	os << "\n\t Ma so la: " << Ms << endl;
	os << "\n\t Ten goi san pham la: " << Tensp << endl;
	for (int i = 0; i < ds_goisanpham.size(); i++) {
		ds_goisanpham[i]->Xuat(os);
		os<<"\n\t Don gia la: "<<ds_goisanpham[i]->Gia_goi_sp();
	}
}

int GoiSanpham::Tong_tien()
{
	int sum=0;
	for (int i = 0; i < ds_goisanpham.size(); i++) {
		sum += ds_goisanpham[i]->Gia_goi_sp();
	}
	return (size_t)sum;
}
