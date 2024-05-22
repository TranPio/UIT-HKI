#include <iostream>
#include <fstream>
using namespace std;
class Thoigian {
private:
	int gio, phut, giay;
public:
	friend istream& operator >> (istream& is, Thoigian& tg);
	friend ostream& operator << (ostream& os, Thoigian tg);
	friend Thoigian operator -- ( Thoigian& tg );
};
istream& operator >> (istream& is, Thoigian& tg) {
	cout << "\n Nhap vao gio: ";
	is >> tg.gio;
	cout << "\n Nhap vao phut: ";
	is >> tg.phut;
	cout << "\n Nhap vao giay: ";
	is >> tg.giay;
	return is;
}
ostream& operator << (ostream& os, Thoigian tg) {
	os << tg.gio << ":" << tg.phut << ":" << tg.giay;
	return os;
}

Thoigian operator --( Thoigian& tg)
{
	Thoigian t;
	t.gio = tg.gio;
	t.phut = tg.phut;
	t.giay = tg.giay - 1;
	return t;
}
int main() {
	Thoigian a;
	cin >> a;
	//cout << a;
	cout<<--a;
	cout << endl;
	//cout << a;
	return 0;
}
