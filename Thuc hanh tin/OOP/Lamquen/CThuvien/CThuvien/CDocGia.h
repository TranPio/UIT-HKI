#pragma once
#include <iostream>
#include <string>
using namespace std;
class CDocGia
{
protected:
	string Hoten;
	string Ngaylapthe;
	int Sothanghieuluc;
	bool KT;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual int Tinh_tien() = 0;
	bool Getter_KT() {
		return KT;
	}
	void Setter_KT(bool kt) {
		KT = kt;
	}
	CDocGia();
	~CDocGia();
};

