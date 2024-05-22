#include<iostream>
#include<math.h>
using namespace std;
long long n,a,s=0;
int tong(int n ){
    while (n >0){
        a = n%10;
        if( a%2 != 0 ){
        s = s + a;
    }
    n = n/10;
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
    cout<<"Tong cac chu so le cua so "<<n<<" la: "<<tong(n);
    return 0;
}