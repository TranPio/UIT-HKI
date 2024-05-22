#include<iostream>
#include"PHANSO.h"
using namespace std;
int main()
{
	phan_so a, b(2), c(3, 3);
	phan_so d, f, t,e();
	 //d = a, e(a);
	 f = a+b;
	 t = a.tru(c);
	f.xuat();
	a.xuat();
	b.xuat();
	if (a.isequal(b)) cout << "a bang b";
	return 0;
}