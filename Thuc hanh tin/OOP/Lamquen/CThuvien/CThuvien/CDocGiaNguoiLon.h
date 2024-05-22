#pragma once
#include <iostream>
#include "CDocGia.h"
#include <string>
using namespace std;
class CDocGiaNguoiLon : public CDocGia
{
private:
	string CMND;
public:
	void Nhap();
	void Xuat();
	int Tinh_tien();
	CDocGiaNguoiLon();
	~CDocGiaNguoiLon();
};

