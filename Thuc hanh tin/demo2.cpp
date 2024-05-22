#include<iostream>
using namespace std;
long int s=1,i,n;
int main()
{ cout<<"Nhap n: ";
  cin>>n;
  for (i=1;i<=n;i++)
    s=s*i;
  cout<<"Giai thua la "<<s;
  return 0;
  }
