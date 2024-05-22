#include "ChitietHoadon.h"

void ChitietHoadon::Nhap()
{
	SanPham* x;
	while (2004) {
		system("cls");
		cout << "\n\t 1.Nhap vao may quat";
		cout << "\n\t 2.Nhap vao may lanh";
		cout << "\n\t 0.THOAT";
		cout << "\n\t Nhap vao lua chon: ";
		int luachon;
		cin >> luachon;
		if (luachon == 1) {
			while (2004) {
				system("cls");
				cout << "\n\n\t\t ============= NHAP VAO LUA CHON QUAT ============= ";
				cout << "\n\n\t 1.Quat dung";
				cout << "\n\t 2.Quat hoi nuoc";
				cout << "\n\t 3.Quat sac dien";
				cout << "\n\t 0.THOAT";
				cout << "\n\n\t\t ============= END ============= ";
				cout << "\n\n\t Nhap vao lua chon: ";
				int chon;
				cin >> chon;
				if (chon == 1) {
					x = new MayquatDung;
					x->Nhap();
					ds_sanpham.push_back(x);
				}
				else if (chon == 2) {
					x = new MayquatHoinuoc;
					x->Nhap();
					ds_sanpham.push_back(x);
				}
				else if (chon == 3) {
					x = new MayquatSacdien;
					x->Nhap();
					ds_sanpham.push_back(x);
				}
				else {
					break;
				}
			}
		}
		else if (luachon == 2) {
			while (2004) {
				system("cls");
				cout << "\n\n\t\t ============= NHAP VAO LUA CHON MAY LANH ============= ";
				cout << "\n\n\t 1.May lanh 1 chieu";
				cout << "\n\t 2.May lanh 2 chieu ";
				cout << "\n\t 0.THOAT";
				cout << "\n\n\t\t ============= END ============= ";
				cout << "\n\n\t Nhap vao lua chon: ";
				int chon;
				cin >> chon;
				if (chon == 1) {
					x = new Maylanh1chieu;
					x->Nhap();
					ds_sanpham.push_back(x);
				}
				else if (chon == 2) {
					x = new Maylanh2chieu;
					x->Nhap();
					ds_sanpham.push_back(x);
				}
				else {
					break;
				}
			}
		}
		else {
			break;
		}
	}
}

void ChitietHoadon::Xuat()
{
	cout << "\n\t SO LUONG SAN PHAM LA: " << ds_sanpham.size();
	for (int i = 0; i < ds_sanpham.size(); i++) {
		ds_sanpham[i]->Xuat();
	}
}

int ChitietHoadon::Tong_hoa_don()
{
	int sum = 0;
	for (int i = 0; i < ds_sanpham.size(); i++) {
		if (ds_sanpham[i]->getloai() == 3) {
			sum += ds_sanpham[i]->Tinh_gia_ban();
		}
		else if (ds_sanpham[i]->getloai() == 4) {
			sum += ds_sanpham[i]->Tinh_gia_ban();
		}
		else if (ds_sanpham[i]->getloai() == 5) {
			sum += ds_sanpham[i]->Tinh_gia_ban();
		}
		else if (ds_sanpham[i]->getloai() == 6) {
			sum += ds_sanpham[i]->Tinh_gia_ban();
		}
		else if (ds_sanpham[i]->getloai() == 7) {
			sum += ds_sanpham[i]->Tinh_gia_ban();
		}
	}
	return (size_t)sum;
}
