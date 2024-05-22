#pragma once
#include "Giasuc.h"
#include <iostream>
#include <string>
class Bo:public Giasuc
{
public:
	Bo();
	~Bo();
	void Nhap();
	void Xuat();
	int sinhcon();
	int sua();
	string tiengkeu();
	int getloai();
};

