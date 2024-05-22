#include <bits/stdc++.h>
using namespace std;
int n=0;
struct NODE {
int data;
struct NODE *pNext;
};
//typedef NODE NODE;
struct LIST {
NODE *pHead;
NODE *pTail;
};
//typedef LIST LIST;
void khoitao(LIST &l){
l.pHead=NULL;
l.pTail=NULL;
}
NODE *khoitaoNODE(int x){
NODE *p=new NODE;
if (p==NULL){
    cout<<"Khong du bo nho "<<endl;
    return NULL;
}
p->data=x;
p->pNext=NULL;
return p;
}
void Themvaodau(LIST &l,NODE *p){
if(l.pHead==NULL){
    l.pHead=l.pTail=p;
}
else {
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
    cout<<"Nhap gia tri node q: "<<endl;
    cin>>x;
    NODE *q=khoitaoNODE(x);
  if(q->data==l.pHead->data && l.pHead->pNext==NULL){
 Themvaocuoi(l,p);
}
else{
    for(NODE *k=l.pHead;k!=NULL;k=k->pNext){
        if(q->data==k->data){
            NODE *h=khoitaoNODE(p->data);
            NODE *g=k->pNext;
            h->pNext=g;
            q->pNext=h;
        }
    }

}
}
void Themnodep_truocnodeq(LIST &l,NODE *p){
int x;
cout<<"Nhap gia tri node q: "<<endl;
cin>>x;
NODE *q=khoitaoNODE(x);
if(q->data==l.pHead->data && l.pHead->pNext==NULL){
    Themvaodau(l,p);
}
else{
    NODE *g=new NODE;
    for(NODE *k=l.pHead;k!=NULL;k=k->pNext){
        if(q->data==k->data){
                NODE *h=khoitaoNODE(p->data);
            h->pNext=k;
            g->pNext=h;
        }
        g=k;
    }
}
}
void Themnodepvaovitribatki(LIST &l,NODE *p,int vt){
if(l.pHead == NULL || vt==1){
    Themvaodau(l,p);
}
else if(vt==n+1){
    Themvaocuoi(l,p);
}
else{
    int dem=0;
    NODE *g=new NODE;
    for(NODE *k=l.pHead;k!=NULL;k=k->pNext){
            dem++;
        if(dem==vt){
            NODE *h=khoitaoNODE(p->data);
            h->pNext=k;
            g->pNext=h;
            break;
        }
        g=k;
    }

}
}

void Xuat(LIST l){
for(NODE *k=l.pHead;k!=NULL;k=k->pNext){
cout<<k->data<<" ";
}
}
void Xoadau(LIST &l){
if(l.pHead==NULL){
    return ;
}
NODE *p=l.pHead;
l.pHead=l.pHead->pNext;
delete p;
}
void Xoacuoi(LIST &l){
if(l.pHead==NULL){
    return ;
}
else if(l.pHead->pNext==NULL){
    Xoadau(l);
    return ;
}
for(NODE *k=l.pHead;k!=NULL;k=k->pNext){
    if(k->pNext==l.pTail){
        delete l.pTail;
        k->pNext=NULL;
        l.pTail=k;
        return ;
    }
}
}
void Xoasau(LIST &l,NODE *q){
for(NODE *k=l.pHead;k!=NULL;k=k->pNext){
    if(k->data==q->data){
        NODE *g=k->pNext;
        k->pNext=g->pNext;
        delete g;
    }
}
}
void Xoavitribatki(LIST &l,int x) {
    if(l.pHead->data==x)
    {
     Xoadau(l);
     return ;
    }
    else if(l.pTail->data==x){
        Xoacuoi(l);
        return ;
    }
    NODE *g=new NODE;
    for(NODE *k=l.pHead;k!=NULL;k=k->pNext){
        if(k->data==x){
            NODE *h=k->pNext;
            g->pNext=h;
            delete k ;
            Xoavitribatki(l,x);
            return;

        }
        g=k;
    }
}
void Menu(){
LIST l;
khoitao(l);
int luachon;
while (2004){
    system("cls");
    cout<<endl;
    cout<<"===============Menu==============="<<endl;
    cout<<"0.Thoat"<<endl;
    cout<<"1.Them node vao danh sach"<<endl;
    cout<<"2.Them node p vao truoc node q"<<endl;
    cout<<"3.Xuat danh sach"<<endl;
    cout<<"4.Them mot node p vao vi tri bat ki"<<endl;
    cout<<"5.Xoa dau"<<endl;
    cout<<"6.Xoa cuoi"<<endl;
    cout<<"7.Xoa node sau node q"<<endl;
    cout<<"8.Xoa phan tu bat ki"<<endl;
    cout<<"===============End==============="<<endl;
    cout<<"Moi nhap lua chon: "<<endl;
    cin>>luachon;
    if(luachon<0 || luachon>8){
        cout<<"Nhap loi "<<endl;
        system("pause");
    }
    else if(luachon==1){
        n++;
        int x;
        cout<<"Nhap gia tri so nguyen: "<<endl;
        cin>>x;
        NODE *p=khoitaoNODE(x);
        Themvaocuoi(l,p);
    }
    else if(luachon==2){
        int x;
        cout<<"Nhap gia tri node p can them: "<<endl;
        cin>>x;
        NODE *p=khoitaoNODE(x);
        Themnodep_truocnodeq(l,p);
        //
    }
    else if(luachon==3){
        Xuat(l);
        system("pause");
    }
else if(luachon==4){
    int x;
    cout<<"Nhap gia tri node p: "<<endl;
    cin>>x;
    NODE *p=khoitaoNODE(x);
    int vt;

    do{
        cout<<"Nhap vao vi tri can them: "<<endl;
        cin>>vt;
        if(vt<1 || vt>n+1){
            cout<<"Vi tri can them phia nam trong doan [ 1; "<<n+1 <<"]"<<endl;
            system("pause");
        }
    }while(vt<1 || vt> n+1);
    Themnodepvaovitribatki(l,p,vt);
    n++;

}
 else if(luachon==5){
    Xoadau(l);
 }
 else if(luachon==6){
    Xoacuoi(l);
 }
 else if(luachon==7){
    int x;
    cout<<"Nhap node q: "<<endl;
    cin>>x;
    NODE *q=khoitaoNODE(x);
    Xoasau(l,q);
 }
else if(luachon==8){
    int x;
    cout<<"Nhap node can xoa: ";
    cin>>x;
    Xoavitribatki(l,x);
}
    else{
        break;
    }

}
}
int main(){
LIST l;
khoitao(l);
Menu();
return 0;
}
