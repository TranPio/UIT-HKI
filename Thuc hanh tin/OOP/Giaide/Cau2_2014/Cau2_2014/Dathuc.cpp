#include "Dathuc.h"

Dathuc::Dathuc()
{
	a = 1;
	b = 0;
}

void Dathuc::Nhap(Dathuc& dt)
{
	cout << "Nhap vao a (ax+b): ";
	cin >> dt.a;
	cout << "Nhap vao b (ax+b): ";
	cin >> dt.b;
}

void Dathuc::Xuat(Dathuc& dt)
{
	cout << "Da thuc la: "<<dt.a << "x+" <<dt.b;
}

int Dathuc::giatri(Dathuc& dt)
{
	if (dt.b == 0) {
		return 0;
	}
	else {
		return -dt.b / dt.a;
	}
}

Dathuc operator+(Dathuc& a1, Dathuc& b2)
{
	Dathuc tam;
	tam.a = a1.a + b2.a;
	tam.b = a1.b + b2.b;
	return tam;
}
