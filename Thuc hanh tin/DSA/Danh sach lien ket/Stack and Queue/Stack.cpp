#include <bits/stdc++.h>
using namespace std;
// Nhap danh sach stack chua cac so nguyen sau do xuat ra man hinh cac gia tri so nguyen
// khai bao cau truc cua 1 cai NODE
struct NODE {
int data;
struct NODE *pNext;
};
typedef struct NODE NODE;
// khai bao cau truc stack
struct STACK{
NODE *pTop;
};
typedef struct STACK STACK;
void khoitaostack(STACK &s){
s.pTop=NULL;
}

NODE *khoitaonode(int x){
NODE *p=new NODE;
if(p==NULL){
    cout<<"Khong du bo nho"<<endl;
    return NULL;
}
p->data=x;
p->pNext=NULL;
return p;
}
// kiem tra stack co rong hay khong
bool isempty(STACK &s){
if(s.pTop==NULL){
    return true;
}
return false;
}
// them 1 doi tuong vao stack LIFO
bool push(STACK &s,NODE *p){
    if(p==NULL){
        return false;
    }
if(isempty(s)==true){
    s.pTop=p;// node p chinh la node dau stack
}
else{
    p->pNext=s.pTop;
    s.pTop=p;
}
return true;
}

// Lay phan tu dau stack va huy no di

bool Pop(STACK &s,int &x){ // x chinh la gia tri can lay
if(isempty(s)==true){
    return false;
}
else{
    NODE *p=s.pTop;
    x=p->data;
    s.pTop=s.pTop->pNext;
    delete p;
}
return true; //lay thanh cong
}

// Xem thong tin cua phan tu dau stack -TOP
bool Top(STACK &s,int &x){
if(isempty(s)==true){
    return false;
}
x=s.pTop->data;
return true;
}
void Xuat(STACK s){
while (isempty(s)==false){
    int x;
    Pop(s,x);
    cout<<x<<" ";
}
if (isempty(s)==true){
    cout<<"Danh sach dang rong"<<endl;
}else{
cout<<"Danh sach dang ton tai phan tu"<<endl;
}
}
void MENU(STACK &s){
int luachon;
while (2004){
        system("cls");
    cout<<"==================Menu=================="<<endl;
    cout<<"0.Thoat"<<endl;
    cout<<"1.Them phan tu vao stack"<<endl;
    cout<<"2.Xuat danh sach stack-Pop"<<endl;
    cout<<"3.Xem thong tin phan tu dau stack-Top"<<endl;
    cout<<"==================End=================="<<endl;
    cout<<"Nhap lua chon: "<<endl;
    cin>>luachon;
    if(luachon==1){
        int x;
        cout<<"Nhap phan tu can them: "<<endl;
        cin>>x;
        NODE *p=khoitaonode(x);
        push(s,p);
    }
    else if(luachon==2){
        Xuat(s);
        system("pause");
    }
    else if(luachon==3){
        int x;
        Top(s,x);
        cout<<"Phan tu dau stack la: "<<x<<endl;
        system("pause");
    }
    else{
        break;
    }
}
}
int main(){
    STACK s;
    khoitaostack(s);
    MENU(s);
    system("pause");
return 0;
}


