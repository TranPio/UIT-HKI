#include <bits/stdc++.h>
using namespace std;
void Merge(int a[],int left,int mid,int right){
int len_left=mid-left+1;
int len_right=right-mid;
int b[len_left],c[len_right];
for(int i=0;i<len_left;i++){
    b[i]=a[left+i];
}
for(int i=0;i<len_right;i++){
    c[i]=a[mid+1+i];
}
int i=0,j=0,k=left;
while(i<len_left && j<len_right){
    if(b[i]<= c[j]){
a[k]=b[i];
i++;
    }
    else{
        a[k]=c[j];
        j++;
    }
    k++;
}
while(i<len_left){
    a[k]=b[i];
    i++;
    k++;
}
while(j<len_right){
    a[k]=c[j];
    j++;
    k++;
}
}
void MergeSort(int a[],int left,int right){
if(left<right){
    int mid=(left+right)/2;
    MergeSort(a,left,mid);
    MergeSort(a,mid+1,right);
    Merge(a,left,mid,right);

}
}
int main(){
int a[10000];
int n;
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
MergeSort(a,0,n-1);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
return 0;

}
