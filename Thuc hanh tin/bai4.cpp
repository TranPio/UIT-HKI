#include <bits/stdc++.h>
#include <string>
#define fi "bai4.inp"
#define fo "bai4.out"
using namespace std;
int n,a[1000],fre[1000],k,t=0;
char x[1000];
void docf(){
	cin>>n;
	memset(fre,1,sizeof(fre));
	 }
void xuat(){
	for(int i=1;i<=n;i++)
	cout<<x[i];
	cout<<endl;
}
void Try(int i){
   for(char j='A';j<='B';j++){
   	if((x[i-1]=='B')&&(j=='B')) continue;
   	x[i]=j;
   	if(i==4) xuat();
   	else Try(i+1);
   }
}
void Try1(int i){
   for(char j='A';j<='B';j++){
   	if((x[i-1]=='B')&&(j=='B')) continue;
   	x[i]=j;
   	if(i==n) t++;
   	else Try1(i+1);
   }
}
int main(){
	freopen(fi,"r",stdin);
	freopen(fo,"w",stdout);
	docf();
	Try1(1);
	cout<<t<<endl;
	Try(1);
	return 0;
}
