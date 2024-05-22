#include<bits/stdc++.h>
using namespace std;
double A[1000][1000];
int main() {
int n,m;
 cin >> n>>m;
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        cin >> A[i][j];
    }
}
double trace = 0;
for (int i = 0; i < n; i++) {
    trace += A[i][i];
}
cout<< trace;
return 0;
}
