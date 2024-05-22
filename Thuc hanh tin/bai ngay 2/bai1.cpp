
#include <iostream>
#include <algorithm>
using namespace std;
int a[10000];
void docf()
{
cout	<<"Nhap so a: ";
	cin>>a[0];
		cout<<"Nhap so b: ";
	cin>>a[1];
		cout<<"Nhap so c: ";
	cin>>a[2];
}
void sapxep()
{
	sort(a,a+3);
	for(int i=0;i<3;i++)
	cout<<a[i]<<" ";
	}
int main()
{
	docf();
	sapxep();
	return 0;
}
