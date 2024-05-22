#include "DsNhommau.h"

bool DsNhommau::kiemtra(int x, int y, int z)
{
	if (x == 1) {
		if (y == 1) {
			if (z == 1 || z == 4) {
				return true;
			}
			return false;
		}
		else if (y == 2) {
			return true;
		}
		else if (y == 3) {
			if (z == 1 || z == 2 || z == 3) {
				return true;
			}
			return false;
		}
		else {
			if (z == 1 || z == 4) {
				return true;
			}
			return false;
		}
	}
	else if (x == 2) {
		if (y == 1) {
			return true;
		}
		else if (y == 2) {
			if (z == 2 || z == 4) {
				return true;
			}
			return false;
		}
		else if (y == 3) {
			if (z == 1 || z == 2 || z == 4) {
				return true;
			}
			return false;
		}
		else {
			if (z == 2 || z == 4) {
				return true;
			}
			return false;
		}
	}
	else if (x == 3) {
		if (y == 1) {
			if (z == 1 || z == 2 || z == 3) {
				return true;
			}
			return false;
		}
		else if (y == 2) {
			if (z == 1 || z == 2 || z == 3) {
				return true;
			}
			return false;
		}
		else if (y == 3) {
			if (z == 1 || z == 2 || z == 3) {
				return true;
			}
			return false;
		}
		else {
			if (z == 1 || z == 2) {
				return true;
			}
			return false;
		}
	}
	else {
		if (y == 1) {
			if (z == 1 || z == 4) {
				return true;
			}
			return false;
		}
		else if (y == 2) {
			if (z == 2 || z == 4) {
				return true;
			}
			return false;
		}
		else if (y == 3) {
			if (z == 1 || z == 2) {
				return true;
			}
			return false;
		}
		else {
			if (z == 4) {
				return true;
			}
			return false;
		}
	}
}

int DsNhommau::kiemtratruyenmau(int x)
{
	if()
}

void DsNhommau::Nhap()
{
	Nhommau* x;
		cout << "\n\t--------Menu--------";
		cout << "\n1.Nhap vao danh sach cac nhom mau";
		cout << "\n2.Nhap vao 1 bo 3 nguoi(Cha,Me,Con)"<<endl;
		cin >> chon;
		if (chon == 1) {
			cout << "\n Nhap vao so nguoi: ";
			cin >> n;
			for (int i = 0; i < n; i++) {
				do {
					cout << "Chon nhom mau(1-A,2-B,3-AB,4-0): ";
					cin >> nm;
					if (nm < 1 || nm>4) {
						cout << "\n Nhap sai vui long nhap lai";
					}
				} while (nm < 1 && nm<4);
				if (nm == 1) {
					x = new A;
					ds.push_back(x);
				}
				else if (nm == 2) {
					x = new B;
					ds.push_back(x);
				}
				else if (nm == 3) {
					x = new AB;
					ds.push_back(x);
				}
				else if (nm == 4) {
					x = new O;
					ds.push_back(x);
				}
			}
		}
		else if (chon == 2) {
			cout << "\nNhap vao lan luot tung nhom mau cua cha,me va con: ";
			for (int i = 0; i < 3; i++) {
				do {
					cout << "\nChon nhom mau(1-A,2-B,3-AB,4-0): ";
					cin >> nm;
					if (nm < 1 || nm>4) {
						cout << "\n Nhap sai vui long nhap lai";
					}
				} while (nm < 1 && nm < 4);
				if (nm == 1) {
					x = new A;
					ds.push_back(x);
				}
				else if (nm == 2) {
					x = new B;
					ds.push_back(x);
				}
				else if (nm == 3) {
					x = new AB;
					ds.push_back(x);
				}
				else if (nm == 4) {
					x = new O;
					ds.push_back(x);
				}
			}
		}
}
void DsNhommau::Xuat() {
	if (chon == 1) {
		for (int i = 0; i < ds.size(); i++) {
			cout << "\nNhom mau cua nguoi thu " << i + 1 << " la: ";
			ds[i]->Xuat();
		}
	}
	else {
		if (kiemtra(ds[0]->loai(), ds[1]->loai(), ds[2]->loai()) == true) {
			cout << "\n Phu hop voi quy luat di truyen";
		}
		else{
			cout << "\n Khong phu hop voi quy luat di truyen";
		}
	}
}