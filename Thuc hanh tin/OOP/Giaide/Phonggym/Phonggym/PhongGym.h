#pragma once
#include "VeVip.h"
#include "VeThuong.h"
#include "VeThu.h"
#include <vector>
class PhongGym
{
private:
	int dem1 = 0, dem2 = 0, dem3 = 0;
	vector<Ve*> ds_ve;
public:
	void Nhap();
	void Xuat();
	void Venhieunguoimua();
	int Tong_so_ve();
	void Ve_thuong_cao_nhat();
};

