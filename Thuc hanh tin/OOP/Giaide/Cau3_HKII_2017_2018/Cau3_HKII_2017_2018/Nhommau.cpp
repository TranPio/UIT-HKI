#include "Nhommau.h"

void Nhommau::Nhap()
{
	do {
		cout << "\nNhap vao Rh( + hoac - ): ";
		cin >> Rhc;
		if (Rhc != '+' || Rhc != '-') {
			cout << "\n Nhap sai vui long nhap lai,ban chi duoc nhap + hoac -";
		}
	} while (Rhc == '+' || Rhc == '-');
	if (Rhc == '+') { Rh = 1; }
	else {
		Rh = 0;
	}
}

A::A()
{
}

int A::loai()
{
	return 1;
}

void A::Nhap()
{
	Nhommau::Nhap();
}

int A::Rhesus()
{
	return Rh;
}

void A::Xuat()
{
	cout << "-Nhom mau la: A";
}

B::B()
{
}

int B::loai()
{
	return 2;
}

void B::Nhap()
{
	Nhommau::Nhap();
}

int B::Rhesus()
{
	return Rh;
}

void B::Xuat()
{
	cout << "-Nhom mau la: B";
}

AB::AB()
{
}

int AB::loai()
{
	return 3;
}

void AB::Nhap()
{
	Nhommau::Nhap();
}

int AB::Rhesus()
{
	return Rh;
}

void AB::Xuat()
{
	cout << "-Nhom mau la: AB";
}

O::O()
{
}

int O::loai()
{
	return 4;
}

void O::Nhap()
{
	Nhommau::Nhap();
}

int O::Rhesus()
{
	return Rh;
}

void O::Xuat()
{
	cout << "-Nhom mau la: O";
}
