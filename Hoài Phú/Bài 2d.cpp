#include <bits/stdc++.h>
using namespace std;
float a,b,c,t,l,h,s,tb;
int main(){
	cout<<"Nhap diem Toan: ";
	cin>>a;
		cout<<"Nhap diem Ly: ";
		cin>>b;
			cout<<"Nhap diem Hoa: ";
			cin>>c;
	cout<<"Nhap he so mon Toan: ";
	cin>>t;
	cout<<"Nhap he so mon Ly: ";
	cin>>l;
	cout<<"Nhap he so mon Hoa: ";
	cin>>h;
	tb=t+l+h;
	s=((a*t)+(b*l)+(c*h))/tb;
	cout<<"Diem trung binh cua sinh vien la: "<<s;
	return 0;
}