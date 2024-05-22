#pragma once
#include <iostream>
#include <string>
using namespace std;
class Giasuc
{
protected:
	int loai;
public:
	Giasuc();
	~Giasuc();
	virtual void Nhap();
	virtual void Xuat();
	virtual int sinhcon();
	virtual int sua();
	virtual string tiengkeu();
	virtual int getloai();
};

