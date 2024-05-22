#include <bits/stdc++.h>
using namespace std;

// CHUYEN DOI CO SO

struct NODE {
int data;
struct NODE *pNext;
};
typedef struct NODE NODE;
struct STACK{
NODE *pTop;
};
typedef struct STACK STACK;
void khoitaostack(STACK &s){
s.pTop=NULL;
}
NODE* themvaostack(int x){
NODE *p=new NODE;
p->data=x;
p->pNext=NULL;
return p;
}
bool isempty(STACK &s){
if(s.pTop==NULL){
    return true;
}
return false;
}
bool push(STACK &s,NODE *p){
if(isempty(s)==true){
    s.pTop=p;
}
else{
    p->pNext=s.pTop;
    s.pTop=p;
}
return true;
}
bool pop(STACK &s,int &x){
if(isempty(s)==true){
    return false;
}
else{
    NODE *p=s.pTop;
    x=p->data;
    s.pTop=s.pTop->pNext;
    delete p;
}
return true;
}
bool top(STACK &s,int &x){
if(isempty(s)==true){
    return false;
}
else{
    x=s.pTop->data;
}
return true;
}
// Ham doi co so

void chuyencoso(STACK &s,int cosocandoi,int hethapphan){
 while(hethapphan!=0){
    int x=hethapphan % cosocandoi;
    NODE *p=themvaostack(x);
    push(s,p);
    hethapphan /= cosocandoi;
 }
}
void xuat(STACK s){
while (isempty(s)==false){
    int x;
    pop(s,x);
    if(x<10){
        cout<<x<<" ";
    }
    else{
       if(x==10){
        cout<<"A"<<" ";
        }
        else if(x==11){
        cout<<"B"<<" ";
        }
        else if(x==12){
        cout<<"C"<<" ";
        }
        else if(x==13){
        cout<<"D"<<" ";
        }
        else if(x==14){
        cout<<"E"<<" ";
        }
        else if(x==15){
        cout<<"F"<<" ";
        }
        }

}
if(isempty(s)==true){
    cout<<"Danh sach da rong"<<endl;
}
}
int main(){
    STACK s;
    khoitaostack(s);
    int hethapphan,cosocandoi;
    cout<<"Nhap gia tri he thap than(10) can chuyen: "<<endl;
    cin>>hethapphan;
    cout<<"Nhap co so can chuyen(2,8,16): "<<endl;
    cin>>cosocandoi;
    chuyencoso(s,cosocandoi,hethapphan);
    cout<<"Ket qua: ";
    xuat(s);
    system("pause");
return 0;
}

