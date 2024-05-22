#include "Nhanvien.h"
void Nhanvien_suaongnuoc::Nhap() {
	cout <<endl<< "Nhap ho ten: ";
	getline(cin, hoten);
	cout << endl<< "Nhap tuoi: ";
	cin >> tuoi;
	cin.ignore();
	cout <<endl<< "Nhap gioi tinh: ";
	getline(cin, gioitinh);
	cout <<endl<< "Nhap dia chi: " ;
	getline(cin, diachi);
	cout <<endl<< "Nhap so dien thoai: " ;
	getline(cin, sdt);
	cout <<endl<< "Nhap chieu cao: ";
	cin >> chieucao;
	cout << endl<<"Nhap can nang: " ;
	cin >> cannang;
	cout <<endl<< "So gio sua: ";
	cin >> sogiosua;

}
void Nhanvien_suaongnuoc::Xuat() {
	cout << "Ho ten: " <<hoten<< endl;
	cout << "Tuoi: " <<tuoi<< endl;
	cout << "Gioi tinh: " <<gioitinh<< endl;
	cout << "Dia chi: " << diachi<<endl;
	cout << "So dien thoai: " <<sdt<< endl;
	cout << "Chieu cao: " << chieucao<<endl;
	cout << "Can nang: " << cannang<<endl;
}
float Nhanvien_suaongnuoc::tinhtienluong() {
	return sogiosua * 5000;
}
Nhanvien_suaongnuoc::Nhanvien_suaongnuoc() {

};
Nhanvien_suaongnuoc::~Nhanvien_suaongnuoc() {

};

void Nhanvien_giaohang::Nhap() {
	cin.ignore();
	cout << "Nhap ho ten: " << endl;
	getline(cin, hoten);
	cout << "Nhap tuoi: " << endl;
	cin >> tuoi; 
	cin.ignore();
	cout << "Nhap gioi tinh: " << endl;
	getline(cin, gioitinh);
	cout << "Nhap dia chi: " << endl;
	getline(cin, diachi);
	cout << "Nhap so dien thoai: " << endl;
	getline(cin, sdt);
	cout << "Nhap chieu cao: " << endl;
	cin >> chieucao;
	cout << "Nhap can nang: " << endl;
	cin >> cannang;
	cout << endl << "So hang giao: ";
	cin >> sohanggiao;
}
void Nhanvien_giaohang::Xuat() {
	cout << "Ho ten: " << hoten << endl;
	cout << "Tuoi: " << tuoi << endl;
	cout << "Gioi tinh: " << gioitinh << endl;
	cout << "Dia chi: " << diachi << endl;
	cout << "So dien thoai: " << sdt << endl;
	cout << "Chieu cao: " << chieucao << endl;
	cout << "Can nang: " << cannang << endl;
}
float Nhanvien_giaohang::tinhtienluong() {
	return sohanggiao * 33500;
}
Nhanvien_giaohang::Nhanvien_giaohang() {

};
Nhanvien_giaohang::~Nhanvien_giaohang() {

};


void Nhanvien_xeom::Nhap() {
	cin.ignore();
	cout << "Nhap ho ten: " << endl;
	getline(cin, hoten);
	cout << "Nhap tuoi: " << endl;
	cin >> tuoi;
	cin.ignore();
	cout << "Nhap gioi tinh: " << endl;
	getline(cin, gioitinh);
	cout << "Nhap dia chi: " << endl;
	getline(cin, diachi);
	cout << "Nhap so dien thoai: " << endl;
	getline(cin, sdt);
	cout << "Nhap chieu cao: " << endl;
	cin >> chieucao;
	cout << "Nhap can nang: " << endl;
	cin >> cannang;
	cout << endl << "So km: ";
	cin >> sokm; 
}
void Nhanvien_xeom::Xuat() {
	cout << "Ho ten: " << hoten << endl;
	cout << "Tuoi: " << tuoi << endl;
	cout << "Gioi tinh: " << gioitinh << endl;
	cout << "Dia chi: " << diachi << endl;
	cout << "So dien thoai: " << sdt << endl;
	cout << "Chieu cao: " << chieucao << endl;
	cout << "Can nang: " << cannang << endl;
}
float Nhanvien_xeom::tinhtienluong() {
	return sokm * 10000;
}
Nhanvien_xeom::Nhanvien_xeom() {

};
Nhanvien_xeom::~Nhanvien_xeom() {

};