#pragma once
#include "Canbo.h"
#include "Giangvien.h"
#include "Nhanvien.h"
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
class Truong
{
private:
	vector<Canbo*> ds_canbo;
public:
	void Nhap();
	void Xuat(ostream &os);

	double Tong_tien();
	void Canbocaonhat();
	Truong();
	~Truong();
};

