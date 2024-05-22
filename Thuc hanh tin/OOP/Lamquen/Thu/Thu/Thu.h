#include <iostream>
#include <string>
using namespace std;
class sinhvien {

	//thuoctinh
private:
	string hoten;
	string maso;
	float diemtoan;
	float diemly;
	// phuong thuc
public:
	void Nhap_thong_tin();
	void Xuat_thong_tin();
	// co che dong goi getter va setter
	string Getter_hoten();
	void Setter(string HOTEN);
	//ham tao va ham huy
	sinhvien();
	~sinhvien();
};