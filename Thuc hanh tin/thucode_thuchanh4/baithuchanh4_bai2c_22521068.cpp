#include<bits/stdc++.h>
using namespace std;
long long n,a,s=0;
float tinh( int n ){
    int i;
    float s= 0;
    for ( i = 1; i<=n;i++){
        s = s +  1.0/i;
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
    cout<<tinh(n);
    return 0;
}
