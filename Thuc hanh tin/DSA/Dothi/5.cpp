// Danh sach ke sang ma tran ke
#include <bits/stdc++.h>
using namespace std;
int n,m;
vector <int> am[1001];
vector <pair<int,int>> canh;
int a[1000][1000];
int main(){
cin>>n;
cin.ignore();
for(int i=1;i<=n;i++){
    string s,dem;
    getline(cin,s);
    stringstream ss(s);
    while (ss >> dem){
        a[i][stoi(dem)]=1;
    }
}
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cout<<a[i][j]<<" " ;
    }
    cout<<endl;
}
return 0;
}
