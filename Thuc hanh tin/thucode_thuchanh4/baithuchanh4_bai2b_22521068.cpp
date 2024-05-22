#include<iostream>
using namespace std;
long long n,a,s=0;
int tong(int n){
    int i ;
    int s = 0;
    for (i = 1; i<=n; i++)
    s = s + (i*10+2);
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
    cout<<tong(n);
    return 0;
}