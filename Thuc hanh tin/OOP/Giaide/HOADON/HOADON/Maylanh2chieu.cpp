#include "Maylanh2chieu.h"

Maylanh2chieu::Maylanh2chieu()
{
	loai = 7;
}

void Maylanh2chieu::Nhap()
{
	Maylanh::Nhap();
	cout << "\n May lanh co cong nghe khu mui khong? (1-CO,2-KHONG): ";
	cin >> khu_mui;
	cout << "\n May lanh co cong nghe khang khuan khong? (1-CO,2-KHONG): ";
	cin >> khang_khuan;
}

void Maylanh2chieu::Xuat()
{
	Maylanh::Xuat();
	cout << "\n\t Day la MAY LANH 2 CHIEU " << endl;
	if (khu_mui == 1) {
		cout << "\n\t MAY LANH CO CONG NGHE KHU MUI " << endl;
	}
	else if(khu_mui==2){
		cout << "\n\t MAY LANH KHONG CO CONG NGHE KHU MUI " << endl;
	}
	if (khang_khuan == 1) {
		cout << "\n\t MAY LANH CO CONG NGHE KHANG KHUAN " << endl;
	}
	else if(khang_khuan==2){
		cout << "\n\t MAY LANH KHONG CO CONG NGHE KHANG KHUAN " << endl;
	}
}

int Maylanh2chieu::getloai()
{
	return loai;
}

int Maylanh2chieu::Tinh_gia_ban()
{
	if (inverter == 1 && khu_mui==1 && khang_khuan ==1) {
		return 3500;
	}
	else if (inverter == 1 && khu_mui == 2 && khang_khuan == 1) {
		return 3000;
	}
	else if (inverter == 1 && khu_mui == 1 && khang_khuan == 2) {
		return 3000;
	}
	else if (inverter == 2 && khu_mui == 1 && khang_khuan == 1) {
		return 3000;
	}
	else if (inverter == 2 && khu_mui == 2 && khang_khuan == 1) {
		return 2500;
	}
	else if (inverter == 2 && khu_mui == 1 && khang_khuan == 2) {
		return 2500;
	}
	else if (inverter == 2 && khu_mui == 2 && khang_khuan == 2) {
		return 2000;
	}
}
