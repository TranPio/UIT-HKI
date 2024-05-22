#include "DanhsachHOADON.h"
int main() {
	DanhsachHOADON* x = new DanhsachHOADON;
	x->Nhap();
	x->Xuat();
	cout << "\n\t TONG TIEN CAC HOA DON: " << x->Tinh_tien_hoa_don();
	system("pause");
	delete x;
	return 0;
}