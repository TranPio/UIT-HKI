#include "Nhanvien.h"

void Nhanvien::Nhap()
{
	Canbo::Nhap();
	cin.ignore();
	cout << "Nhap vao phong ban: " << endl;
	getline(cin, Phongban);
	cout << "Nhap vao so ngay cong: " << endl;
	cin >> Songaycong;
	while (2004) {
		cout << "\n\n\t\t NHAP VAO CHUC VU" << endl;
		cout << "\n\t 1.Truong phong";
		cout << "\n\t 2.Pho phong";
		cout << "\n\t 3.Nhan vien";
		int luachon;
		cout << "\nNhap vao lua chon: ";
		cin >> luachon;
		if (luachon == 1) {
			Phucap = 2000;
			Chucvu = "Truong phong";
		}
		else if (luachon == 2) {
			Phucap = 1000;
			Chucvu = "Pho phong";
		}
		else if (luachon == 3) {
			Phucap = 500;
			Chucvu = "Nhan vien";
		}
		break;
	}
}

void Nhanvien::Xuat(ostream &os)
{
	Canbo::Xuat(os);
	os << "Phong ban la: " << Phongban << endl;
	os << "So ngay cong la: " << Songaycong << endl;
	os << "Chuc vu la: " << Chucvu << endl;
}

double Nhanvien::Tinh_tien_luong()
{
	return Hesoluong*730+Phucap+Songaycong*200;
}
Nhanvien::Nhanvien() {

}
Nhanvien::~Nhanvien(){
}