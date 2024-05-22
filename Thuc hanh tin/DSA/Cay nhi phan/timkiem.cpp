#include <bits/stdc++.h>
using namespace std;
//Nhap cay nhi phan cac so nguyen.Xuat ra man hinh cac phan tu cua cay nhi phan
struct node{
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
    t=p;//p la node goc
}
    else{
            //neu phan tu them vao nho hon node goc =>them vao ben trai
        if(t->data>x){
            themnodevaocay(t->pLeft,x);
        }
        else if(t->data<x){
            themnodevaocay(t->pRight,x);
        }
        }
    }
    // xuat cay nhi phan theo nlr
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
NODE *timkiem(TREE &t,int x){
// neu cay rong
if(t==NULL){
    return NULL;
}
else {
    if(x<t->data){
        timkiem(t->pLeft,x);
    }
    else if(x>t->data){
        timkiem(t->pRight,x);
    }
    else{ // t->data==x
        return t;
    }
}
}
void xuatcacnode2con(TREE t){
if(t!=NULL){
        if(t->pLeft!=NULL && t->pRight!=NULL){
            cout<<t->data<<" ";
        }
    xuatcacnode2con(t->pLeft);
    xuatcacnode2con(t->pRight);
}
}
void xuatcacnode1con(TREE t){
if(t!=NULL){
        if((t->pLeft!=NULL && t->pRight==NULL)||(t->pLeft==NULL && t->pRight!=NULL)){
            cout<<t->data<<" ";
        }
    xuatcacnode1con(t->pLeft);
    xuatcacnode1con (t->pRight);
}
}
void xuatcacnodela(TREE t){
if(t!=NULL){
        if(t->pLeft==NULL && t->pRight==NULL){
            cout<<t->data<<" ";
        }
    xuatcacnodela(t->pLeft);
    xuatcacnodela(t->pRight);
}
}
void Timnodethemang(TREE &x,TREE &y)}{
if(y->pLeft != NULL){
    Timnodethemang(x,y->pLeft);
}
else{
    x->data=y->data;
    x=y;
    y=y->pRight; // y->pRight =NULL;

}
}
// Ham tim max;
int MAX= INT_MIN ;
void timmax(TREE t){
    if(t!=NULL){
            if(MAX<t->data){
                MAX=t->data;
            }
        timmax(t->pLeft);
        timmax(t->pRight);
    }

}
int Timmax(TREE &t){
if(t->pRight==NULL){
        return t->data;
}
//int Max=t->data;
//if(t->pRight != NULL){
  //  int right=Timmax(t->pRight);
    //if(Max<right){
      //  Max=right;
    //}
//}
//return Max;
return Timmax(t->pRight);
}
int Timmin(TREE &t){
if(t->pLeft==NULL){
    return t->data;
}
return Timmin(t->pLeft);
}
//Ham xoa 1 node bat ki trong cay nhi phan tim kiem
void Xoanode(TREE &t,int data){
if(t==NULL){
    return;
}else{
if(data<t->data){
    Xoanode(t->pLeft,data);
}
else if(data>t->data){
    Xoanode(t->pRight,data);
}
else{
    NODE *x=t;
    if(t->pLeft==NULL){
        t=t->pRight;
    }

    else if(t->pRight==NULL){
        t=t->pLeft;
    }
    else{
        NODE *y=t->pRight;
        Timnodethemang(x,y);
    }
    delete x;
}
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
    cout<<"8.Tim kiem node"<<endl;
    cout<<"9.Xuat cac node co 2 con"<<endl;
    cout<<"10.Xuat cac node co 1 con"<<endl;
    cout<<"11.Xuat cac node la"<<endl;
    cout<<"12.Tim max"<<endl;
    cout<<"14.Tim max C2"<<endl;
    cout<<"15.Tim min"<<endl;
    cout<<"16.Xoa Node"<<endl;
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
           int x;
           cout<<"Nhap phan tu can tim kiem: "<<endl;
           cin>>x;
           NODE *p=timkiem(t,x);
           if(p==NULL){
            cout<<"Phan tu "<<x<<" khong ton tai trong cay";
           }
           else{
            cout<<"Phan tu "<<x<<" co ton tai trong cay";
           }
           system("pause");
        }
        else if(luachon==9){
            cout<<"Cac node co 2 con la: "<<endl;
            xuatcacnode2con(t);
            system("pause");
        }
           else if(luachon==10){
            cout<<"Cac node co 1 con la: "<<endl;
            xuatcacnode1con(t);
            system("pause");
        }
        else if(luachon==11){
            cout<<"Cac node la: "<<endl;
            xuatcacnodela(t);
            system("pause");
        }
         else if(luachon==12){
            cout<<"Max la: ";
            timmax(t);
            cout<<MAX;
            system("pause");
        }
         else if(luachon==14){
            cout<<"Max la: ";
            cout<<Timmax(t);
            system("pause");
        }
        else if(luachon==15){
            cout<<"Min la: ";
            cout<<Timmin(t);
            system("pause");
        }
        else if(luachon==16){
                cout<<"Nhap node can xoa: "<<endl;
        int x;
        cin>>x;
        Xoanode(t,x);
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

