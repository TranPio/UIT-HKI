#include "Xemay.h"

void Xemay::Nhap()
{
	cin.ignore();
	cout << "\n Nhap vao bien so xe: ";
	getline(cin, Bienso);
			Dongco* y;
			while (true) {
				cout << "\n Nhap vao loai dong co xe: ";
				cout << "\n 1.Dong co A";
				cout << "\n 2.Dong co B";
				cout << "\n 3.Dong co C";
				int luachon;
				cout << "\n Nhap vao lua chon: ";
				cin >> luachon;
				if (luachon == 1) {
					y = new DongcoA;
					y->Nhap();
					ds_dongco.push_back(y);
				}
				else if (luachon == 2) {
					y = new DongcoB;
					y->Nhap();
					ds_dongco.push_back(y);
				}
				else if (luachon == 3) {
					y = new DongcoC;
					y->Nhap();
					ds_dongco.push_back(y);
				}
				break;
			}
			for (int i = 0; i < 2; i++) {
				cout << "\nNhap vao loai banh xe " << i+1 ;
				while (true) {
					
					Banhxe* z;
					cout << "\n 1.Banh xe loai D";
					cout << "\n 2.Banh xe loai E";
					cout << "\n Nhap vao lua chon :";
					int loai;
					cin >> loai;
					if (loai == 1) {
						z = new BanhxeD;
						z->Nhap();
						ds_banhxe.push_back(z);
					}
					else if (loai == 2) {
						z = new BanhxeE;
						z->Nhap();
						ds_banhxe.push_back(z);
					}
					break;
				}
			}
			Khungxe* kx;
			while (true) {
				cout << "\nNhap vao loai khung xe ";
				cout << "\n 1.Khung xe Nhom";
				cout << "\n 2.Khung xe Nhua";
				cout << "\n Nhap vao lua chon :";
				int loai;
				cin >> loai;
				if (loai == 1) {
					kx = new KhungxeNhom;
					kx ->Nhap();
					ds_khungxe.push_back(kx);
				}
				else if (loai == 2) {
					kx = new KhungxeNhua;
					kx->Nhap();
					ds_khungxe.push_back(kx);
				}
				break;
			}
		
		
	
}


void Xemay::Xuat()
{ 
	cout << "Bien so xe la: " << Bienso;
		for (int i = 0; i < ds_dongco.size(); i++) {
			if (ds_dongco[i]->getloai() == 1) {
				ds_dongco[i]->Xuat();
				cout << "\n Don gia la: " << ds_dongco[i]->Tinhtien();
			}
			else if (ds_dongco[i]->getloai() == 2) {
				ds_dongco[i]->Xuat();
				cout << "\n Don gia la: " << ds_dongco[i]->Tinhtien();
			}
			else if (ds_dongco[i]->getloai() == 3) {
				ds_dongco[i]->Xuat();
				cout << "\n Don gia la: " << ds_dongco[i]->Tinhtien();
			}
		}

//		for (int o = 0; o < 2; o++) {
			
			for (int i = 0; i < ds_banhxe.size(); i++) {
				cout << "\n Thong tin banh xe thu " << i + 1;
				if (ds_banhxe[i]->getloai() == 1) {
					ds_banhxe[i]->Xuat();
					cout << "\n Don gia la: " << ds_banhxe[i]->Tinh_tien_banh_xe();
				}
				else if (ds_banhxe[i]->getloai() == 2) {
					ds_banhxe[i]->Xuat();
					cout << "\n Don gia la: " << ds_banhxe[i]->Tinh_tien_banh_xe();
				}
		}
		for (int i = 0; i < ds_khungxe.size(); i++) {
			if (ds_khungxe[i]->getloai() == 1) {
				ds_khungxe[i]->Xuat();
				cout << "\n Don gia la: " << ds_khungxe[i]->Tinh_tien_khung_xe();
			}
			else if (ds_khungxe[i]->getloai() == 2) {
				ds_khungxe[i]->Xuat();
				cout << "\n Don gia la: " << ds_khungxe[i]->Tinh_tien_khung_xe();
			}

		}
		
}

int Xemay::Tong_don_gia()
{
	long sum = 0;
	for (int i = 0; i < ds_dongco.size(); i++) {
		if (ds_dongco[i]->getloai() == 1) {
							sum += ds_dongco[i]->Tinhtien();
		}
		else if (ds_dongco[i]->getloai() == 2) {
			sum += ds_dongco[i]->Tinhtien();
		}
		else if (ds_dongco[i]->getloai() == 3) {
				sum += ds_dongco[i]->Tinhtien();
		}
	}
	for (int i = 0; i < ds_banhxe.size(); i++) {
		if (ds_banhxe[i]->getloai() == 1) {
			sum += ds_banhxe[i]->Tinh_tien_banh_xe();
		}
		else if (ds_banhxe[i]->getloai() == 2) {
	     	sum += ds_banhxe[i]->Tinh_tien_banh_xe();
		}
	}
	for (int i = 0; i < ds_khungxe.size(); i++) {
		if (ds_khungxe[i]->getloai() == 1) {
			sum += ds_khungxe[i]->Tinh_tien_khung_xe();
		}
		else if (ds_khungxe[i]->getloai() == 2) {
				sum += ds_khungxe[i]->Tinh_tien_khung_xe();
		}

	}
	return sum;
}
