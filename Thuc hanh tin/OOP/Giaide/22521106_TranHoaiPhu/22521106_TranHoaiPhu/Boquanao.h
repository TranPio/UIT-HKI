#pragma once
#include "Ao.h"
#include"Sanpham.h"
#include "Phukien.h"
#include "Quan.h"
class Boquanao
{
private:
	string Mabo, Loaibo,ao ,quan ;
	int goibo, ao1, quan1,pk,gtbo,sizebo,sopk,Gioitinh,Size;
	string gt, size;
	vector<Sanpham*>ds_bo;
	vector<Phukien*>ds_pk;
public:
	
	virtual void Nhap();
	virtual void Xuat(ostream& os) const;
};

