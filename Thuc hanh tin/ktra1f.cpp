#include<iostream>
using namespace std;
bool uoc(int n ){
    int i;
    int a;
    int s = 0;
    for ( i = 1; i <= n; i++ )
    a = n%i;
    if (a != 0)
    return 0;
    return 1;
    
}
int tong(int n ){
    int i;
    int s = 0;
    for ( i = 1; i <=n; i++)
    if(uoc(i)==1)
    s=s+i;
    return s;
}
int main(){
    int n;
    cout<<" nhap n ";
    cin>>n;
    cout<<tong(n);
    return 0;
}