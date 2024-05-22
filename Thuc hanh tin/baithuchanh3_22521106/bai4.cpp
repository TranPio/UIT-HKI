#include<bits/stdc++.h>
using namespace std;
long long n,a,d,t;
int main()
{
    cout<<"Nhap n: ";
    cin>>n;
    a=n;
    while(a>0)
    {
        d=a%10;
        a=a/10;
     cout<<d;
    }
    return 0;
}
