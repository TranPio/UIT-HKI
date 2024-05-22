#include<iostream>
using namespace std;
long long n,a,s=0;
int tich( int n, int x ){
    int a = n*x;
    return a;
}
int main(){
    int n;
    int x;
    cout<<" nhap n ";
    cin>>n;
    cout<<" nhap x ";
    cin>>x;
    cout<<tich(n,x);
    return 0;
}