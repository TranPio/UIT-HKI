#include<iostream>
#include<math.h>
using namespace std;
long long n,i;
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
    if (nt(n)==1){
        cout<<"So "<<n<<" la so nguyen to";
    }else{
        cout<<"So "<<n<<" khong phai la so nguyen to";
    }
    return 0 ;
}