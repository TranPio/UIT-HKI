#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> adj[1001];
bool visited[1001];
void Nhap() {
    cin>>n>>m;
    for (int i=0; i< m; i++) {
        int x, y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));
}
void DFS(int u) {
    cout <<u<< " ";
    visited[u] = true;
    for (int v: adj[u]) {
        if (!visited[v]) {
            DFS(v);
        }
    }
}
int main() {
    Nhap();
    DFS(1);
    return 0;
}
