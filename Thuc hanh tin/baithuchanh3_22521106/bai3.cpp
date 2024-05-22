#include<iostream>
using namespace std;
long long n,s=1;
int main(){
	cout<<"Nhap n: ";
	cin>>n;
	if(n%2==0){
			for(int i=2;i<=n;i=i+2){
			s=s*i;
		}
	}
	else
	for(int i=1;i<=n;i=i+2)
	{
		 s=s*i;
	}
	cout<<"Ket qua cua "<<n<<"!! la: "<<s;
	return 0;
}
