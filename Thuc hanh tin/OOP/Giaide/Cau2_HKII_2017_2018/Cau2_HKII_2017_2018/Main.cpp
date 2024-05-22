#include <iostream>
#include <fstream>
using namespace std;
class Dathuc {
private:
	int n;
	float* a;
public:
	friend istream& operator >>(istream& is, Dathuc& dt);
	friend ostream& operator <<(ostream& os, Dathuc dt);
	bool kiemtra(int b1, int b2);
	Dathuc operator +(const Dathuc& dt);
	Dathuc operator -(const Dathuc& dt);
	Dathuc operator *(const Dathuc& dt);
	Dathuc operator /(const Dathuc& dt);
};
istream& operator >>(istream& is, Dathuc& dt) {
	cout << "\n Nhap vao bac cua da thuc: ";
	is >> dt.n;
	dt.a = new float[dt.n + 1];
	for (int i = dt.n; i >=0 ; i--) {
		cout << "\Nhap vao he so bac thu " << i << " la: ";
		is >> dt.a[i];
	}
	return is;
}
ostream& operator <<(ostream& os, Dathuc dt) {
	for (int i = dt.n; i >=0; i--) {
		if (i == 0) {
			os << dt.a[i];
		}
		else {
			os << dt.a[i] << "x^" << i << " + ";
		}
	}
	return os;
}
bool Dathuc::kiemtra(int b1, int b2)
{
	if (b1 > b2) {
		return true;
	}
	return false;
}
Dathuc Dathuc::operator+(const Dathuc& dt) {
	Dathuc tam;
	if (kiemtra(n, dt.n) == true) {
		tam.n = n;
	}
	else {
		tam.n = dt.n;
	}
	tam.a = new float[tam.n + 1];
	for (int i =tam.n; i >=0; i--) {
		if (i == tam.n && kiemtra(n, dt.n) == true) {
			tam.a[i] = a[i];
		}
		else if (i == tam.n && kiemtra(n, dt.n) == false) {
			tam.a[i] = dt.a[i];
		}
		else {
			tam.a[i] = a[i] + dt.a[i];
		}
	}
	return tam;
}
Dathuc Dathuc::operator-(const Dathuc& dt) {
	Dathuc tam;
	if (kiemtra(n, dt.n) == true) {
		tam.n = n;
	}
	else {
		tam.n = dt.n;
	}
	tam.a = new float[tam.n + 1];
	for (int i = tam.n; i >= 0; i--) {
		if (i == tam.n && kiemtra(n, dt.n) == true) {
			tam.a[i] = a[i];
		}
		else if (i == tam.n && kiemtra(n, dt.n) == false) {
			tam.a[i] = dt.a[i];
		}
		else {
			tam.a[i] = a[i] - dt.a[i];
		}
	}
	return tam;
}

Dathuc Dathuc::operator*(const Dathuc& dt)
{
	Dathuc tam;
	tam.n = n + dt.n;
	tam.a = new float[tam.n + 1];
	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= dt.n; j++) {
			tam.a[i + j] = a[i] * dt.a[j];
		}
	}
	return tam;
}
Dathuc Dathuc::operator/(const Dathuc& dt) {
	Dathuc tam;
	if (kiemtra(n, dt.n) == true) {
		tam.n = n - dt.n;
		tam.a = new float[tam.n + 1];
		for (int i = n; i >= dt.n; i--) {
			tam.a[i - dt.n] = a[i] / dt.a[dt.n];
			for (int j = dt.n; j >= 0; j--) {
				a[i - (dt.n - j)] -= tam.a[i - dt.n] * dt.a[j];
			}
		}
	}
	else {
		tam.n = dt.n-n;
		tam.a = new float[tam.n + 1];
		for (int i = dt.n; i >= n; i--) {
			tam.a[i - n] = dt.a[i] / a[n];
			for (int j = n; j >= 0; j--) {
				dt.a[i - (n - j)] -= tam.a[i - n] * a[j];
			}
		}
	}
	return tam;
}
int main() {
	Dathuc a, b;
	cin >> a >> b;
	cout<<a + b<<endl;
	cout<< a - b<<endl;
	cout << a * b << endl;
	cout << a / b << endl;
	return 0;
}