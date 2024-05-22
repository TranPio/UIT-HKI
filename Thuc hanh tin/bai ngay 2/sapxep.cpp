#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int a,b,c;
int main()
{   
 cout<<"Nhap so a: "<<endl;
   cin>>a;
    cout<<"Nhap so b: "<<endl;
   cin>>b;
    cout<<"Nhap so c: "<<endl;
   cin>>c;
   int max=a;
   if(max<b || max<c)
			{ max=b;
			b=c;
			c=a;
		}
		cout<<a<<b<<c;
	return 0;
}
