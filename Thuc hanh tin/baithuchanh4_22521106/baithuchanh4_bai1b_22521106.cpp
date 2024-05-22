#include<iostream>
#include<math.h>
using namespace std;
long long n;
int kt(int n ){
    char a = sqrt(n);
    int b = a*a;
    return b ;

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
    if ( kt(n)==n ){
        cout<<"So "<<n<<" la so chinh phuong";
    } else{
        cout<<"So "<<n<<" khong phai la so chinh phuong";
    }
    return 0;
}