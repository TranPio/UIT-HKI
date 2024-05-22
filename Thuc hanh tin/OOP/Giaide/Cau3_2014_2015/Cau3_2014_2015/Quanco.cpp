#include "Quanco.h"

Quanco::Quanco(string loai1, int x1, int y1)
{
	loai = loai1;
	x = x1;
	y = y1;
	loaituong = 0;
}

void Tuong_Vua::Dichuyen()
{
	cout << "\nDi tung o mot,di ngang hoac doc.Tuong luon luon phai o trong pham vi cung va khong duoc ra ngoai.Cung tuc la hinh vuong 2X2 duoc danh dau bang duong cheo hinh chu X";
}

void Si::Dichuyen()
{
	cout << "\nDi xeo 1 o moi nuoc.Si luon luon phai o trong cung nhu Tuong";
}



void Tuong::Dichuyen()
{
	cout << "\nDi cheo 2 o(ngang 2 o va doc 2 o)cho moi nuoc di.Tuong chi duoc phep o mot ben cua ban co,khong duoc di chuyen sang nua ben ban co cua doi phuong";
}


void Ma::Dichuyen()
{
	cout << "\nDi ngang 2 o va doc 1 o cho moi nuoc di.....";
}



void Xe::Dichuyen()
{
	cout << "\nDi ngang hay doc tren ban co mien la dung bi quan khac can duong tu diem di den diem den";
}


void Phao::Dichuyen()
{
	cout << "\nDi ngang va di hoc giong nhu xe";
}



void Tot::Dichuyen()
{
	cout << "\nDi mot o moi nuoc.Neu tot chua vuot qua song,no chi co the di thang tien";
}
