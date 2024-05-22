#include "Xe.h"
#include <iostream>
#include <string>
using namespace std;
void Xe::Nhap()
{
	cin.ignore();
	cout << "Nhap ho ten nguoi thue: " << endl;
	getline(cin, Hoten);
	cout << "Nhap so gio thue: " << endl;
	cin >> Sogiothue;

}

void Xe::Xuat()
{
	cout << "Ho ten nguoi thue: " << Hoten<<endl;
	cout << "So gio thue: " << Sogiothue<<endl;
}

float Xedap::Tinhtien()
{
	return 10000 + ((Sogiothue) * 8000);
}

void Xemay::Nhap()
{
	Xe::Nhap();
	cout << "Nhap loai xe can thue(100-250 phan khoi): " << endl;
	cin >> Loaixe;
	cin.ignore();
	cout << "Nhap vao bien so xe: " << endl;
	getline(cin, Bienso);
}

void Xemay::Xuat()
{
	Xe::Xuat();
	cout << "Loai xe: " << Loaixe<<endl;
	cout << "Bien so xe: " << Bienso<<endl;

}

float Xemay::Tinhtien()
{
	float s = 0;
	if (Loaixe == 100) {
		s = 150000;
	}
	else {
		s = 200000;
	}
	return s+((Sogiothue-1)*100000);
}
int Xemay::Getter_loaixe() {
	return Loaixe;
}
void Xemay::Setter_loaixe(int LOAIXE) {
	Loaixe = LOAIXE;
}