#include <iostream>
using namespace std;

struct Point {
    int x, y, z;
};

void merge(Point arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    Point L[n1], R[n2];
    for (int i = 0; i < n1; i++) {
        L[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++) {
        R[i] = arr[m + 1 + i];
    }
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (L[i].x < R[j].x) {
            arr[k++] = L[i++];
        } else if (L[i].x == R[j].x) {
            if (L[i].y > R[j].y) {
                arr[k++] = L[i++];
            } else if (L[i].y == R[j].y && L[i].z < R[j].z) {
                arr[k++] = L[i++];
            } else {
                arr[k++] = R[j++];
            }
        } else {
            arr[k++] = R[j++];
        }
    }
    while (i < n1) {
        arr[k++] = L[i++];
    }
    while (j < n2) {
        arr[k++] = R[j++];
    }
}

void mergeSort(Point arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

int main() {
    int n;
    cin >> n;
    Point points[n];
    for (int i = 0; i < n; i++) {
        cin >> points[i].x >> points[i].y >> points[i].z;
    }
    mergeSort(points, 0, n - 1);
    for (int i = 0; i < n; i++) {
        cout << points[i].x << " " << points[i].y << " " << points[i].z << endl;
    }
    return 0;
}
