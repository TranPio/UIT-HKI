#include <bits/stdc++.h>
using namespace std;
typedef struct Thongtin{
int maso;
char hoten[100];
int thamnien;
float hesoluong;
}Nhansu;
void Nhap(Nhansu DS[],int N){
for(int i=0;i<N;i++){
    cout<<"Nhap maso: "<<endl;
    cin>>DS[i].maso;
    cout<<"Nhap ho ten: "<<endl;
    cin>>DS[i].hoten;
    cout<<"Nhap them nien: "<<endl;
    cin>>DS[i].thamnien;
    cout<<"Nhap he so luong: "<<endl;
    cin>>DS[i].hesoluong;
}
}
void Sapxep_Thamnien(Nhansu DS[],int N)
{
    int MAX;
    for(int  i=0;i<N-1;i++){
        MAX=i;
        for(int j=i+1;j<N;j++){
            if(DS[j].thamnien>DS[MAX].thamnien){
                MAX=j;
            }
            swap(DS[i],DS[MAX]);
        }
    }
}
int Tim_Nhansu(Nhansu DS[],int N,int X){
for(int i=0;i<N;i++){
    if(DS[i].maso==X){
        return 1;
    }
   else{ return 0;
   }
}
}
void Xuat(Nhansu DS[],int n){
for(int i=0;i<n;i++){
    cout<<"Ma so: "<<DS[i].maso<<endl;
    cout<<"Ho ten: "<<DS[i].hoten<<endl;
    cout<<"Tham nien: "<<DS[i].thamnien<<endl;
    cout<<"He so luong: "<<DS[i].hesoluong<<endl;
}
}
int main(){
int n,x;
Nhansu DS[1000];
cout<<"Nhap vao so luong: ";
cin>>n;
cout<<"Nhap X: ";
cin>>x;
Nhap(DS,n);
Sapxep_Thamnien(DS,n);
cout<<"Tim Nhan su: "<<Tim_Nhansu(DS,n,x);
Xuat(DS,n);

return 0;
}
