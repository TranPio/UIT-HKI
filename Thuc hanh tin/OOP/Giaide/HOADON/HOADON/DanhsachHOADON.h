#pragma once
#include "HoaDon.h"
using namespace std;
class DanhsachHOADON
{
private:
	vector<HoaDon*>ds_hoadon;
public:
	void Nhap();
	void Xuat();
	int Tinh_tien_hoa_don();
};

