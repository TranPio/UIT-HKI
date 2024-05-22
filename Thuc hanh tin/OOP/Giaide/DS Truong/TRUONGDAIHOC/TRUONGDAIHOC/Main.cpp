#include "Truong.h"
using namespace std;
int main() {
	Truong* x = new Truong;
			x->Nhap();
			x->Xuat(cout);
			system("pause");
			ofstream Outfile;
			Outfile.open("Danhsachcanbo.txt");
			x->Xuat(Outfile);
			Outfile.close();
	delete x;
	return 0;
}