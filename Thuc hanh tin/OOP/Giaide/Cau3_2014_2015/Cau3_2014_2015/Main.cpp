#include "Banco.h"
int main() {
	Banco* x=new Banco;
	x->Nhap();
	x->Xuat();
	delete x;
	return 0;
}