#include "DSThanhPhan.h"
int main() {
	DSThanhPhan* x = new DSThanhPhan;
	x->nhap();
	x->xuat();
	delete x;
	return 0;
}