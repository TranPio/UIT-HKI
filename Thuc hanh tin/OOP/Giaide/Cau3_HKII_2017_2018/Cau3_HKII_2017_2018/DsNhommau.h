#pragma once
#include "Nhommau.h"
using namespace std;
class DsNhommau
{
private:
	vector<Nhommau*> ds;
	int n,nm;
	int chon;
public:
	bool kiemtra(int x, int y, int z);
	int kiemtratruyenmau(int x);
	void Nhap();
	void Xuat();
};

