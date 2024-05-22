#include "DsXemay.h"
using namespace std;
int main() {
	DsXemay *x =new DsXemay;
	x->Nhap();
	x->Xuat();
	cout << "\n Tong tien xe may la: " << x->Tong_tien_xe();
	system("pause");
	delete x;
	return 0;
}