// danh sach canh sang danh sach ke
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int n,m;
vector <int> a[100000];
int main(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        cout<<i<<" : ";
    for(int x : a[i]){
            cout<<x<<" ";

        }
        cout<<endl;
    }

return 0;
}
