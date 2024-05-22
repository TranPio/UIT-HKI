#include <iostream>
#include <string>
#include "Thu.h"
using namespace std;
int main() {
	sinhvien nguyenvana;
	cout << "Nhap thong tin: " << endl;
	nguyenvana.Nhap_thong_tin();
	nguyenvana.Setter("Tran Hoai Phu");
	cout << "Xuat thong tin: " << endl;
	nguyenvana.Xuat_thong_tin();
	return 0;
}  