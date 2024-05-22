#include<iostream>
using namespace std;
long long n,a,s=0;
int gt(int n ){
    int gtc = 1;
    int gtl = 1;
    int i;
    int a;
    a= n%2;
    if (a==0){
        for ( i = 2; i<=n;i=i+2 )
        gtc = gtc*i;
        return gtc;
    } 
        for (i = 1; i<=n; i = i +2)
        gtl = gtl*i;
        return gtl;
    
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
    cout<<gt(n);
    return 0;
}