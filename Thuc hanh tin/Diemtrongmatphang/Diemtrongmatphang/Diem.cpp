#include "Diem.h"
using namespace std;
void Diem:: set() {
	int x = 0;
	int y = 0;
 }

void Diem::thietlapDiem(int c, int d)
{
	x = c;
	y = d;
}

int Diem::layX()
{
	return x;
}

int Diem::layY()
{
	return y;
}

void Diem::thietlapX(int c)
{
	x = c;
}

void Diem::thietlapY(int d)
{
	y = d;
}

void Diem::tinhtien(int c, int d)
{
	x += c;
	y += d;
}

void Diem::nhap()
{
	cout << "Nhap hoanh do: ";
	cin >> x;
	cout << "Nhap tung do: ";
	cin >> y;
}

void Diem::xuat()
{
	cout << "(" << x << ", " << y << ")" << endl;
}
