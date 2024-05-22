#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Thanhphan
{
protected:
	int Maunen, Mauchu;
	string text,MN,MC;
public:
	Thanhphan();
	~Thanhphan();
	virtual void Nhap();
	virtual void Xuat();
	virtual int maunen();
	virtual int mauchu();
};
class Label :public Thanhphan {
public:
	Label();
	void Nhap();
	void Xuat();
	int maunen();
	int mauchu();
};
class Button :public Thanhphan {
private:
	string hinhanh;
	int luachon1;
public:
	Button();
	void Nhap();
	void Xuat();
	int maunen();
	int mauchu();
};
