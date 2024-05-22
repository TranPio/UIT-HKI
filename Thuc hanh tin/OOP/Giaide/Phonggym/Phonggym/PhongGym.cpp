#include "PhongGym.h"

void PhongGym::Nhap()
{
	Ve* x;
	while (2004) {
		system("cls");
		int luachon;
		cout << "\n\n\t\t ================Nhap loai ve can mua================";
		cout << "\n\t 1.Ve vip";
		cout << "\n\t 2.Ve thuong";
		cout << "\n\t 3.Ve thu";
		cout << "\n\t 0.Thoat";
		cout << "\n\t Nhap vao lua chon: ";
		cin >> luachon;
		if (luachon == 1) {
			dem1++;
			x = new VeVip;
			x->Nhap();
			ds_ve.push_back(x);
		}
		else if (luachon == 2) {
			dem2++;
			x = new VeThuong;
			x->Nhap();
			ds_ve.push_back(x);
		}
		else if (luachon == 3) {
			dem3++;
			x = new VeThu;
			x->Nhap();
			ds_ve.push_back(x);
		}
		else {
			break;
		}
	}
}

void PhongGym::Xuat()
{
	for (int i = 0; i < ds_ve.size(); i++) {
		ds_ve[i]->Xuat();
	}
}

void PhongGym::Venhieunguoimua()
{
	if (dem1 > dem2 && dem1 > dem3) {
		cout << "\n\t Ve nhieu nguoi mua nhat la: VE VIP"<<endl;
	}
	else if (dem2 > dem1 && dem2 > dem3) {
		cout << "\n\t Ve nhieu nguoi mua nhat la: VE THUONG"<<endl;
	}
	else if (dem3 > dem1 && dem3 > dem2)
	{
		cout << "\n\t Ve nhieu nguoi mua nhat la: VE THU"<<endl;
	}
}

int PhongGym::Tong_so_ve()
{
	long sum = 0;
	for (int i = 0; i < ds_ve.size(); i++) {
		if (ds_ve[i]->getloai() == 1) {
			sum += ds_ve[i]->Tinh_tien();
		}
		else if (ds_ve[i]->getloai() == 2) {
			sum += ds_ve[i]->Tinh_tien();
		}
		else if (ds_ve[i]->getloai() == 3) {
			sum += ds_ve[i]->Tinh_tien();
		}
	}
	return (size_t)sum;
}

void PhongGym::Ve_thuong_cao_nhat()
{
	Ve* vethuongcaonhat = NULL;
	for (int i = 0; i < ds_ve.size(); i++) {
		if ((string)typeid(*ds_ve[i]).name() == "class VeThuong") {
			if (vethuongcaonhat == NULL) {
				vethuongcaonhat = ds_ve[i];
			}
			else if(ds_ve[i]->Tinh_tien()>vethuongcaonhat->Tinh_tien()) {
				vethuongcaonhat = ds_ve[i];
			}
		}
	}
	if (vethuongcaonhat != NULL) {
		for (int i = 0; i < ds_ve.size(); i++) {
			if (vethuongcaonhat->Tinh_tien() == ds_ve[i]->Tinh_tien()) {
				vethuongcaonhat->Xuat();
			}
		}
	}
}
