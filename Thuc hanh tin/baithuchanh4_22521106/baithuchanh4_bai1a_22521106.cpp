#include <iostream>
using namespace std;
long long n;
int daonguoc(int n){
 int s = 0;
  while (n > 0){
   int a = n %10;
    s = s*10 + a; 
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
    cout<<"So dao nguoc cua so "<<n<<" la: "<<daonguoc(n);
    return 0 ;
}