#pragma once
#include <iostream>
#include <string>
#include "CDocGia.h"
using namespace std;
class CDocGiaTreEm : public CDocGia
{
private:
	string Nguoidaidien;
public:
	void Nhap();
	void Xuat();
	int Tinh_tien();
	CDocGiaTreEm();
	~CDocGiaTreEm();
};

 