#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Point {
    long x, y;
};

void nhapDiem(Point &X) {
    cin >> X.x >> X.y;
}

void xuatDiem(const Point X) {
    cout << X.x << " " << X.y << "\n";
}

void nhapMang(vector<Point> &arr, long &n) {
    cin >> n;
    arr.resize(n);
    for (long i = 0; i < n; i++) nhapDiem(arr[i]);
}

void xuatMang(vector<Point> &arr, long &n) {
    for (long i = 0; i < n; i++) {
        xuatDiem(arr[i]);
    }
}

bool Phu(const Point A, const Point B) {
    if (A.x != B.x)
        return A.x < B.x;
    return A.y > B.y;
}

int main() {
    vector<Point> arr;
    long n;
    nhapMang(arr, n);
    sort(arr.begin(), arr.end(), Phu);
    xuatMang(arr, n);
    return 0;
}
