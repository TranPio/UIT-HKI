#include<iostream>
#include<math.h>
using namespace std;
long long n,a,s=0;
int bd( int n ){
    int i = 0;
    int a;
    int s = 0;
    while( a !=0){
        a = n%10;
        n = n/10;
        s = s + a*pow(2,i);
        i++;
    }
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
    cout<<bd(n);
    return 0;
}