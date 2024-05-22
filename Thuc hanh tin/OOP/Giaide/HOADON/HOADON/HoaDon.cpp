#include "HoaDon.h"

void HoaDon::Nhap()
{
	cin.ignore();
	cout << "\n\t Nhap vao ma hoa don: ";
	getline(cin, MaHoadon);
	cout << "\n\t Nhap thong tin khach hang: "<<endl;
	cout << "\n\t Nhap vao ma khach hang: ";
	getline(cin, MaKhachHang);
	cout << "\n\t Nhap vao ten khach hang: ";
	getline(cin, TenKhachHang);
	cout << "\n\t Nhap vao so dien thoai khach hang: ";
	getline(cin, SDT);
	cout << "\n\t Nhap vao dia chi khach hang: ";
	getline(cin, Diachi);
	cout << "\n\t Nhap vao ngay lap hoa don(dd/mm/yyyy): ";
	getline(cin, Ngaylaphoadon);
	ChitietHoadon::Nhap();

}

void HoaDon::Xuat()
{
	cout << "\n\t Ma hoa don la: "<< MaHoadon<<endl;
	cout << "\n\t Ma khach hang la: "<< MaKhachHang<<endl;
	cout << "\n\t Ten khach hang la: "<<TenKhachHang<<endl;
	cout << "\n\t So dien thoai khach hang la: "<<SDT<<endl;
	cout << "\n\t Dia chi khach hang la: "<< Diachi;
	cout << "\n\t Ngay lap hoa don la(dd/mm/yyyy): " << Ngaylaphoadon << endl;
	ChitietHoadon::Xuat();
}

int HoaDon::Tong_hoa_don()
{
	return ChitietHoadon::Tong_hoa_don();
}
