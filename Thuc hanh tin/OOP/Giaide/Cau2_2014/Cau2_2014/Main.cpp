#include "Dathuc.h"
int main() {
	Dathuc a, b;
	a.Nhap(a);
	b.Nhap(b);
	cout<<a.giatri(a);
	cout<<b.giatri(b);
	Dathuc c;
	c=a + b;
	c.Xuat(c);
	return 0;
}