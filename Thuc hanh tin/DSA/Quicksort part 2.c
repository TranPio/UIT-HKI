#include <iostream>
using namespace std;
void swap(int a[10000],int x,int y){
int temp=a[x];
a[x]=a[y];
a[y]=temp;
}
int paratition(int a[100000],int left,int right){
int pivot=a[left];
int count=0;
for(int i=left+1;i<=right;i++){
    if(a[i]<=pivot){
        count++;
    }
}
int pivotindex=left + count;
int i=left;
int j=right;
while (i<pivotindex && j>pivotindex){
    while (a[i]<=pivot){
        i++;
    }
    while(a[j]>=pivot){
        j--;
    }
    if(i<pivotindex && j>pivotindex){
        swap(a,i,j);
    }
}
return pivotindex;
}
void Quicksort(int a[100000],int left,int right){
int pivot=partition(a,left,right);
Quicksort(a,left,pivot-1);
Quicksort(a,pivot+1,right);
}
int main(){
int n;
int a[10000];
cin>>n;
for(int i=0;i<n;i++){
    cin>>a[i];
}
Quicksort(a,0,n-1);
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
    }
return 0;
}
