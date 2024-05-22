#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Nhommau
{
protected:
	int Rh;
	char Rhc;
public:
	virtual int loai() = 0;
	virtual void Nhap();
	virtual int Rhesus() = 0;
	virtual void Xuat()=0;
};
class A :public Nhommau {
public:
	A();
	int loai();
	void Nhap();
	int Rhesus();
	void Xuat();
};
class B :public Nhommau {
public:
	B();
	int loai();
	void Nhap();
	int Rhesus();
	void Xuat();
};
class AB :public Nhommau {
public:
	AB();
	int loai();
	void Nhap();
	int Rhesus();
	void Xuat();
};
class O :public Nhommau {
public:
	O();
	int loai();
	void Nhap();
	int Rhesus();
	void Xuat();
};
