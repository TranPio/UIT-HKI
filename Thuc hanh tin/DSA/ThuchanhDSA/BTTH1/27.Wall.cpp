#include <bits/stdc++.h>
using namespace std;
long long n,m;
struct dataa{
    long long v,i;
    bool operator< (dataa &d) const{
        return (v < d.v);
    }
} a[100001],b[100001];
long long x;

long long check(dataa a[], dataa b[], long long n, long long m, long long x){

    long long cnt = 0;
    for (long long i = 0, j = 0; i <= n; i++,j++){
        while (a[i].v >= x && i < n) i++;
        if (i >= n) return cnt;
        while ((a[i].v+b[j].v < x) && (j < m)) j++;
        if (j >= m && a[i].v < x) return 0;
        cnt++;
    }
    return 0;
}

long long binarySearch(dataa a[], dataa b[], long long n, long long m){
    long long l = 2e8,r = 2e8;
    for (int i = 0; i < n; i++)
        l = min(l,a[i].v);
    long long mid,ans = l;
    while (l <= r){
        mid = (l+r)/2;
        long long t = check(a,b,n,m,mid);
        if (t == 0)
            r = mid-1;
        if (t > 0){
            if (ans < mid){
                ans = mid;
                x = t;
            }
            l = mid+1;
        }
    }
    return (long long) ans;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (long long i = 0; i < n; ++i){
        cin >> a[i].v;
        a[i].i = i;
    }
    cin >> m;
    for (long long i = 0; i < m; i++){
        cin >> b[i].v;
        b[i].i = i;
    }

    long long ans = binarySearch(a,b,n,m);
    cout << ans << ' ' << x << '\n';
    for (long long i = 0, j = 0; i <= n; i++,j++){
        while (a[i].v >= ans && i < n) i++;
        if (i >= n) break;
        while (a[i].v+b[j].v < ans && j < m) j++;
        if (j >= m && a[i].v < ans) break;
        cout << i+1 << ' ' << j+1 << '\n';
    }
    return 0;
}
