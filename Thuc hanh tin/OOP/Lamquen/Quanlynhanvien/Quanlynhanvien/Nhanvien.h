#pragma once
#include <iostream>
#include <string>
using namespace std;
class Nhanvien {
private:
	string hoten;
	string maso;
	string ngaysinh;
	string quequan;
public:
	void Input();
	void Output();
};
class Nhanviensanxuat : public Nhanvien
{
private:
	int sosanpham;
public:
	void Input();
	void Output();
};
class Nhanviencongnhat : public Nhanvien
{
private:
	int songaylamcong;
public:
	void Input();
	void Output();
};
class Nhanvienquanli : public Nhanvien 
{
private:
	int hesoluong;
public:
	void Input();
	 void Output();
};

