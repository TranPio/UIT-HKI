#include<iostream>
#include<math.h>
using namespace std;
long long n,a,s=0;
int tong(int n ){
    while (n >0){
        a = n%10;
        if( a%2 != 0 ){
        s = s + a;
    }
    n = n/10;
    }
    return s;

}
int main(){
    int n = tong(n);
    cout<<" nhap n ";
    cin>>n;
    cout<<tong(n);
    return 0;
}