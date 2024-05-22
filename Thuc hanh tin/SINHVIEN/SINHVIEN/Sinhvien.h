#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Sinhvien
{
private :
	string MSSV;
	string ten;
	float T;
	float V;
public:
	void nhap();
	float DTB() ;
	void xuat() ;
};
class Lop {
private:
	string Malop;
	string Tenlop;
	
public:
	vector<Sinhvien> danhsachSV;
	void nhap();
	void xuat() ;
	};
class Truong {
private:
	string tenTruong;
	
public:
	vector<Lop> danhsachLop;
	void nhap();
	void xuat();
	void thongkeSinhvienDTB_lonhon5();
	void thongkediemcaonhatTruong();
};