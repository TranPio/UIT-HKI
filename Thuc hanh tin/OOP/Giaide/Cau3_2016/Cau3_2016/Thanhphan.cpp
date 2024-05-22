#include "Thanhphan.h"

Thanhphan::Thanhphan()
{
	Mauchu = 0;
	Maunen = 0;
	text = "****";
}

Thanhphan::~Thanhphan()
{
}

void Thanhphan::Nhap()
{
	cout << "\n Nhap vao text: ";
	cin.ignore();
	getline(cin, text);
	do {
		cout << "\nNhap vao mau chu(1-Red,2-Orange,3-Yellow,4-Spring Green,5-Green,6-Turquoise,7-Cyan,8-Ocean,9-Blue,10-Violet,11-Magenta,12-Raspberry): ";
		cin >> Mauchu;
		if (Mauchu < 1 || Mauchu >12) {
			cout << "\nNhap sai,vui long nhap lai";
		}
	} while (Mauchu<1 && Mauchu > 12);
	if (Mauchu == 1) {
		MC = "Red";
	}
	else if (Mauchu == 2) {
		MC = "Orange";
	}
	else if (Mauchu == 3) {
		MC = "Yellow";
	}
	else if (Mauchu == 4) {
		MC = "Spring Green";
	}
	else if (Mauchu == 5) {
		MC = "Green";
	}
	else if (Mauchu == 6) {
		MC = "Turquoise";
	}
	else if (Mauchu == 7) {
		MC = "Cyan";
	}
	else if (Mauchu == 8) {
		MC = "Ocean";
	}
	else if (Mauchu == 9) {
		MC = "Blue";
	}
	else if (Mauchu == 10) {
		MC = "Violet";
	}
	else if (Mauchu == 11) {
		MC = "Magenta";
	}
	else if (Mauchu == 12) {
		MC = "Raspberry";
	}
	do {
		cout << "\nNhap vao mau nen(1-Red,2-Orange,3-Yellow,4-Spring Green,5-Green,6-Turquoise,7-Cyan,8-Ocean,9-Blue,10-Violet,11-Magenta,12-Raspberry): ";
		cin >> Maunen;
		if (Maunen < 1 || Maunen >12) {
			cout << "\nNhap sai,vui long nhap lai";
		}
	} while (Maunen < 0 && Maunen > 12);
	if (Maunen == 1) {
		MN = "Red";
	}
	else if (Maunen == 2) {
		MN= "Orange";
	}
	else if (Maunen == 3) {
		MN = "Yellow";
	}
	else if (Maunen == 4) {
		MN = "Spring Green";
	}
	else if (Maunen == 5) {
		MN = "Green";
	}
	else if (Maunen == 6) {
		MN = "Turquoise";
	}
	else if (Maunen == 7) {
		MN = "Cyan";
	}
	else if (Maunen == 8) {
		MN = "Ocean";
	}
	else if (Maunen == 9) {
		MN = "Blue";
	}
	else if (Maunen == 10) {
		MN = "Violet";
	}
	else if (Maunen == 11) {
		MN = "Magenta";
	}
	else if (Maunen == 12) {
		MN = "Raspberry";
	}
}

void Thanhphan::Xuat()
{
	cout << "\n Text: " << text;
	cout << "\n Mau chu la: " << MC;
	cout << "\n Mau nen la: " << MN;
}

int Thanhphan::maunen()
{
	return 0;
}

int Thanhphan::mauchu()
{
	return 0;
}

Label::Label()
{
}

void Label::Nhap()
{
	Thanhphan::Nhap();
}

void Label::Xuat()
{
	cout << "\n\t Label: ";
	Thanhphan::Xuat();
}

int Label::maunen()
{
	return Maunen;
}

int Label::mauchu()
{
	return Mauchu;
}

Button::Button()
{
}

void Button::Nhap()
{
	do {
		cout << "Nhap chon Button(1-Hinh anh,2-Text,3-Ca hai): ";
		cin >> luachon1;
		if (luachon1 < 1 || luachon1>3) {
			cout << "\nNhap sai,Nhap lai";
		}
	} while (luachon1 < 1 && luachon1 >3);
		if (luachon1 == 1) {
			cout << "\n Nhap vao duong link hinh anh: ";
			cin.ignore();
			getline(cin, hinhanh);
		}
		else if (luachon1 == 2) {
			Thanhphan::Nhap();
		}
		else {
			cout << "\n Nhap vao duong link hinh anh: ";
			cin.ignore();
			getline(cin, hinhanh);
			Thanhphan::Nhap();
		}
}

void Button::Xuat()
{
	if (luachon1 == 1) {
		cout << "\n\t Button";
		cout << "\nDuong link hinh anh: " << hinhanh;
	}
	else if (luachon1 == 2) {
		cout << "\n\t Button";
		Thanhphan::Xuat();
	}
	else {
		cout << "\n\t Button";
		Thanhphan::Xuat();
		cout << "\nDuong link hinh anh: " << hinhanh;
	}
}

int Button::maunen()
{
	return Maunen;
}

int Button::mauchu()
{
	return Mauchu;
}
