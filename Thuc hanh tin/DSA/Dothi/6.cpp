// Danh sach ke sang danh sach canh
#include <bits/stdc++.h>
using namespace std;
int n,m;
vector <int> am[1001];
vector <pair<int,int>> canh;
int main(){
cin>>n;
cin.ignore();
for(int i=1;i<=n;i++){
    string s,dem;
    getline(cin,s);
    stringstream ss(s);
    while (ss >> dem){
            if(stoi(dem)>i){
       canh.push_back({i,stoi(dem)});
    }
}
}

for(auto i : canh){
    cout<<i.first<<" "<<i.second<<endl;
}
return 0;
}
