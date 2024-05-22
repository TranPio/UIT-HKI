#include <bits/stdc++.h>
using namespace std;
 struct node {
 int data;
 struct node *pLeft;
 struct node *pRight;
 };
typedef struct node NODE;
typedef NODE* TREE;
 void khoitaocay(TREE &t){
 t=NULL;
 }
 void themnodevaocay(TREE &t,int x){
 if(t==NULL){
    NODE *p=new NODE;
    p->data=x;
    p->pLeft=NULL;
    p->pRight=NULL;
    t=p;
 }
 else if(t->data>x){
    themnodevaocay(t->pLeft,x);
 }
 else if(t->data<x){
    themnodevaocay(t->pRight,x);
 }
 }
 void duyet_nlr(TREE t){
 if(t!=NULL){
    cout<<t->data<<" ";
    duyet_nlr(t->pLeft);
    duyet_nlr(t->pRight);
 }
 }
 void duyet_nrl(TREE t){
    if(t!=NULL){
        cout<<t->data<<" ";
        duyet_nrl(t->pRight);
        duyet_nrl(t->pLeft);
    }
    }
    // tu be den lon
    void duyet_lnr(TREE t){
    if(t!=NULL){
            duyet_lnr(t->pLeft);
        cout<<t->data<<" ";
    duyet_lnr(t->pRight);
    }
    }
    void duyet_rnl(TREE t){
    if(t!= NULL){
        duyet_rnl(t->pRight);
        cout<<t->data<<" ";
        duyet_rnl(t->pLeft);
    }
    }
    void duyet_lrn(TREE t){
    if(t!=NULL){
        duyet_lrn(t->pLeft);
        duyet_lrn(t->pRight);
        cout<<t->data;
    }
    }
    void duyet_rln(TREE t){
    if(t!=NULL){
        duyet_rln(t->pRight);
        duyet_rln(t->pLeft);
        cout<<t->data<<" ";
    }
    }
    bool KTNT(int x){
    if(x<2){
        return false;
    }
    else{
        if(x==2){
            return true;
        }
        else {
            if(x%2==0){
                return false;
            }
            else{
                for(int i=2;i<x;i++){
                    if(x%i==0){
                        return false;
                    }
                }
            }
        }
    }
    return true;
    }

    //Dem so luong so nguyen to
    void SOLUONGSONGUYENTO(TREE t,int &dem){
        if(t!=NULL){
                if(KTNT(t->data)==true){
                    dem++;
                }
            SOLUONGSONGUYENTO(t->pLeft,dem);
            SOLUONGSONGUYENTO(t->pRight,dem);
        }

    }
    void menu(TREE &t){
            int luachon;
        while (2004){
               system("cls");
    cout<<"================MENU================"<<endl;
    cout<<"0.Thoat"<<endl;
    cout<<"1.Nhap du lieu"<<endl;
    cout<<"2.Xuat du lieu theo nlr"<<endl;
    cout<<"3.Xuat du lieu theo nrl"<<endl;
    cout<<"4.Xuat du lieu theo lnr"<<endl;
    cout<<"5.Xuat du lieu theo rnl"<<endl;
    cout<<"6.Xuat du lieu theo lrn"<<endl;
    cout<<"7.Xuat du lieu theo rln"<<endl;
    cout<<"8.Dem so luong so nguyen to"<<endl;
    cout<<"================END================"<<endl;

       cout<<"Nhap vao lua chon: "<<endl;
       cin>>luachon;

             if(luachon==1){
            int x;
        cout<<"Nhap vao cay: "<<endl;
        cin>>x;
        themnodevaocay(t,x);
       }
       else if(luachon==2){
        cout<<"Duyet cay theo NLR: ";
        duyet_nlr(t);
        system("pause");
       }
       else if(luachon==3){
        cout<<"Duyet cay theo NRL: ";
        duyet_nrl(t);
        system("pause");
       }
       else if(luachon==4){
        cout<<"Duyet cay theo LRN: ";
        duyet_lnr(t);
        system("pause");
       }
       else if(luachon==5){
        cout<<"Duyet cay theo RNL: ";
        duyet_rnl(t);
        system("pause");       }
        else if(luachon==6){
            cout<<"Duyet cay theo LRN: ";
            duyet_lrn(t);
            system("pause");
        }
        else if(luachon==7){
            cout<<"Duyet cay theo RLN: ";
            duyet_rln(t);
            system("pause");
        }
        else if(luachon==8){
                int dem=0;
        SOLUONGSONGUYENTO(t,dem);
            cout<<"So luong so nguyen to: "<<endl;
            cout<<dem;
            system("pause");
        }
       else{
        break;
       }
        }
    }
int main(){
TREE t;
khoitaocay(t);
menu(t);
system("pause");
return 0;
}
