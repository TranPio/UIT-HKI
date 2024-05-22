#include "Truong.h"

void Truong::Nhap()
{ 
	while (true) {
		int luachon;
		system("cls");
		cout << "\n\n\t\t ===============TRUONG DHCNTT===============";
		cout << "\n\t 0.Thoat";
		cout << "\n\t 1.Nhap vao giang vien";
		cout << "\n\t 2.Nhap vao nhan vien";
		cout << "\n\n\t\t ===============END===============";
		cout << "\n Nhap vao lua chon: " << endl;
		cin >> luachon;
		Canbo* x;
		if (luachon == 1) {
			x = new Giangvien;
			cout << "\n\n\t\t NHAP VAO THONG TIN GIANG VIEN";
			x->Nhap();
			ds_canbo.push_back(x);
		}
		else if (luachon == 2) {
			x = new Nhanvien;
			cout << "\n\n\t\t NHAP VAO THONG TIN NHAN VIEN";
			x->Nhap();
			ds_canbo.push_back(x);
		}
		else {
			break;
		}
	}
}

void Truong::Xuat(ostream& os)
{
	for (int i = 0; i < ds_canbo.size(); i++) {
		ds_canbo[i]->Xuat(os);
		os<<"Tien luong la: "<<ds_canbo[i]->Tinh_tien_luong()<<endl;
	}
}

double Truong::Tong_tien()
{
	double sum = 0;
	for (int i = 0; i < ds_canbo.size(); i++) {
		sum += ds_canbo[i]->Tinh_tien_luong();
	}
	return sum;
}
Truong::Truong() {

}
Truong::~Truong() {
	for (int i = 0; i < ds_canbo.size(); i++) {
		delete ds_canbo[i];
	}

}
void Truong::Canbocaonhat() {
	ofstream Outfile;
	Outfile.open("Canboluongcaonhat.txt");
	Canbo* canbocaonhat = NULL;
	for (int i = 0; i < ds_canbo.size(); i++) {
		if ((string)typeid(*ds_canbo[i]).name() == "class Giangvien") {
			if (canbocaonhat == NULL) {
				canbocaonhat = ds_canbo[i];
			}
			else if (ds_canbo[i]->Tinh_tien_luong() > canbocaonhat->Tinh_tien_luong()) {
				canbocaonhat = ds_canbo[i];
			}
		}
	}
	if (canbocaonhat != NULL) {
		for (int i = 0; i < ds_canbo.size(); i++) {
			if (canbocaonhat->Tinh_tien_luong() == ds_canbo[i]->Tinh_tien_luong()) {
				ds_canbo[i]->Xuat(Outfile);
			}
		}
	}
	Outfile.close();
}
