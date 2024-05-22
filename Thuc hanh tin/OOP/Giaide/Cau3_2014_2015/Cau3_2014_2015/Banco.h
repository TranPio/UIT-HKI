#pragma once
#include "Quanco.h"
class Banco {
private:
	vector<Quanco*> ds_banco;
	Quanco* a[32];
	int b[32];
//	int l = 0;
	string trang = "trang";
	string den = "den";

	int nuocdipublic:
	void Nhap();
	void Xuat();
};