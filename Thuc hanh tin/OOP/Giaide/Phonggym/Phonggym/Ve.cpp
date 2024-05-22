#include "Ve.h"

Ve::Ve()
{
	loai = 0;
}

void Ve::Nhap()
{
	cin.ignore();
	cout << "\n Nhap vao ma ve: ";
	getline(cin, Mave);
	cout << "\n Nhap vao ho ten: ";
	getline(cin, Hoten);
	cout << "\n Nhap vao nam sinh: ";
	cin >> Namsinh;
}

void Ve::Xuat()
{
	cout << "\n Ma ve la: " << Mave<<endl;
	cout << "\n Ho ten la: " << Hoten<<endl;
	cout << "\n Nam sinh la: " << Namsinh<<endl;
}

int Ve::getloai()
{
	return 0;
}
