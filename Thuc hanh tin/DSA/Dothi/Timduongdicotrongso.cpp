#include <bits/stdc++.h>
using namespace std;
int n,w;
string x,y,k,l;
vector<pair<int,int>> a[10001];
int parent[10001];
bool visited[10001];
map<string,int> mps;
map<int,string> mpn;
void Nhap(){
cin>>n;
int dem=0;
for(int i=0;i<n;i++){
    cin>>x>>y>>w;
    if(mps.count(x)==0){
        mps[x]=++dem;
        mpn[dem]=x;
    }
    if(mps.count(y)==0){
        mps[y]=++dem;
        mpn[dem]=y;
    }
    int u=mps[x];
    int v=mps[y];
    a[u].push_back({v,w});
    a[v].push_back({u,w});
}
cout<<"\n Nhap dinh bat dau: ";
cin>>k;
cout<<"\n Nhap dinh ket thuc: ";
cin>>l;
}
const int INF=1e9;
void Dijkstra(string u,string v){
int s=mps[u];
int t=mps[v];
vector<long long> d(n+1,INF);
d[s]=0;
parent[s]=s;
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> Q;
Q.push({0,s});
while(!Q.empty()){
    pair<int,int> top=Q.top();
    Q.pop();
    int dinh=top.second;
    int kc=top.first;
    if(kc>d[dinh]) {continue;}
    else{
    for(auto it:a[dinh]){
        int dinh1=it.first;
        int w=it.second;
        if(d[dinh1]>d[dinh]+w){
        d[dinh1]=d[dinh]+w;
        Q.push({d[dinh1],dinh1});
        parent[dinh1]=dinh;
    }
    }
    }
}
    cout<<d[t]<<endl;
    vector<int> path;
    while(1){
        path.push_back(t);
        if(t==s) break;
        t=parent[t];
    }
    reverse(path.begin(),path.end());
    for(int x:path){
        cout<<mpn[x]<<" ";
    }
}

int main(){
Nhap();
Dijkstra(k,l);
return 0;
}
