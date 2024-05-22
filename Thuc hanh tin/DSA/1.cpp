
// Đơn đồ thị
// Đa đồ thị
// Đơn đồ thị vô hướng
// Đơn đồ thị có hướng
// Đa đồ thị có hướng
// Đỉnh kề, cạnh liên thuộc
// Bậc của đỉnh: đồ thị vô hướng
// Bậc của đỉnh:đồ thị có hướng ,bán bậc ra , bán bậc vào

// Danh sach canh sang ma tran ke
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int n, m;
int a[10000][10000];
int main(){
 cin>>n>>m;
 for(int i=0;i<m;i++){
    int x,y;
    cin>>x>>y;
    a[x][y]=a[y][x]=1;
    }
      for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}
