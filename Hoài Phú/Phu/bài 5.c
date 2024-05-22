#include <iostream>
using namespace std;
int main()
{
	int n;
	int t,c,d,s;
	t=n/100;
	c=(n-t*100)/10;
	d=(n-t*100)-c*10;
s =t+c+d;
cout<<s;
	return 0;
}
