#include <bits/stdc++.h>
using namespace std;
typedef struct NODE{
int data;
struct NODE *pNext;
}node;
typedef struct List{
node *pTop;
}LIST;
void khoitaos(LIST &l){
l.pTop=NULL;
}
node *khoitaonodes(int x){
node *p=new node;
p->data=x;
p->pNext=NULL;
return p;
}
bool ISEMPTY(LIST &l){
if(l.pTop==NULL){
    return true;
}
return false;
}
bool PUSH(LIST &l,node *p){
if(ISEMPTY(l)==true){
    l.pTop=p;
}
else{
    p->pNext=l.pTop;
    l.pTop=p;
}
return true;
}
bool POP(LIST &l,int &x){
if(ISEMPTY(l)==true){
    return false;
}
else{
    node *p=l.pTop;
    x=p->data;
    l.pTop=l.pTop->pNext;
    delete p;
}
return true;
}
bool TOP(LIST &l,int &x){
if(ISEMPTY(l)==true){
    return false;
}
else{
    x=l.pTop->data;
return true;
}
}
void chuyendoi(LIST &l,int nhiphan,int thapphan){
    node *p;
    while(thapphan!=0){
int x=thapphan%nhiphan;
p=khoitaonodes(x);
PUSH(l,p);
thapphan=thapphan/nhiphan;
}
}
void Xuat(LIST &l){
while(ISEMPTY(l)==false){
int x;
POP(l,x);
cout<<x<<" ";
}
}
int main(){
    LIST l;
    khoitaos(l);
int n;
cout<<"Nhap so can chuyen doi: ";
cin>>n;
chuyendoi(l,2,n);
Xuat(l);
return 0;
}
