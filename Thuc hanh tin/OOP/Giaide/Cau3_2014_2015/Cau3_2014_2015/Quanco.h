#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Quanco
{
protected:
	int loaituong;
	int x, y;
	string loai;
public:
	Quanco(string loai1,int x1,int y1);
	virtual void Dichuyen() = 0;
	//virtual int loaituong1();
};
class Tuong_Vua :public Quanco {
public:
	Tuong_Vua(string loai1, int x1, int y1) :Quanco(loai1, x1, y1) { }
	void Dichuyen();
	//int loaituong1();
};
class Si :public Quanco {
public:
	Si(string loai1, int x1, int y1) :Quanco(loai1, x1, y1) { loaituong = 2;  }
	void Dichuyen();
	//int loaituong1();
};
class Tuong :public Quanco {
public:
	Tuong(string loai1, int x1, int y1) :Quanco(loai1, x1, y1) { loaituong = 3; }
	void Dichuyen();
	//int loaituong1();
};
class Ma :public Quanco {
public:
	Ma(string loai1, int x1, int y1) :Quanco(loai1, x1, y1) { loaituong = 4; }
	void Dichuyen();
	//int loaituong1();
};
class Xe :public Quanco {
public:
	Xe(string loai1, int x1, int y1) :Quanco(loai1, x1, y1) { loaituong = 5; }
	void Dichuyen();
	//int loaituong1();
};
class Phao :public Quanco {
public:
	Phao(string loai1, int x1, int y1) :Quanco(loai1, x1, y1) { loaituong = 6; }
	void Dichuyen();
	//int loaituong1();
};
class Tot :public Quanco {
public:
	Tot(string loai1, int x1, int y1) :Quanco(loai1, x1, y1) { loaituong = 7; }
	void Dichuyen();
	//int loaituong1();
};