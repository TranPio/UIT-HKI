#pragma once
#include "Donhang.h"
#include <fstream>
class DanhsachDonhang
{
private:
	vector<Donhang*> ds_donhang;
	int soluong;
public:
	void Nhap();
	void Xuat(fstream& os);
	int Tong_cac_don_hang();
};

