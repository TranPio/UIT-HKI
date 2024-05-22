#include<iostream>
using namespace std;
long long n,a,i,s=0;
int tong(int n)
{
    for (i=1 ; i<=n; i++)
        if (n%i==0)
            s=s+i;
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