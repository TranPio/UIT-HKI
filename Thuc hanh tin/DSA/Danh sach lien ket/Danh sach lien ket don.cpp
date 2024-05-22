#include <iostream>
using namespace std;
//Khai bao cau truc danh sach lien ket don cac so nguyen
// Khai bao cau truc 1 cai node
struct NODE {
int data;
struct NODE *pNext; // Con tro dung de lien ket giua cac node voi nhau
};
typedef NODE NODE;
// Khai bao cau truc cua danh sach lien ket don
struct LIST{
NODE *pHead; // node quan li dau danh sach
NODE *pTail; // node quan li cuoi danh sach
};
typedef LIST LIST;

// Khoi tao cau truc danh sach lien ket don cac so nguyen
void Khoitao(LIST &l){
l.pHead =NULL;
l.pTail =NULL;
}
// Ham khoi tao mot cai node
NODE *khoitaoNODE(int x){
NODE *p = new NODE; //Cap phat vung nho cho NODE p
if(p==NULL){
    cout<<"Khong du bo nho de cap phat";
    return NULL;
}
p -> data =x; // truyen gia tri x vao cho data
p->pNext=NULL; // Dau tien khai bao node thi node do chua co lien ket
return p; // tra ve NODE p vua khoi tao
}

// Ham them node vao dau danh sach lien ket

void Themvaodau(LIST &l,NODE *p){
if (l.pHead==NULL){
    l.pHead =l.pTail=p;
}
else{
    p->pNext=l.pHead; // cho con tro cua node can them la node p lien ket den node dau - pHead
    l.pHead =p;
}
}

// Ham them cuoi danh sach lien ket don

void Themvaocuoi(LIST &l,NODE *p){
if (l.pHead==NULL){
    l.pHead =l.pTail=p;
}
else{
    l.pTail->pNext=p; // cho con tro cua node can them la node p lien ket den node dau - pHead
    l.pTail =p; // cap nhar lai noode cuoi la pTail
}
}

// Ham xuar danh sach lien ket don
void Xuat(LIST l){
for(NODE *k=l.pHead;k!=NULL ;k=k->pNext){
    cout<<k->data<<" ";
}
}
int Timmax(LIST l){
int max=l.pHead->data;
for(NODE *k=l.pHead;k!=NULL;k=k->pNext)
{
    if(max<k->data){
        max=k->data;
    }

}
return max;
}
// Ky thuat them 1 node p vao sau node q
void Themnodep_vaosaunodeq(LIST &l,NODE *p){
int x;
cout<<"Nhap gia tri node q: ";
cin>>x;
NODE *q=khoitaoNODE(x);
if (q->data==l.pHead->data && l.pHead->pNext==NULL){
    Themvaocuoi(l,p);
}
else{
    // duyet danh sach den cuoi danh sach de tim node q
    for(NODE *k=l.pHead;k!=NULL;k=k->pNext){
        if(q->data == k->data){
                NODE *h=khoitaoNODE(p->data);
        NODE *g= k->pNext; // Gan node g tro den node nam sau node q
        h->pNext=g; // Tao moi lien ket den node nam sau node q
        k->pNext=h;
        }

    }
}
}


// Menu
void menu()
{
    LIST l;
Khoitao(l);
int luachon;
while(2004){
 system("cls");
    cout<<endl;
    cout<<"===================Menu==================="<<endl;
    cout<<"1.Them node vao danh sach"<<endl;
    cout<<"2.Xuat danh sach lien ket don"<<endl;
    cout<<"4.Thoat"<<endl;
    cout<<"3.Them con tro p sau con tro q"<<endl;
    cout<<"===================End==================="<<endl;
    cout<<"Nhap lua chon: "<<endl;
    cin>>luachon;
    if(luachon<1||luachon>4){
        cout<<"Nhap loi"<<endl;
        system("pause");
    }
    if(luachon==1){
            int x;
        cout<<"Nhap gia tri so nguyen: "<<endl;
    cin>>x;
        NODE *p= khoitaoNODE(x);
        Themvaocuoi(l,p);
    }
    else if(luachon==2){
        Xuat(l);
        system("pause");
    }
    else if(luachon==3){
        int x;
        cout<<"\n Nhap gia tri node p can them vao sau: ";
        cin>>x;
        NODE *p=khoitaoNODE(x);
        Themnodep_vaosaunodeq(l,p);
    }
    else {
        break;
    }
}
}

    int main(){
LIST l;
Khoitao(l);
menu();
return 0;
}

