#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
class Sanpham
{
protected:
	string Masanpham, Tensanpham,Mau,Loai,gt,size,TC,gt1,size1;
	int GT;
	int Gioitinh, Size,Dongia,Tieuchuan,gtbo,sizebo;
public:
	Sanpham();
	int Getter_gt() {
		return GT;
	}
	void Setter_gt(int gt) {
		gt = GT;
	}
	virtual void Nhap();
	virtual void Xuat(ostream& os) const;
	virtual int Don_gia() = 0;
};

