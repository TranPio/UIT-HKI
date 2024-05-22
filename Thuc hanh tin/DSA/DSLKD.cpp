#include <iostream>
using namespace std;
struct NODE{
	int data;
	struct NODE *pNext;
};
typedef struct NODE NODE;
struct LIST{
	NODE *pHead;
	NODE *pTail;
};
typedef struct LIST LIST;
void Khoitao(LIST &l){
	l.pHead=NULL;
	l.pTail=NULL;
}

NODE *khoitaoNODE(int x){
	NODE *p= new NODE;
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
void Xuat(LIST l){
	for(NODE *k=l.pHead;k!=NULL;k=k->pNext){
		cout<<k->data<<" ";
	}
}

int main(){
	LIST l;
	Khoitao(l);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		NODE *p=khoitaoNODE(x);
		Themvaodau(l,p);
	}
	Xuat(l);
	return 0;
	}
