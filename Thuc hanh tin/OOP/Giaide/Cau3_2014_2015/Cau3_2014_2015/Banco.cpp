#include"Banco.h"
/*
void Banco::Nhap()
{
	Quanco* x;
	x = new Tuong_Vua(trang, 1, 5);
	ds_banco.push_back(x);
	a[1]=
	x = new Tuong_Vua(den, 10, 5);
	ds_banco.push_back(x);
	x = new Si(trang, 1, 4);
	ds_banco.push_back(x);
	x = new Si(trang, 1, 6);
	ds_banco.push_back(x);
	x = new Si(den, 10, 4);
	ds_banco.push_back(x);
	x = new Si(den, 10, 6);
	ds_banco.push_back(x);
	x = new Tuong(trang, 1, 3);
	ds_banco.push_back(x);
	x = new Tuong(trang, 1, 7);
	ds_banco.push_back(x);
	x = new Tuong(den, 10, 3);
	ds_banco.push_back(x);
	x = new Tuong(den, 10, 7);
	ds_banco.push_back(x);
	x = new Ma(trang, 1, 2);
	ds_banco.push_back(x);
	x = new Ma(trang, 1, 8);
	ds_banco.push_back(x);
	x = new Ma(den, 10, 2);
	ds_banco.push_back(x);
	x = new Ma(den, 10, 8);
	ds_banco.push_back(x);
	x = new Xe(trang, 1, 1);
	ds_banco.push_back(x);
	x = new Xe(trang, 1, 9);
	ds_banco.push_back(x);
	x = new Xe(den, 10, 1);
	ds_banco.push_back(x);
	x = new Xe(den, 10, 9);
	ds_banco.push_back(x);
	x = new Phao(trang, 3, 2);
	ds_banco.push_back(x);
	x = new Phao(trang, 3, 8);
	ds_banco.push_back(x);
	x = new Phao(den, 8, 2);
	ds_banco.push_back(x);
	x = new Phao(den, 8, 8);
	ds_banco.push_back(x);
	x = new Tot(trang, 4, 1);
	ds_banco.push_back(x);
	x = new Tot(trang, 4, 3); 
	ds_banco.push_back(x);
	x = new Tot(trang, 4, 5);
	ds_banco.push_back(x);
	x = new Tot(trang, 4, 7);
	ds_banco.push_back(x);
	x = new Tot(trang, 4, 9);
	ds_banco.push_back(x);
	x = new Tot(den, 7, 1);
	ds_banco.push_back(x);
	x = new Tot(den, 7, 3);
	ds_banco.push_back(x);
	x = new Tot(den, 7, 5);
	ds_banco.push_back(x);
	x = new Tot(den, 7, 7);
	ds_banco.push_back(x);
	x = new Tot(den, 7, 9);
	ds_banco.push_back(x);
}

void Banco::Xuat()
{
	while (2004) {
		int loaiquan;
		cout << "\nChon loai quan(1-Quan trang,2-Quan den): ";
		cin >> loaiquan;
		if (loaiquan == 1) {
			int chon;
			cout << "Chon loai tuong(1-Tuong_Vua,2-Si,3-Tuong,4-Ma,5-Xe,6-Phao,7-Tot): ";
			cin >> chon;
			if (chon == 1) {
				for (int i = 0; i < ds_banco.size(); i++) {
					if (ds_banco[i]->loaituong1() == 1) {
						ds_banco[i]->Dichuyen();
						break;
					}
				}
			}
			else if (chon == 2) {
				for (int i = 0; i < ds_banco.size(); i++) {
					if (ds_banco[i]->loaituong1() == 2) {
						ds_banco[i]->Dichuyen();
						break;
					}
				}
			}
			else if (chon == 3) {
				for (int i = 0; i < ds_banco.size(); i++) {
					if (ds_banco[i]->loaituong1() == 3) {
						ds_banco[i]->Dichuyen();
						break;
					}
				}
			}
			else if (chon == 4) {
				for (int i = 0; i < ds_banco.size(); i++) {
					if (ds_banco[i]->loaituong1() == 4) {
						ds_banco[i]->Dichuyen();
						break;
					}
				}
			}
			else if (chon == 5) {
				for (int i = 0; i < ds_banco.size(); i++) {
					if (ds_banco[i]->loaituong1() == 5) {
						ds_banco[i]->Dichuyen();
						break;
					}
				}
			}
			else if (chon == 6) {
				for (int i = 0; i < ds_banco.size(); i++) {
					if (ds_banco[i]->loaituong1() == 6) {
						ds_banco[i]->Dichuyen();
						break;
					}
				}
			}
			else if (chon == 7) {
				for (int i = 0; i < ds_banco.size(); i++) {
					if (ds_banco[i]->loaituong1() == 7) {
						ds_banco[i]->Dichuyen();
						break;
					}
				}
			}
			break;
		}
		else if (loaiquan == 2) {
			int chon;
			cout << "Chon loai tuong(1-Tuong_Vua,2-Si,3-Tuong,4-Ma,5-Xe,6-Phao,7-Tot): ";
			cin >> chon;
			if (chon == 1) {
				for (int i = 0; i < ds_banco.size(); i++) {
					if (ds_banco[i]->loaituong1() == 1) {
						ds_banco[i]->Dichuyen();
						break;
					}
				}
			}
			else if (chon == 2) {
				for (int i = 0; i < ds_banco.size(); i++) {
					if (ds_banco[i]->loaituong1() == 2) {
						ds_banco[i]->Dichuyen();
						break;
					}
				}
			}
			else if (chon == 3) {
				for (int i = 0; i < ds_banco.size(); i++) {
					if (ds_banco[i]->loaituong1() == 3) {
						ds_banco[i]->Dichuyen();
						break;
					}
				}
			}
			else if (chon == 4) {
				for (int i = 0; i < ds_banco.size(); i++) {
					if (ds_banco[i]->loaituong1() == 4) {
						ds_banco[i]->Dichuyen();
						break;
					}
				}
			}
			else if (chon == 5) {
				for (int i = 0; i < ds_banco.size(); i++) {
					if (ds_banco[i]->loaituong1() == 5) {
						ds_banco[i]->Dichuyen();
						break;
					}
				}
			}
			else if (chon == 6) {
				for (int i = 0; i < ds_banco.size(); i++) {
					if (ds_banco[i]->loaituong1() == 6) {
						ds_banco[i]->Dichuyen();
						break;
					}
				}
			}
			else if (chon == 7) {
				for (int i = 0; i < ds_banco.size(); i++) {
					if (ds_banco[i]->loaituong1() == 7) {
						ds_banco[i]->Dichuyen();
						break;
					}
				}
			}
			break;
		}
		else {
			break;
		}
	}
}
*/
void Banco::Nhap() {
	a[1] = new Tuong_Vua(trang, 1, 5);
	b[1] = 1;
	a[2] = new Tuong_Vua(den, 10, 5);
	b[2] = 1;
	a[3] = new Si(trang, 1, 4);
	b[3] = 2;
	a[4] = new Si(trang, 1, 6);
	b[4] = 2;
	a[5] = new Si(den, 10, 4);
	b[5] = 2;
	a[6] = new Si(den, 10, 6);
	b[6] = 2;
	a[7] = new Phao(trang, 3, 2);
	b[7] = 6;
	a[8] = new Phao(trang, 3, 8);
	b[8] = 6;
	a[9] = new Phao(den, 8, 2);
	b[9] = 6;
	a[10] = new Phao(den, 8, 8);
	b[10] = 6;
	a[11] = new Tuong(trang, 1, 3);
	b[11] = 3;
	a[12] = new Tuong(trang, 1, 7);
	b[12] = 3;
	a[13] = new Tuong(den, 10, 3);
	b[13] = 3;
	a[14] = new Tuong(den, 10, 7);
	b[14] = 3;
	a[15] = new Ma(trang, 1, 2);
	b[15] = 4;
	a[16] = new Ma(trang, 1, 8);
	b[16] = 4;
	a[17] = new Ma(den, 10, 2);
	b[17] = 4;
	a[18] = new Ma(den, 10, 8);
	b[18] = 4;
	a[19] = new Xe(trang, 1, 1);
	b[19] = 5;
	a[20] = new Xe(trang, 1, 9);
	b[20] = 5;
	a[21] = new Xe(den, 10, 1);
	b[21] = 5;
	a[22] = new Xe(den, 10, 9);
	b[22] = 5;
	a[23] = new Tot(trang, 4, 1);
	b[23] = 7;
	a[24] = new Tot(trang, 4, 3);
	b[24] = 7;
	a[25] = new Tot(trang, 4, 5);
	b[25] = 7;
	a[26] = new Tot(trang, 4, 7);
	b[26] = 7;
	a[27] = new Tot(trang, 4, 9);
	b[27] = 7;
	a[28] = new Tot(den, 7, 1);
	b[28] = 7;
	a[29] = new Tot(den, 7, 3);
	b[29] = 7;
	a[30] = new Tot(den, 7, 5);
	b[30] = 7;
	a[31] = new Tot(den, 7, 7);
	b[31] = 7;
	a[32] = new Tot(den, 7, 9);
	b[32] = 7;

}
void Banco::Xuat() {
	int loaiquan;
	cout << "\nChon loai quan(1-Quan trang,2-Quan den): ";
	cin >> loaiquan;
	if (loaiquan == 1) {
		int chon;
		cout << "Chon loai tuong(1-Tuong_Vua,2-Si,3-Tuong,4-Ma,5-Xe,6-Phao,7-Tot): ";
		cin >> chon;
		for (int i = 1; i <= 32; i++) {
			if (b[i] == chon) {
				a[i]->Dichuyen();
				break;
			}
		}
	}
	else {
		int chon;
		cout << "Chon loai tuong(1-Tuong_Vua,2-Si,3-Tuong,4-Ma,5-Xe,6-Phao,7-Tot): ";
		cin >> chon;
		for (int i = 1; i <= 32; i++) {
			if (b[i] == chon) {
				a[i]->Dichuyen();
				break;
			}
		}
	}
}