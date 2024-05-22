#include <bits/stdc++.h>
using namespace std;

struct Edge
{
    int u, v;
    int w;
};
int n, m;
int parent[10000], sz[10000];
vector<Edge> canh;
void make_set()
{
    for (int i=1; i<=n; i++)
    {
        parent[i] = i;
        sz[i]=1;
    }
}
int find(int v)
{
    if (v==parent[v])
        return v;
    return parent[v] = find(parent[v]);
}

bool kiemtra(int a, int b)
{
    a = find (a);
    b = find (b);
    if (a == b)
        return false;
    if (sz[a]<sz[b])
        swap(a,b);
    parent [b] = a;
    sz[a] + sz[b];
    return true;
}
void Nhap()
{
    cin>>n>>m;
    for (int i=0; i<m; i++)
    {
        int x, y, w;
        cin>>x>>y>>w;
        Edge e;
        e.u = x;
        e.v = y;
        e.w = w;
        canh.push_back(e);
    }
}

bool cmp (Edge a, Edge b)
{
    return a.w<b.w;
}

void Kruskal()
{
    vector<Edge>mst;
    int d = 0;
    sort (canh.begin(), canh.end(), cmp);
    for (int i=0; i<m; i++)
    {
        if (mst.size() == n-1)
            break;
        Edge e = canh[i];
        if (kiemtra(e.u, e.v))
        {
            mst.push_back(e);
            d += e.w;
        }
    }
    if (mst.size() != n-1)
    {
        cout<<"\nDo thi khong lien thong.";
    }
    else
    {
        cout<<"\nCay khung nho nhat: "<<d<<endl;
        for (auto it: mst)
        {
            cout<< it.u<<"\t" << it.v << "\t" << it.w <<endl;
        }
    }
}

int main()
{
    Nhap();
    make_set();
    Kruskal();
    return 0;
}
