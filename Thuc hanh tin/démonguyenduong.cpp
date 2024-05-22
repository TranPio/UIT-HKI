#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"Nhap n: "; cin>>n;
	int m=0;
	do{
		n=n/10;
		m++;
	}while(n>0);
	cout<<"So luong chu so cua n la: "<<m;
}
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Nhap n: "; cin>>n;
    int m=0;
    while(n>0){
        n=n/10;
        m++;
    }
    cout<<"So luong chu so cua n la: "<<m;
}