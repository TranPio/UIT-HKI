#include "Canbo.h"

void Canbo::Nhap()
{ 
	cin.ignore();
	cout << "\n Nhap vao ho ten can bo: " << endl;
	getline(cin, Hoten);
	cout << "\n Nhap vao he so luong: " << endl;
	cin >> Hesoluong;
}

Canbo::Canbo()
{
}

Canbo::~Canbo()
{
}

void Canbo::Xuat(ostream& os)
{
	os << "\n Ten can bo la: " << Hoten << endl;
}