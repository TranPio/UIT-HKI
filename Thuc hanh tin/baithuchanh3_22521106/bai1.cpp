#include <iostream>
using namespace std;
int main(){
	long long n,s=1;
	cout<<"Nhap n: ";
	cin>>n;
	for(int i=1;i<=n;i++)
	s=s*i;
	cout<<"Giai thua cua "<<n<<"! la:"<<s;
	return 0;
}
