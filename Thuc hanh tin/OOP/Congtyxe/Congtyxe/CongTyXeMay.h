#pragma once
#include"Xemay.h"
class CongTy {
private:
	Xemay* dsXe;
	int slXe;
public:
	virtual ~CongTy();
	void nhap();
	void xuat()const;
	void xuatfile()const;
};