#include <iostream>
using namespace std;
long long n,P=1,S=0;
void tongS(){
	for(int i=1;i<=n;i++){
	P=P*i;
	S=S+P;
}
	cout<<S;
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
tongS();	
	return 0;
}