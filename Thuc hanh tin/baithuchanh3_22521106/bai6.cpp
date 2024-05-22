#include<bits/stdc++.h>
using namespace std;
long long n,a,d,b,c;
int main()
{
    cout<<"Nhap n: ";
    cin>>n;
    a=n;
    while(a>0)
    {
        d=a%10;
        a=a/10;
        if(d%2==0)
            b++;
        else
            c++;
    }
    cout<<"So luong so chan la: "<<b<<endl;
    cout<<"So luong so le la: "<<c;
    return 0;
}
