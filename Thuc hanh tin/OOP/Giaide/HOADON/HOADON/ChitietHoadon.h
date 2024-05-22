#pragma once
#include "Maylanh1chieu.h"
#include "Maylanh2chieu.h"
#include "MayquatDung.h"
#include "MayquatHoinuoc.h"
#include "MayquatSacdien.h"
#include <vector>
using namespace std;
class ChitietHoadon
{
protected:
	vector<SanPham*> ds_sanpham;
public:
	virtual void Nhap();
	virtual void Xuat();
	virtual int Tong_hoa_don();
};

