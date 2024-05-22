#include <bits/stdc++.h>
using namespace std;
int n,m;
bool visited[1000];
vector<int> a[1000];
void Nhap(){
cin>>n>>m;
for(int i=0;i<m;i++){
    int x,y;
    cin>>x>>y;
    a[x].push_back(y);
    a[y].push_back(x);
}
memset(visited,false,sizeof(visited));
}
void BFS(int u){
queue<int> q;
q.push(u);
visited[u]=true;
while (!q.empty()){
    int v=q.front();
    q.pop();
    cout<<v<<" ";
    for(int x:a[v]){
        if(!visited[x]){
            q.push(x);
            visited[x]=true;
        }
    }
}

}
int main(){
Nhap();
BFS(1);
return 0;
}