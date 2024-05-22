#include <bits/stdc++.h>
using namespace std;
void SelectionSort(int a[],int n){
int MIN;
for(int i=0;i<n-1;i++){
    MIN=i;
    for(int j=i+1;j<n;j++){
        if(a[j]<=a[MIN]){
            MIN=j;
        }
        swap(a[i],a[MIN]);
    }
}
}
int main(){
int n,a[10000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    SelectionSort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
return 0;
}
