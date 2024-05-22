#include "Thuvien.h"
int main() {
	Thuvien* x = new Thuvien;
	x->Nhap();
	x->Xuat();
	cout << "\n\tTong tien lam the: " << x->Tong_tien_lam_the();
	delete x;
	return 0;
}