#include <iostream>
#include "Nhanvien.h"
using namespace std;
double Tong_tien_luong_Suaongnuoc(Nhanvien_suaongnuoc *ds[], int n) {
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += ds[i]->tinhtienluong();
	}
	return sum;
}
double Tong_tien_luong_Giaohang(Nhanvien_giaohang *ds[], int m) {
	double sum = 0;
	for (int i = 0; i < m; i++) {
		sum += ds[i]->tinhtienluong();
	}
	return sum;
}
double Tong_tien_luong_Xeom(Nhanvien_xeom *ds[], int l) {
	double sum = 0;
	for (int i = 0; i < l; i++) {
		sum += ds[i]->tinhtienluong();
	}
	return sum;
}
void hoanvi_suaongnuoc(Nhanvien_suaongnuoc* x, Nhanvien_suaongnuoc* y) {
	Nhanvien_suaongnuoc *tam = x;
	x = y;
	y = tam;
}
void hoanvi_giaohang(Nhanvien_giaohang& x, Nhanvien_giaohang& y) {
	Nhanvien_giaohang tam = x;
	x = y;
	y = tam;
}
void hoanvi_xeom(Nhanvien_xeom& x, Nhanvien_xeom& y) {
	Nhanvien_xeom tam = x;
	x = y;
	y = tam;
}
// Giam dan theo luong
void sapxep_suaongnuoc(Nhanvien_suaongnuoc *ds[], int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (ds[i]->tinhtienluong() < ds[j]->tinhtienluong()) {
				hoanvi_suaongnuoc(ds[i], ds[j]);
			}
	   }
	}
}
void Menu(Nhanvien_suaongnuoc *ds_nvon[],Nhanvien_giaohang *ds_nvgh[],Nhanvien_xeom *ds_nvxo[],int n,int m,int l) {
	int luachon;
	while (2004) {
		system("cls");
		cout << endl << "\t\t==============MENU==============";
		cout << endl << "1.Nhap thong tin nhan vien sua ong nuoc";
		cout << endl << "2.Nhap thong tin nhan vien giao hang";
		cout << endl << "3.Nhap thong tin nhan vien xe om";
		cout << endl << "4.Xuat thong tin nhan vien sua ong nuoc va Tong tien luong nhan vien sua ong nuoc";
		cout << endl << "5.Xuat thong tin nhan vien giao hang va Tong tien luong nhan vien giao hang";
		cout << endl << "6.Xuat thong tin nhan vien xe om va Tong tien luong nhan vien xe om";
		cout << endl << "7.Tong tien luong ca cong ty";
		cout << endl << "\t\t==============END==============";
		cout << endl << "Nhap vao lua chon: ";
		cin >> luachon;
		if (luachon == 1) {
			Nhanvien_suaongnuoc *nvon=new Nhanvien_suaongnuoc();
			cout << endl << "\t\tNhap thong tin nhan vien sua ong nuoc: ";
			cin.ignore();
			nvon->Nhap();
			// them doi tuong gia tri nhan vien sua ong nuoc vao danh sach ds sua ong nuoc
			ds_nvon[n] = nvon;
			n++;
		}
		else if (luachon == 2) {
			Nhanvien_giaohang *nvgh=new Nhanvien_giaohang(); 
			cout << endl << "\t\tNhap thong tin nhan vien giao hang: ";
			nvgh->Nhap();
			ds_nvgh[m] = nvgh;
			m++;
		}
		else if (luachon == 3) {
			Nhanvien_xeom *nvxo=new Nhanvien_xeom();
			cout << endl << "\t\tNhap thong tin nhan vien xe om: ";
			nvxo->Nhap();
			ds_nvxo[l] = nvxo;
			l++;
		}
		else if (luachon == 4) {
			cout << endl << "\t\tDanh sach thong tin nhan vien sua ong nuoc: ";
			for (int i = 0; i < n; i++) {
				cout << endl << "Thong tin nhan vien sua ong nuoc thu " << i + 1 << " la: ";
				ds_nvon[i]->Xuat();
			}
			cout << "Tong tien luong: " <<(size_t) Tong_tien_luong_Suaongnuoc(ds_nvon,n);
			system("pause");
		}
		else if (luachon == 5) {
			cout << endl << "\t\tDanh sach thong tin nhan vien giao hang: ";
			for (int i = 0; i < m; i++) {
				cout << endl << "Thong tin nhan vien giao hang " << i + 1 << " la: ";
				ds_nvgh[i]->Xuat();
			}
			cout << "Tong tien luong: " <<(size_t) Tong_tien_luong_Giaohang(ds_nvgh, m);
			system("pause");
		}
		else if (luachon == 6) {
			cout << endl << "\t\tDanh sach thong tin nhan vien xe om: ";
			for (int i = 0; i < l; i++) {
				cout << endl << "Thong tin nhan vien xe om " << i + 1 << " la: ";
				ds_nvxo[i]->Xuat();
			}
			cout << "Tong tien luong: " << (size_t) Tong_tien_luong_Xeom(ds_nvxo, l);
			system("pause");
		}
		else if (luachon == 7) {
			cout << "Tong tien luong ca cong ty la: " << (size_t) Tong_tien_luong_Suaongnuoc(ds_nvon, n) + Tong_tien_luong_Giaohang(ds_nvgh, m) + Tong_tien_luong_Xeom(ds_nvxo, l);
		}
		else{
			break;
		}
	}
	for (int i = 0; i <= n; i++) {
		delete ds_nvon[0];
	}
	for (int i = 0; i <= m; i++) {
		delete ds_nvgh[0];
	}
	for (int i = 0; i <= l; i++) {
		delete ds_nvxo[0];
	}
}

int main() {
	Nhanvien_suaongnuoc *ds_nvon[100];
	Nhanvien_giaohang *ds_nvgh[100];
	Nhanvien_xeom *ds_nvxo[100];
	int n = 0, m = 0, l = 0;
	Menu(ds_nvon, ds_nvgh, ds_nvxo, n, m, l);
	return 0;
}