#pragma once
#include "CDocGiaTreEm.h"
#include "CDocGiaNguoiLon.h"
#include <vector>
using namespace std;
class Thuvien
{
private:
	vector<CDocGia*> ds_cdocgia;
public:
	void Nhap();
	void Xuat();
	int Tong_tien_lam_the();
	Thuvien();
	~Thuvien();
};

