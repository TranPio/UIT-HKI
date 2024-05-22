#include <iostream>
#include <fstream>
using namespace std;
class Dathuc {
private:
	int n;
	int* a;
public:
	friend istream& operator >> (istream& is, Dathuc& dt);
	friend ostream& operator << (ostream& os, Dathuc dt);
     bool kiemtrabac(int b1,int b2);
	 Dathuc operator+ (const Dathuc& y);
};

istream& operator>>(istream& is, Dathuc& dt)
{
	int m;
	cout << "\n Nhap vao so bac cua da thuc: ";
	is >> m;
	dt.n = m;
	dt.a = new int[dt.n + 1];
	for (int i = dt.n; i >= 0; i--) {
		cout << "\n Nhap he so bac thu " << i << " la: ";
		is >> dt.a[i];
	}
	return is;
}

ostream& operator<<(ostream& os, Dathuc dt)
{
	os << "\n Da thuc la: ";
	for (int i = dt.n; i >= 0; i--) {
		if (i == 0) {
			os << dt.a[i];
		}
		else {
			os << dt.a[i] << "x^" << i << "+";
		}
	}
	cout << endl;
	return os;
}
bool Dathuc::kiemtrabac(int b1,int b2)
{
	if (b1 > b2) {
		return true;
	}
	else {
		return false;
	}
}
Dathuc Dathuc::operator+(const Dathuc& y) { 
	Dathuc z;
	if (kiemtrabac(this->n, y.n) == true) {
		z.n = this->n;
	}
	else {
		z.n = y.n;
	}
	z.a = new int[z.n + 1]; 
	for (int i = z.n; i >=0;i--) {
		if (i==z.n && kiemtrabac(this->n, y.n) == true) {
			z.a[i] = this->a[i];
		}
		else if (i==z.n && kiemtrabac(this->n, y.n) == false) {
			z.a[i] = y.a[i];
		}
		else {
			z.a[i] = this->a[i] + y.a[i];
		}
} 
return z;
 }
int main() {
	Dathuc x,y;
	cin >> x;
	cin >> y;
	cout << "\n Hai da thuc sau khi cong la: " << x + y;
	return 0;
}