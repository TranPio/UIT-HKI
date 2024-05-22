#include<iostream>
using namespace std;
void nhapmang( int *a, int n)
{
    cout<<"Nhap mang: \n";
    for (int i = 0; i<n; i++){
        cout<<"a["<<i<<"]: ";
        cin>> *(a+i);
    }
}
void xuatmang(int *a, int n)
{
    cout<<"Xuat mang: ";
    for (int i =0 ;i<n; i++){
        cout<< *(a+i)<<" ";
    }cout<<"\n";
}
int doivitri(int &a, int &b)
{
    int c=a;
    a=b;
    b=c;
}
void Sapxepmanggiamdan(int *a, int n)
{
    int nhonhat;
    int i,j;
    for (i=0; i<n; i++){
        nhonhat=i;
        for ( j=i+1; j<n; j++){
           if (a[j]<a[nhonhat]){
             nhonhat=j;}}
    doivitri(a[i],a[nhonhat]);}
}
int Sum(int *a, int n){
    int sum = 0;
    for (int i = 0; i<n; i++){
            sum+=*(a+i);
        }
    cout<<"Tong cac phan tu le la: "<<sum<<"\n";
}
int TimPhanTu(int *a, int n){
    int b,dem=0;
    cout<<"Nhap so can tim: ";
    cin>>b;
    for (int  i = 0; i<n; i++){
        if (b == *(a+i))
            dem++;
    }
    cout<<"Phan tu "<<b<<" xuat hien "<<dem<<" lan.\n";
}
int XuatPhanTu(int *a, int n){
    cout<<"Phan tu chan nho hon 20 trong mang la: ";
    int dem =0;
    for (int i = 0; i<n; i++){
        if (*(a+i) % 2 == 0 && *(a+i)<21 ){
            cout<<*(a+i)<<" ";
            dem++;
        }
    }if (dem == 0){
            cout<<"Mang khong co phan tu chan nho hon 20.";}
}
int ViTriNhoNhat(int *a, int n){
    int min = *a;
    int vitri;
    cout<<"Vi tri nho nhat trong mang la: ";
    for (int i = 0; i<n; i++){
        if (min < *(a+i)){
            continue;}
        else 
            min = *(a+i);
            vitri = i;
    }cout<<vitri;
}
void XuatMang2(int *a, int n){
    for (int i = n-1; i>=0; i--){
        cout<<*(a+i)<<" ";
    }
}
int main(){
    int n;
    cout<<"Nhap vao so phan tu: ";
    cin>>n;
    int arr[n];
    int *ptr = arr;
    nhapmang(ptr, n);
    xuatmang(ptr, n);
    ViTriNhoNhat(ptr, n);cout<<"\n";
    cout<<"Mang dao nguoc: ";
    XuatMang2(ptr,n); cout<<"\n";
    Sum(ptr,n);
    cout<<"Mang giam dan: ";
    Sapxepmanggiamdan(ptr, n);
    for (int  i = n-1; i>=0; i--){
        cout<<*(ptr+i)<<" ";
    }
    cout<<"\n";
    TimPhanTu(ptr,n);
    XuatPhanTu(ptr,n);cout<<"\n";
}
