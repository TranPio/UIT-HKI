#include <iostream>
#include <math.h>
int n,s=0;
using namespace std;
	in
#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Moi ban nhap so n= ";cin>>n;
	if(n<2)
	{
		cout<<n<<" khong phai so nguyen to";
		return 0;
	}
	int nguyento=0;
	for(int i=2;i<=sqrt(n);i++)
	if(n%i==0)
	nguyento ++;
	if(nguyento==0)
	cout<<n<<" la so nguyen to";
	else
	cout<<n<<" khong phai la so nguyen to";
	return 0;
}
