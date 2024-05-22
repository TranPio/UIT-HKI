#pragma once
#include "DongcoA.h"
#include "DongcoC.h"
#include "DongcoB.h"
#include "BanhxeD.h"
#include "BanhxeE.h"
#include "KhungxeNhom.h"
#include "KhungxeNhua.h"
#include <vector>
class Xemay
{
private:
	vector <Dongco*> ds_dongco;
	vector <Banhxe*> ds_banhxe;
	vector <Khungxe*> ds_khungxe;
	string Bienso;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual	int Tong_don_gia();
};
