#pragma once
#include "Nuochoa.h"
#include "Suatam.h"
#include "Daugoi.h"
class GoiSanpham
{
private:
	string Ms,Tensp;
	int goisp,nuochoa,daugoi,suatam;
	vector<Sanpham*>ds_goisanpham;
public:
	virtual void Nhap();
	virtual void Xuat(fstream& os);
	virtual int Tong_tien();
};

