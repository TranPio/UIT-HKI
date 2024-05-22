#include<bits/stdc++.h>
using namespace std;

  // nhap danh sach lien ket don cac phan so
  struct phanso{
  int tuso;
  int mauso;
  };
  typedef struct phanso PHANSO;
  struct node{
  PHANSO data;
  struct node *pNext;
  };
  typedef struct node NODE;
  void nhap(PHANSO &ps){
  cout<<"Nhap tu so: "<<endl;
  cin>>ps.tuso;
  cout<<"Nhap mau so: "<<endl;
  cin>>ps.mauso;
  }
  void xuat(PHANSO ps){
  cout<<ps.tuso<<"/"<<ps.mauso;
  }
  //ham khoi tao node
  NODE *khoitaonode(PHANSO ps){
  NODE *p=new NODE;
  if(p==NULL){
    return NULL;
  }
  p->data=ps;
  p->pNext=NULL;
  return p;
  }

  // ham them node vao dau danh sach
  void themdau(NODE *&pHead,NODE *p){
  // neu danh sach rong
  if(pHead==NULL){
    pHead=p;
  }
  else{
p->pNext=pHead;
pHead=p;
  }
  }
  void xuatdanhsach(NODE *&pHead){
  for(NODE *k=pHead;k!=NULL;k=k->pNext){
    xuat(k->data);
    cout<<endl;
  }
  }
void Menu(NODE *&pHead){
int luachon;
while (2004){
    system("cls");
    cout<<endl;
    cout<<"===============Menu==============="<<endl;
    cout<<"0.Thoat"<<endl;
    cout<<"1.Nhap phan so"<<endl;
    cout<<"2.Xuat danh sach phan so"<<endl;
    cout<<"===============End==============="<<endl;
    cout<<"Moi nhap lua chon: "<<endl;
    cin>>luachon;
     if(luachon==1){
     PHANSO ps;
     cout<<"Nhap phan so: "<<endl;
     nhap(ps);
     NODE *p=khoitaonode(ps);
     themdau(pHead,p);
    }
    else if(luachon==2){
        cout<<"Danh sach phan so: "<<endl;
        xuatdanhsach(pHead);
        system("pause");
    }
    else{
        break;
    }

}
}
int main(){
    NODE *pHead=NULL;
    Menu(pHead);
system("pause");
return 0;
}
