// Ma tran ke sang danh sach ke

#include <bits/stdc++.h>
#include <vector>
using namespace std;
int n,m;
int a[1000][1000];
vector<int> am[100];
int main(){
 cin>>n;
 for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cin>>a[i][j];
    }
 }
 for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(a[i][j]== 1 ){
           am[i].push_back(j);
          // a[j].push_back(i);
        }
    }
 }
 for(int i=1;i<=n;i++){
    cout<<i<<" : ";
    for(int x : am [i]){
        cout<<x<<" " ;
    }
    cout<<endl;
 }
return 0;
}
