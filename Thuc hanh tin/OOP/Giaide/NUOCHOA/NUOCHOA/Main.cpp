#include "DanhsachDonhang.h"
#include <fstream>
using namespace std;
int main() {
	DanhsachDonhang* x = new DanhsachDonhang;
	while (2004) {
		system("cls");
		cout << "\n\t 1.Nhap";
		cout << "\n\t 2.Ra man hinh";
		cout << "\n\t 3.Ra file";
		int luachon;
		cin >> luachon;
		if (luachon == 1) {
			x->Nhap();
		}
		else if (luachon == 2) {
			x->Xuat(cout);
			system("pause");
		}
	}
	x->Nhap();
	ofstream Outfile;
	Outfile.open("Nuochoa.txt");
	x->Xuat(Outfile);
	Outfile.close();
	
	cout << "\n\t Tong cac hoa don: " << x->Tong_cac_don_hang()<<endl;
	system("pause");
	delete x;
	return 0;
}