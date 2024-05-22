// ma tran ke sang danh sach canh3
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int n,m;
int a[1000][1000];
vector <pair<int,int>> canh;
int main(){
 cin>>n;
 for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cin>>a[i][j];
    }
 }
 for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(a[i][j]== 1  && i<j){
            canh.push_back({i,j});
        }
    }
 }
 for(auto i : canh){
    cout<<i.first<< " " <<i.second<<endl;
 }
return 0;
}
