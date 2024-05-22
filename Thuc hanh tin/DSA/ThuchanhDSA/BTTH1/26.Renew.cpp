#include<iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
int main()
{
   int64_t a,k,b,m,n,x=0;
    cin>>a>>k>>b>>m>>n;
      int64_t i=0,na=0,nb=0;
    while (x<n)
       {
           int64_t th=ceil((long double)(n-x)/(a+b));
           i+=th;
           x+=(th-((i/k)-na))*a+(th-((i/m)-nb))*b;
           na=i/k;nb=i/m;
       }
    cout<<i;
    return 0;
}
