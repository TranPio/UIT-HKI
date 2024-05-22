#include <bits/stdc++.h>
using namespace std;
struct NODE {
int data;
struct NODE *pNext;
};
struct LIST{
NODE *pHead;
NODE *pTail;
};
void khoitao(LIST &l){
l.pHead=NULL;
l.pTail=NULL;
}
NODE *khoitaonode(int x){
NODE *p=new NODE;
p->data=x;
p->pNext=NULL;
return p;
}
void Themvaodau(LIST &l,NODE *p){
if(l.pHead==NULL){
    l.pHead=l.pTail=p;
}
else{
    p->pNext=l.pHead;
    l.pHead=p;
}
}
void Themvaocuoi(LIST &l,NODE *p){
if(l.pHead==NULL){
    l.pHead=l.pTail=p;
}
else{
    l.pTail->pNext=p;
    l.pTail=p;
}
}
void Themnodep_saunodeq(LIST &l,NODE *p){
    int x;
    cout<<"Nhap gia tri node q: ";
    cin>>x;
    NODE *q=khoitaonode(x);
if(l.pHead->data==q->data && l.pHead->pNext==NULL){
    Themvaocuoi(l,p);
}
else{
    for(NODE *k=l.pHead;k!=NULL;k=k->pNext){
        NODE *h=khoitaonode(p->data);
        if(q->data==k->data){
            NODE *g=k->pNext;
            h->pNext=g;
            k->pNext=h;
        }
    }
}
}
void Themnodep_truocnodeq(LIST &l,NODE *p){
 int x;
    cout<<"Nhap gia tri node q: ";
    cin>>x;
    NODE *q=khoitaonode(x);
if(l.pHead->data==q->data && l.pHead->pNext==NULL){
    Themvaodau(l,p);
}
else{
        NODE *g=new NODE;
    for(NODE *k=l.pHead;k!=NULL;k=k->pNext){
    NODE *h=khoitaonode(p->data);
        if(q->data==k->data){
                h->pNext=k;
            g->pNext=h;
        }
        g=k;
    }
}
}
void Xoadau(LIST &l){
if(l.pHead==NULL){
    return;
}
else{
    NODE *p=l.pHead;
    l.pHead=l.pHead->pNext;
    delete p;
}
}
void Xoacuoi(LIST &l){
if(l.pHead==NULL){
    return ;
}
if(l.pHead->pNext==NULL){
    Xoadau(l);
    return ;
}
else{
    for(NODE *k=l.pHead;k!=NULL;k=k->pNext){
        if(k->pNext==l.pTail){
            delete l.pTail;
            k->pNext=NULL;
            l.pTail=k;
            return;
        }
    }
}
}
void Xuat(LIST &l){
 for(NODE *k=l.pHead;k!=NULL;k=k->pNext){
            cout<<k->data<<" ";
}
}
int main(){
    LIST l;
khoitao(l);
while(2004){
    system("cls");
    cout<<"1.Them phan tu vao danh sach"<<endl;
    cout<<"2.Them node p sau node q"<<endl;
    cout<<"3.Them node p truoc node q"<<endl;
    cout<<"4.Xoa cuoi"<<endl;
    cout<<"5.Xuat"<<endl;
    cout<<"0.Thoat"<<endl;
    int luachon;
    cout<<"Nhap vao lua chon: "<<endl;
    cin>>luachon;
    if(luachon==1){
        int x;
        cout<<"Nhap vao gia tri so nguyen: ";
        cin>>x;
        NODE *p=khoitaonode(x);
        Themvaocuoi(l,p);
    }
    else if(luachon==2){
        int x;
        cout<<"Nhap gia tri node p: ";
        cin>>x;
        NODE *p=khoitaonode(x);
        Themnodep_saunodeq(l,p);
    }
     else if(luachon==3){
        int x;
        cout<<"Nhap gia tri node p: ";
        cin>>x;
        NODE *p=khoitaonode(x);
        Themnodep_truocnodeq(l,p);
    }
    else if(luachon==4){
        Xoacuoi(l);
    }
    else if(luachon==5){
            Xuat(l);
            system("pause");
        }
        else{
            break;
        }
    }
}

