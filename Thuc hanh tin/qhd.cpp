#include <bits/stdc++.h>
#define fi "qhd.inp"
#define fo "qhd.out"
using namespace std;
int n;
int f[10000];
int fibo(int n){
	if(n==0){
		f[n]=0;
		return (f[n]);
	}
	else
	if(n==1){
		f[n]=1;
		return f[n];
	}
	else 
	if(f[n]!=0) return (f[n]);
	else{
		f[n]=fibo(n-1)+fibo(n-2);
		return (f[n]);
	}
	}
void docf(){
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>f[i];
}
int main(){
	freopen(fi,"r",stdin);
	freopen(fo,"w",stdout);
	docf();
	cout<<fibo(n);
	return 0;
	
}
