#include <bits/stdc++.h>
using namespace std;
struct NODE {
int data;
struct NODE *pNext;
};
typedef struct NODE NODE;
struct QUEUE{
NODE *pHead;
NODE *pTail;
};
typedef struct QUEUE QUEUE;
void khoitaoqueue(QUEUE &q){
q.pHead=NULL;
q.pTail=NULL;
}
NODE *khoitaonode(int x){
NODE *p= new NODE ();
if(p==NULL){
    cout<<"Khong du bo nho"<<endl;
    return NULL;
}
p->data=x;
p->pNext=NULL;
return p;
}
bool isempty(QUEUE q){
if(q.pHead==NULL){
    return true;
}
return false;
}
bool push(QUEUE &q,NODE *p){
    if(p==NULL){
        return false;
    }
    if(isempty(q)==true){
        q.pHead=q.pTail=p;
    }
    else{
        q.pTail->pNext=p;
        q.pTail=p;
    }
    return true;
}
bool pop(QUEUE &q,int &x){
if(isempty(q)==true){
    return false;
}
else{
    NODE *p=q.pHead;
    x=p->data;
    q.pHead=q.pHead->pNext;
    delete p;
}
return true;
}
bool top(QUEUE &q,int &x){
if (isempty(q)==true){
    return false;
}
else{
x=q.pHead->data;
return true;
}
}
void xuat(QUEUE q){
while (isempty(q)==false){
    int x;
    pop(q,x);
    cout<<x<<" ";
}
if(isempty(q)==true){
    cout<<"\tDanh sach dang rong"<<endl;
}
}
void MENU(QUEUE &q){
int luachon;
while (2004){
        system("cls");
    cout<<"==================Menu=================="<<endl;
    cout<<"0.Thoat"<<endl;
    cout<<"1.Them phan tu vao queue"<<endl;
    cout<<"2.Xuat danh sach queue-Pop"<<endl;
    cout<<"3.Xem thong tin phan tu dau queue-Top"<<endl;
    cout<<"==================End=================="<<endl;
    cout<<"Nhap lua chon: "<<endl;
    cin>>luachon;
    if(luachon==1){
        int x;
        cout<<"Nhap phan tu can them: "<<endl;
        cin>>x;
        NODE *p=khoitaonode(x);
        push(q,p);
    }
    else if(luachon==2){
        xuat(q);
        system("pause");
    }
    else if(luachon==3){
        int x;
        top(q,x);
        cout<<"Phan tu dau stack la: "<<x<<endl;
        system("pause");
    }
    else{
        break;
    }
}
}
int main(){
    QUEUE q;
    khoitaoqueue(q);
    MENU(q);
    system("pause");
return 0;
}

