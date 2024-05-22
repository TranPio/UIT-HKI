#pragma once
#include <string>
#include <iostream>
using namespace std;
class Nhanvien_suaongnuoc
{
private:
	string hoten;
	int tuoi;
	string gioitinh;
	string diachi;
	string sdt;
	float chieucao;
	float cannang;
	float sogiosua;
public:
	void Nhap();
	void Xuat();
	float tinhtienluong();
	//void tinhtienluong();
	Nhanvien_suaongnuoc();
	~Nhanvien_suaongnuoc();

};

class Nhanvien_giaohang
{
private:
	string hoten;
	int tuoi;
	string gioitinh;
	string diachi;
	string sdt;
	float chieucao;
	float cannang;
	int sohanggiao;
public:
	void Nhap();
	void Xuat();
	float tinhtienluong();

	Nhanvien_giaohang();
	~Nhanvien_giaohang();

};

class Nhanvien_xeom
{
private:
	string hoten;
	int tuoi;
	string gioitinh;
	string diachi;
	string sdt;
	float chieucao;
	float cannang;
	float sokm;
public:
	void Nhap();
	void Xuat();
	float tinhtienluong();

	Nhanvien_xeom();
	~Nhanvien_xeom();

};