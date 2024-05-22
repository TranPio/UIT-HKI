#include <bits/stdc++.h>
using namespace std;
int n;
string x,y;
string k,l;
bool visited[10000];
vector<pair<int,int>>a[10000];
map<string,int> mapso;
map<int,string> mapkieu;
int parent[10000];
void Nhap(){
cin>>n;
int dem=0;
for(int i=0;i<n;i++){
    cin>>x>>y;
    int w;
    cin>>w;
    if(mapso.count(x)==0){
        mapso[x]=++dem;
        mapkieu[dem]=x;
    }
     if(mapso.count(y)==0){
        mapso[y]=++dem;
        mapkieu[dem]=y;
    }
    int u=mapso[x];
    int v=mapso[y];
    a[u].push_back(v);
    a[v].push_back(u);
}
    cout<<"Nhap dinh bat dau: ";
    cin>>k;
    cout<<"Nhap dinh ket thuc: ";
    cin>>l;
}
void BFS(int u){
queue<int>q;
q.push(u);
visited[u]=true;
while(!q.empty()){
    int v=q.front();
    q.pop();
     for(int x:a[v]){
    if(!visited[x]){
            q.push(x);
            visited[x]=true;
            parent[x]=v;
        }
    }
}
}
void Timduongdi(string s,string t){
int u=mapso[s];
int v=mapso[t];
memset(visited,false,sizeof(visited));
BFS(u);
if(!visited[v]){
    cout<<"\n Khong co duong di";
}
else{
        vector<int>Duongdi;
    while(v!=u){
        Duongdi.push_back(v);
        v=parent[v];
    }
    Duongdi.push_back(u);
    reverse(Duongdi.begin(),Duongdi.end());
    for(int x:Duongdi){
        cout<<mapkieu[x]<<" ";
    }
}
}
int main()
{
    Nhap();
    Timduongdi(k,l);
    return 0;
}
