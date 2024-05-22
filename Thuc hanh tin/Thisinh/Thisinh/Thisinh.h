#pragma once
#include <iostream>
#include <string>
using namespace std;
class Thisinh
{
private: 
	string ma;
	string ten;
	string year;
	float T;
	float V;
	float A;
public:
	void Nhap();
	float kiemtra();
	void Xuat();
};
class TestCandidate {
private:
	int n;
	Thisinh C[1000];
public:
	void nhap();
	void xuat();
};

