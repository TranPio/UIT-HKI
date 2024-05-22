
#include <math.h>
#include <iostream>
using namespace std;
long long n,i,a,s=0;
bool ktsnt(int n)
{
   // int i;
    if (n<2) return 0;
    for (i=2; i<=sqrt(n); i++)
        if (n%i==0)
            return 0;
    return 1;
}
 
int tinh(int n)
{
    int i,s=0;
    for (i=2; i<n; i++)
        if (ktsnt(i)==1)
            s=s+i;
    return s;
}
 
int main()
{
    do
  {
    cout<<"Nhap so n: ";
    cin>>n;
    if(n < 1)
    {
      cout<<"Xin vui long nhap lai! ";
    }
  }while(n<1);
  cout<<"Tong cac so nguyen to nho hon so "<<n<<" la: "<<tinh(n);
    return 0;
}