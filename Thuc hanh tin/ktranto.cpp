#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool ktnt(int n){
	for(int i=2;i<=(int) sqrt(n);i++)
	if(n%i==0 )
	return false;
	return true;
}
int main(){
	int n;
	cin>>n;
	if(ktnt(n)==true){
	cout<<"NT";
}
	cout<<"KNT";
	return 0;
}