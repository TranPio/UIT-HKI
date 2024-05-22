#include "Giangvien.h"
#include"Canbo.h"
#include <iostream>
using namespace std;
void Giangvien::Nhap()
{
	Canbo::Nhap();
	cin.ignore();
	cout << "\n Nhap vao khoa: " << endl;
	getline(cin, Khoa);
	while (true) {
		cout << "\n\n\t\t NHAP VAO TRINH DO GIANG VIEN ";
		cout << "\n\t 1.Cu nhan";
		cout << "\n\t 2.Thac si";
		cout << "\n\t 3.Tien si";
		int luachon;
		cout << "\n Nhap vao lua chon ";
		cin >> luachon;

		if (luachon == 1) {
			Phucap = 300;
			Trinhdo = "Cu nhan";
		}
		else if (luachon == 2) {
			Phucap = 500;
			Trinhdo = "Thac si";
		}
		else if (luachon == 3) {
			Phucap = 1000;
			Trinhdo = "Tiensi";
		}
		break;
	}
		cout << "\n Nhap vao so tiet day: " << endl;
		cin >> Sotietday;
	}
void Giangvien::Xuat(ostream& os)
{
	Canbo::Xuat(os);
	os << "Khoa cua giang vien la: " << Khoa<<endl;
	os << "Trinh do cua giang vien la: " << Trinhdo << endl;
	os << "So tiet day la: " << Sotietday << endl;
}

double Giangvien::Tinh_tien_luong()
{
	return Hesoluong*730+Phucap+Sotietday*45;
}
Giangvien::Giangvien() {

}
Giangvien::~Giangvien() {

}