#pragma once
#include <iostream>
#include <string>
using namespace std;
class Xe
{
protected:
	string Hoten;
	float Sogiothue;
public:
	void Nhap();
	void Xuat();
};

class Xedap :public Xe {
public:
	float Tinhtien();
};
class Xemay :public Xe {
private:
	int Loaixe;
	string Bienso;
public:
	void Nhap();
	void Xuat();
	float Tinhtien();
	int Getter_loaixe();
	void Setter_loaixe(int LOAIXE);
};