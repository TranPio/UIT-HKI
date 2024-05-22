#pragma once
#include "GoiSanpham.h"
class Donhang:public GoiSanpham
{
private:
	string Madonhang, Ngaylapdonhang, Makhachhang,Tenkhachhang, Diachi, SDT;
public:
	void Nhap();
	void Xuat(fstream& os);
	int Tong_hoa_don();
};

