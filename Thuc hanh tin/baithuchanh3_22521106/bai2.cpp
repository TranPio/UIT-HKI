#include<iostream>
using namespace std;
long long x,n,s=1,i;
int main()
{
    cout<<"Nhap x: ";
    cin>>x;
    cout<<"Nhap n: ";
    cin>>n;
    for(i=1;i<=n;i++)
        s=s*x;
    cout<<"Ket qua la: "<<s;
    return 0;
}
