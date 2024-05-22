#pragma once
#include<fstream>
#include"Banhxe.h"
#include"Dongco.h"
#include"Khungxe.h"
class Xemay {
protected:
	string masoxe;
	Dongco *ThongTinDongCo;
	Banhxe** ThongTinBanhXe;
	Khungxe *ThongTinKhungXe;
	int tongtien;
public:
	virtual ~Xemay();
	void HamNhapbanhxe();
	void nhap();
	void xuat();
	void xuatfile(fstream&)const;
	void tinhtien();
};