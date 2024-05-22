#include <iostream>
#include <fstream>
using namespace std;
class CDate {
private:
	int ngay, thang, nam;
public:
	friend istream& operator >>(istream& is, CDate& cd);
	friend ostream& operator<<(ostream& os, CDate& cd);
};

istream& operator>>(istream& is, CDate& cd)
{
	cout << "\nNhap vao ngay: ";
	is >> cd.ngay;
	cout << "\nNhap vao thang: ";
	is >> cd.thang;
	cout << "\nNhap vao nam: ";
	is >> cd.nam;
	return is;
}


ostream& operator<<(ostream& os, CDate& cd)
{
	os  << cd.ngay << "/" << cd.thang << "/" << cd.nam;
	return os;
}
int main() {
	CDate a;
	cin >> a;
	cout << a;
	return 0;
}
