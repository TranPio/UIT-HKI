#include "PhongGym.h"
using namespace std;
int main() {
	PhongGym* x = new PhongGym;
	while (2004) {
		system("cls");
		cout << "\n\n\t\t ===================PHONG GYM===================";
		cout << "\n\t 1.Lua chon ve";
		cout << "\n\t 2.Xuat danh sach ve";
		cout << "\n\t 3.Tong tien ve da ban";
		cout << "\n\t 4.Ve co nhieu nguoi mua nhat";
		cout << "\n\t 5.Ve thuong co menh gia cao nhat";
		cout << "\n\n\t\t ===================   END   ===================";
		cout << "\n\t Nhap vao lua chon: ";
		int luachon;
		cin >> luachon;
		if (luachon == 1) {
			x->Nhap();
		}
		else if (luachon == 2) {
			x->Xuat();
			system("pause");
		}
		else if (luachon == 3) {
			cout<<"Tong tien ve la: "<<x->Tong_so_ve()<<endl;
			system("pause");
		}
		else if (luachon == 4) {
			x->Venhieunguoimua();
			system("pause");
		}
		else if (luachon == 5) {
			x->Ve_thuong_cao_nhat();
			break;
		}
		else {
			break;
		}
	}
}