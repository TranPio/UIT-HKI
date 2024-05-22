#include "DSThanhPhan.h"

void DSThanhPhan::nhap()
{
	cout << "\nNhap vao so thanh phan cua web: ";
	cin >> n;
	Thanhphan* x;
	int luachon;
	cout << "\n Nhap vao toa do (x,y): ";
	cin >> x1>>y1;
	cout << "\n Nhap vao chieu dai: ";
	cin >> dai;
	cout << "\n Nhap vao chieu rong: ";
	cin >> rong;

	for (int i = 0; i < n; i++) {
		do {
			cout << "\n1-Label,2-Button: "<<endl;
			cin >> luachon;
			if (luachon == 1) {
				x = new Label;
				x->Nhap();
				dstp.push_back(x);
			}
			else if (luachon == 2) {
				x = new Button;
				x->Nhap();
				dstp.push_back(x);
			}
			else if (luachon < 1 || luachon>2) {
				cout << "\n Nhap sai,vui long nhap lai";
			}
		} while (luachon < 1 || luachon >3);
	}
}
int kiemtra(int x, int y)
{
	if (x == y + 6 || y == x + 6) {
		return 1;
	}
	else {
		return 0;
	}
}
int kiemtratuongdong(int x, int y, int z)
{
	if ((z == y + 1 && z ==x + 2) || (z == y + 2 && z==x + 1) || (y == x + 1 && y==z + 2) || (y == x + 2 && y== z+1) || (x == y + 1 && x== z + 2) || (x == y + 2  && x==z+1)) {
		return 1;
	}
	else {
		return 0;
	}
}
void DSThanhPhan::xuat()
{
	cout << "\nToa do cua web: (" << x1 << "," << y1 << ")";
	cout << "\nChieu dai: " << dai;
	cout << "\nChieu rong: " << rong;
	for (int i = 0; i < dstp.size(); i++) {
		dstp[i]->Xuat();
	}
	if (!dstp.empty()) {
		if (kiemtra(dstp[0]->mauchu(), dstp[0]->maunen()) == 1) {
			cout << "\n Thanh phan dau tien phu hop voi bang phoi mau bo tuc";
		}
		else {
			cout << "\n Thanh phan dau tien khong phu hop voi bang phoi mau bo tuc";
		}
	}
	for (int i = 0; i < dstp.size(); i++) {
		if (n >= 2 && i + 1 < dstp.size() ) {
			if (dstp[i]->maunen() == dstp[i + 1]->maunen()) {
				cout << "\n Phu hop voi phoi mau don sac";
			}
			else if (kiemtra(dstp[i]->maunen(), dstp[i + 1]->maunen()) == 1) {
				cout << "\n Phu hop voi mau bo tuc";
			}
		}
		if (n >= 3 && i + 2 < dstp.size() ) {
			if (kiemtratuongdong(dstp[i]->maunen(), dstp[i + 1]->maunen(), dstp[i + 2]->maunen()) == 1) {
				cout << "\n Phu hop voi phoi mau tuong dong";
			}
		}
	}

}


