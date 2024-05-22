#pragma once
#include "ChitietHoadon.h"
using namespace std;
class HoaDon :public ChitietHoadon
{
private:
	string MaHoadon, MaKhachHang, TenKhachHang, SDT, Diachi, Ngaylaphoadon;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual int Tong_hoa_don();
};

