#include<iostream>
using namespace std;
long long n,a,b,i,s=0;
bool uoc(int n ){
    for ( i = 1; i <= n; i++ )
    a = n%i;
    if (a != 0)
    return 0;
    return 1;
    
}
int tong(int n)
{
    for ( b=1; b<=n; b++)
        if (uoc(b)==1)
            s=s+b;
    return s;
}
int main(){
   	 do
  {
    cout<<"Nhap so n: ";
    cin>>n;
    if(n < 1)
    {
      cout<<"Xin vui long nhap lai! ";
    }
  }while(n<1);
    cout<<"Tong cac uoc cua so "<<n<<" la: "<<tong(n);
    return 0;
}