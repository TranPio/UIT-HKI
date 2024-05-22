#include<iostream>
using namespace std;
struct PhanSo{
    int TuSo;
    int MauSo;
};
void Nhapphanso(PhanSo *a){
    cout<<"Nhap vao tu so: ";
    cin>>a->TuSo;
    do{
        cout<<"Nhap vao mau so: ";
        cin>> a->MauSo;
        if (a->MauSo == 0)
            cout<<"Xin nhap lai!\n";
    }while (a->MauSo==0);
}
void Xuatphanso( PhanSo a){
    if (a.MauSo < 0){
        a.TuSo*=-1;
        a.MauSo*=-1;}
    cout<<a.TuSo<<"/"<<a.MauSo<<"\n";
}
int Tich2PhanSo(PhanSo a, PhanSo b){
    PhanSo Ps3;
    Ps3.TuSo = a.TuSo * b.TuSo;
    Ps3.MauSo = a.MauSo * b.MauSo; 
    cout<<"Tich 2 phan so bang: \n"<<Ps3.TuSo<<"/"<<Ps3.MauSo<<"\n";
}
int Thuong2PhanSo(PhanSo a, PhanSo b){
    PhanSo Ps3;
    Ps3.TuSo = a.TuSo * b.MauSo;
    Ps3.MauSo = a.MauSo * b.TuSo;
    cout<<"Thuong 2 phan so bang: \n"<<Ps3.TuSo<<"/"<<Ps3.MauSo<<"\n";
}
int Tong2PhanSo(PhanSo a, PhanSo b){
    PhanSo Ps3;
    Ps3.TuSo = a.TuSo*b.MauSo + a.MauSo*b.TuSo;
    Ps3.MauSo = a.MauSo*b.MauSo;
    cout<<"Tong 2 phan so bang: "<<Ps3.TuSo<<"/"<<Ps3.MauSo<<"\n";
}
int Hieu2PhanSo(PhanSo a, PhanSo b){
    PhanSo Ps3;
    Ps3.TuSo = a.TuSo*b.MauSo - a.MauSo*b.TuSo;
    Ps3.MauSo = a.MauSo*b.MauSo;   
    cout<<"Tong 2 phan so bang: "<<Ps3.TuSo<<"/"<<Ps3.MauSo<<"\n";
}
int main(){
    PhanSo Ps1,Ps2;
    PhanSo *ptr1 = &Ps1;
    PhanSo *ptr2 = &Ps2;
    cout<<"Nhap phan so thu nhat. \n";
    Nhapphanso(ptr1);
    cout<<"Nhap phan so thu hai. \n";
    Nhapphanso(ptr2);
    cout<<"Phan so thu nhat: \n";
    Xuatphanso(Ps1);
    cout<<"Phan so thu hai: \n";
    Xuatphanso(Ps2);
    Tich2PhanSo(*ptr1,*ptr2);
    Thuong2PhanSo(*ptr1,*ptr2);
    Tong2PhanSo(*ptr1,*ptr2);
    Hieu2PhanSo(*ptr1, *ptr2);
}