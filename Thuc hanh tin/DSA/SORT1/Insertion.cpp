#include<bits/stdc++.h>
using namespace std;
void InsertionSort(int a[],int n){
    int j;
for(int i=0;i<n;i++){
    j=i;
    while(j>0&&a[j]<a[j-1]){
         swap(a[j],a[j-1]);
        j--;
    }
}
}
int main(){
int n,a[10000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    InsertionSort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
return 0;
}
