#include<bits/stdc++.h>
using namespace std;
void Interchange(int a[],int n){
for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
        if(a[j]<=a[i]){
            swap(a[j],a[i]);
        }
    }
}
}
int main(){
    int n,a[10000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Interchange(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
return 0;
}
