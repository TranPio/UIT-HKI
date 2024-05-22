#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a[100000];
    long long n,t,k, tong =0;
    cin>>n;
    for (int j=0; j<n; j++)
        cin >> a[j];
    for (int i=1; i<n;i+=2)
        if (a[1]<=a[i])
    {
        t=a[1];
        a[1]=a[i];
        a[i]=t;
    }
    for (int j=0;j<n;j+=2)
        if (a[1]>=a[j])
    {
        k=a[1];
        a[1]=a[j];
        a[j]=k;
    }
    for (int l=0; l<n; l++)
        tong+= pow(-1,l)*a[l];
    cout << tong;
    return 0;
}
