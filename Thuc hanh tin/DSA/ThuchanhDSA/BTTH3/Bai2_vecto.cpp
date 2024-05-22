#include <bits/stdc++.h>
using namespace std;
void dump(vector<int>& data)
{
    auto itr=data.begin();
    while(itr!=data.end())
    {
        itr++;
    }
    itr--;
    cout<<*itr<<" ";
}
int main()
{
    int n,i,m,j,u;
    vector<int> a;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        a.push_back(i);
    }
    cin>>m;
    int duoi;
    for(i=1;i<=m;i++)
    {
        cin>>u;
        for(auto itr = a.begin(); itr != a.end(); ++itr)
        {
            if(*itr==u)
            {
                a.erase(itr);
                a.insert(a.begin(),u);
                dump(a);
            }
        }
    }
}
