#include<iostream>
#include<math.h>
using namespace std;
long long n,i,a,s=0;
bool nt(int n){
    if(n<2){
    return 0;
}
    for(i=2;i<=sqrt(n);i++){
     if(n%i==0){
     	return 0;
	 }
    }
    return 1;
}
int tong(int n)
{
    for ( a=2; a<n; a++)
        if (nt(a)==1)
            s=s+a;
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
    cout<<"Tong cac so nguyen to nho hon so "<<n<<" la: "<<tong(n);
    return 0;
}