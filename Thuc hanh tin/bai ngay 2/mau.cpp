
#include <iostream>

using namespace std;
int a[10000];
void sapxep()
{
	for (int i=1;i<=3;i++)
		for (int j=0;j<3-1;j++)
			if(a[j]>a[j+1])
			{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		for(int i=0;i<3;i++)
	cout<<a[i]<<" ";
}
void docf()
{
	cout<<"Nhap so a: ";
	cin>>a[0];
		cout<<"Nhap so b: ";
	cin>>a[1];
		cout<<"Nhap so c: ";
	cin>>a[2];
}
int main()
{   
	docf();
	sapxep();
	return 0;
}
