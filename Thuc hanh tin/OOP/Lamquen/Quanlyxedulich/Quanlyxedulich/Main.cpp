#include "Xe.h"
#include <iostream>
#include <string>
using namespace std;
void Xuat_tat_ca(Xedap ds_xedap[], int n, Xemay ds_xemay[], int m) {
	int dem = 1;
	cout << "\n Danh sach thue xe dap";
	for (int i = 0; i < n; i++) {
		cout << "\n Thong tin thue xe dap thu " << dem << " la: "<<endl;
		ds_xedap[i].Xuat();
		cout << "\n Tien thue: " << ds_xedap[i].Tinhtien() << endl;
	}
	cout << "\n Danh sach thue xe may";
	for (int i = 0; i < m; i++) {
		cout << "\n Thong tin thue xe may thu " << dem++ << " la: "<<endl;
		ds_xemay[i].Xuat();
		cout << "\n Tien thue: " << ds_xemay[i].Tinhtien()<<endl;
	}
}
float Tongtien(Xedap ds_xedap[], int n, Xemay ds_xemay[], int m) {
	float tong = 0;
	for (int i = 0; i < n; i++) {
		tong+= ds_xedap[i].Tinhtien();
	}
	for (int i = 0; i < m; i++) {
		tong+= ds_xemay[i].Tinhtien();
	}
	return tong;
}
void Menu(Xedap ds_xedap[], int n, Xemay ds_xemay[], int m) {
	int luachon;
	while (2004) {
		system("cls");
		cout << endl << "===============MENU===============";
			cout << endl << "0.Thoat";
			cout << endl << "1.Nhap danh sach thue xe dep va xe may";
		cout << endl << "2.Xuat tat ca thong tin thue xe";
		cout << endl << "3.Tinh tong so tien cho thue xe dap va xe may";
		cout << endl << "4.Xuat tat ca thong tin co lien quan den viec cho thue xe dap";
		cout << endl << "5.Tinh tong so tien cho thue xe may loai 250 phan khoi";
		cout << endl << "===============END===============";
		cout << endl << "Nhap lua chon: ";
		cin >> luachon;
		if (luachon == 1) {
			int chon;
			while (2004) {
				system("cls");
				cout<<endl << "0.Thoat";
				cout << endl << "1.Thue xe dap";
				cout << endl << "2.Thue xe may";
				cout << "\n Ban thue xe gi ?"<<endl;
				cin >> chon;
				if (chon == 1) {
					Xedap x;
					cout << "\n Nhap thong tin thue xe dap"<<endl;
					x.Nhap();
					ds_xedap[n] = x;
					n++;

				}
				else if (chon == 2) {
					Xemay x;
					cout << "\n Nhap thong tin thue xe may"<<endl;
					x.Nhap();
					ds_xemay[m] = x;
					m++;
				}
				else {
					break;
				}
				
			}

		}
	else if (luachon == 2) {
		Xuat_tat_ca(ds_xedap, n, ds_xemay, m);
		system("pause");
		}
	else if (luachon == 3) {
			cout << "\n Tong tien thue xe la: " <<size_t(Tongtien(ds_xedap, n, ds_xemay, m));
			system("pause");
		}
	else if (luachon == 4) {
			cout << "THONG TIN THUE XE DAP" << endl;
			for (int i = 0; i < n; i++) {
				cout << "Thong tin thue xe dap thu " << i + 1 << " la: ";
				ds_xedap[i].Xuat();
				cout << "Tien thue xe la: " << (size_t)ds_xedap[i].Tinhtien();
			}
		}
	else if (luachon == 5) {
			cout << "Thong tin thue xe may loai 250" << endl;
			int dem = 0;
			for (int i = 0; i < m; i++) {
				if (ds_xemay[i].Getter_loaixe() == 250) {
					cout << "Danh sach thue xe may thu " << ++dem << " la: " << endl;
					ds_xemay[i].Xuat();
					cout << "Tien thue: " << ds_xemay[i].Tinhtien();
					
				}
			}

			system("pause");
		}
	else {
			break;
		}
	}
}
int main() {
	Xedap ds_xedap[100];
	int n = 0;
	Xemay ds_xemay[100];
	int m = 0;
	Menu(ds_xedap, n, ds_xemay, m);
	return 0;
}