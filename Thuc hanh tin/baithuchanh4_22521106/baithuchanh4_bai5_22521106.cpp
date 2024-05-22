#include<iostream>
#include<math.h>
using namespace std;
long long n;
int doi( int n ){
	long long s=0,i=0,a;
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
    cout<<"So thap phan cua so "<<n<<" la: "<<doi(n);
    return 0;
} 