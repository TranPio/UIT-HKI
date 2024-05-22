#include<iostream>
using namespace std;
long long n,x,a=1,s=0;
int tich( int n, int x ){
	for(int i=1;i<=n;i++){
     a = a*x;
 }
    return a;
}
int main(){
		 do
  {
    cout<<"Nhap so x: ";
    cin>>x;
    if(x < 1)
    {
      cout<<"Xin vui long nhap lai! ";
    }
  }while(x<1);
  	 do
  {
    cout<<"Nhap so mu n: ";
    cin>>n;
    if(n < 1)
    {
      cout<<"Xin vui long nhap lai! ";
    }
  }while(n<1);
    cout<<x<<"^"<<n<<"="<<tich(n,x);
    return 0;
}