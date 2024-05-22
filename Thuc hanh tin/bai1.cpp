/*#include<iostream>
using namespace std;
int main(){
		int n;
	long long s=0,gt=1;
	cin>>n;
	if(n<=0){
		cout<<"Nhap sai so: ";
		return n;
	}
	else {
	for(int i=1;i<=n;i++)
	{
		gt=gt*i;
/*	}
//for(int s=0;s<=n;s++)
while(s!=0)
{
s=s+gt;
	} 
	cout<<s;
}
	return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhap so: ";
    cin >> n;
    if(n<=0){
    cout<<"Nh?p sai so";
    return n;
}
else{
    for (; n != 0; n = n / 10) {
        cout << n % 10;}
    }
    return 0;
}
*/
#include<iostream>
using namespace std;
int main(){
	for(int i=10;i<=99;i++){
		int a=i/10;
		int b=i%10;
		if((a*b)==(2*(a+b)))
		cout<<i<<" "; }
		return 0;
	}
