#include <bits/stdc++.h>
using namespace std;
typedef struct PT{
string ten;
int gia;
int con_lai;
struct PT* pNext;
}node;
typedef struct LIST{
node *pHead;
node *pTail;
}Danhsach;
void khoitaods(Danhsach &ds){
ds.pHead=NULL;
ds.pTail=NULL;
}
node *khoitaonode(string T,int g,int con){
node *p=new node;
p->ten=T;
p->gia=g;
p->con_lai=con;
p->pNext=NULL;
return p;
}
void Themvaocuoids(Danhsach &ds,node *p){
if(ds.pHead==NULL){
    ds.pHead=ds.pTail=p;
}
else{
    ds.pTail->pNext=p;
    ds.pTail=p;
}
}
void Nhap(Danhsach&ds){
string Ten;
int gia,soluong,conlai;
node *p;
for(int i=0;i<3;i++){
        cin.ignore();
    cout<<"Nhap ten mat hang: ";
    getline(cin,Ten);
    cout<<"Nhap vao gia mat hang: ";
    cin>>gia;
    cout<<"Nhap vao so luong hang con lai trong kho: ";
    cin>>soluong;
    p=khoitaonode(Ten,gia,soluong);
    Themvaocuoids(ds,p);
}
}

void Xuat(Danhsach &ds){

int dem=1;
for(node *k=ds.pHead;k!=NULL;k=k->pNext){
        cout<<"Mat hang thu "<<dem<<" la: ";
    cout<<"Ten mat hang: "<<k->ten<<endl;
    cout<<"Gia mat hang: "<<k->gia<<endl;
    cout<<"So luong con lai la: "<<k->con_lai<<endl;
    dem++;
}
}
void Kiemtra(Danhsach &ds){
int x,y;
do{
    cout<<"Nhap so nguyen x: ";
    cin>>x;
    if(x<=0){
        cout<<"Nhap khong hop le,vui long nhap lai x: ";
    }
}
while(x<=0);
do{
    cout<<"Nhap so nguyen y: ";
    cin>>y;
    if(y<=0){
        cout<<"Nhap khong hop le,vui long nhap lai y: ";
    }
}
while(y<=0);
for(node *k=ds.pHead;k!=NULL;k=k->pNext){
    if(k->con_lai>x && k->con_lai<y){
         cout<<"Ten mat hang: "<<k->ten<<endl;
    cout<<"Gia mat hang: "<<k->gia<<endl;
    cout<<"So luong con lai la: "<<k->con_lai<<endl;
    }
}
}
int main(){
    Danhsach ds;
khoitaods(ds);
Nhap(ds);
//Xuat(ds);
Kiemtra(ds);
return 0;
}
