#pragma once
#include <iostream>
using namespace std;
class Dathuc
{
private:
	float a, b;
public:
	Dathuc();
	void Nhap(Dathuc& dt);
	void Xuat(Dathuc& dt);
	int giatri(Dathuc& dt);
	friend Dathuc operator +(Dathuc& a1, Dathuc& b2);
};

