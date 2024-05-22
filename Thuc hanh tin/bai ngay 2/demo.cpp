#include <iostream>
using namespace std;
long long a,b,c,t;
int main(){
cout<<"Nhap so a: ";
	cin>>a;
		cout<<"Nhap so b: ";
	cin>>b;
		cout<<"Nhap so c: ";
	cin>>c;
	if(a>b)
	{
		t=a;
		a=b;
		b=t;
	}
	if(a>c)
	{
		t=a;
		a=c;
		c=t;
	}
	if(b>c)
	{
		t=b;
		b=c;
		c=t;
	}
	cout<<"So Thu Tu Tang Dan:  "<<a<<" "<<b<<" "<<c<<"\n";
	return 0;  }