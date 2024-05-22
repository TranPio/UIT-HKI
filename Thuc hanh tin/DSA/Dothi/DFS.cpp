#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> adj[1000];
bool visited[1000];
void Nhap(){
cin>>n>>m;
for(int i=0;i<m;i++){
    int x,y;
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
}
memset(visited,false,sizeof(visited));
}
void dfs(int u){
    cout<<u<<" ";
visited[u]=true;
for(int v:adj[u]){
    if(!visited[v]){
        visited[v]=true;
        dfs(v);
    }
}
}
int main(){
Nhap();
int x;
//cin>>x;
dfs(1);
return 0;
}
