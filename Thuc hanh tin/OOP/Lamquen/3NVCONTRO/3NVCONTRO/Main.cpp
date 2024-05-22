#include <iostream>
#include <string>
#include "NVCONTRO.h";
using namespace std;
int main() {
	Nhanvien_suaongnuoc* nv = new Nhanvien_suaongnuoc();
	nv->nhap();
	nv->xuat();
	delete nv;
	return 0;
}