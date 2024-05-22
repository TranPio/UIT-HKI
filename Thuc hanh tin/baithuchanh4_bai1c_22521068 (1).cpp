#include<iostream>
#include<math.h>
using namespace std;
int snt(int n){
    int a;
    int i;
    if(n<2)
    return 0;
    for(i=2;i<=sqrt(n);i++){
        a = n%i;

    }
    return a;
}
int main(){
    int n = snt(n);
    cout<<" nhap snt ";
    cin>>n;
    if (  snt(n)!=0){
        cout<<" day la so nguyen to ";
    }else{
        cout<<" day ko la so nguyen to ";
    }
    return 0 ;
}