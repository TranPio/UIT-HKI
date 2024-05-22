#include <bits/stdc++.h>
using namespace std;
void Swap(int a[10000],int x,int y){
int temp=a[x];
a[x]=a[y];
a[y]=temp;
}
int partition(int a[10000],int left,int right){
int pivot = a[left];
int count = 0;
for(int i=left+1;i<=right;i++){
    if(a[i]<=pivot){
        count++;
    }
}
//Lay vi tri cho gia tri pivot
int pivotindex = left + count;

// Hoan vi
Swap(a,left,pivotindex);
int i=left;
int j=right;
while (i<pivotindex && j>pivotindex){
    while(a[i]<=pivot){
        i++;
    }
    while(a[j]>pivot){
        j--;
    }
    if(i<pivotindex && j>pivotindex){
        Swap(a,i,j);
    }
}
return pivotindex;
}
void Quicksort(int a[100000],int left,int right){
if(left>=right){
    return ;
}
int pivot= partition(a,left,right);
// Sap xep day ben trai
 Quicksort(a,left,pivot-1);

// Sap xep day ben phai
 Quicksort(a,pivot+1,right);
}
int main(){
int n;
int a[100000];
cout<<"Nhap n: ";
cin>>n;
cout<<"Nhap vao day so: ";
for(int i=0;i<n;i++){
    cin>>a[i];
}
Quicksort(a,0,n-1);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
}
return 0;
}
