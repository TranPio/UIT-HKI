#pragma once
#include <iostream>
#include <string>
using namespace std;
class NVCONTRO
{
protected:
	string hoten;
	int tuoi;
	string gioitinh;
	string diachi;
	string sdt;
	float chieucao;
	float cannag;
public:
	void nhap();
	void xuat();
	NVCONTRO();
	~NVCONTRO();
};
class Nhanvien_suaongnuoc : public NVCONTRO {
private:
	float so_h_sua;
public:
	void nhap();
	void xuat();
	float tinhtien();
	Nhanvien_suaongnuoc();
	~Nhanvien_suaongnuoc();
};
class Nhanvien_giaohang :public NVCONTRO {
private:
	int sohanggiao;
public:
	void nhap();
	void xuat();
	float tinhtien();
	Nhanvien_giaohang();
	~Nhanvien_giaohang();
};
class Nhanvien_xeom : public NVCONTRO {
private:
	float sokm;
public:
	void nhap();
	void xuat();
	float tinhtien();
	Nhanvien_xeom();
	~Nhanvien_xeom();
};