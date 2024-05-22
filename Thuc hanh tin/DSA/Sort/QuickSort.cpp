#include <iostream>
#define fi "quicksort.txt"
using namespace std;

void swap (int a[], int x, int y) {
    int temp = a[x];
    a[x] = a[y];
    a[y] = temp;
}
int partition(int a[], int left, int right) {
    //Gan gtri pivot
    int pivot = a[left];
    //Dem so phan tu nho hon so voi pivot
    int count = 0;
    for (int i=left+1; i<=right; i++) {
        if (a[i]<=pivot) {
            count ++;
        }
    }
    //Xd dc dia chi cua pivot (pivotIndex)
    int pivotIndex = left + count;
    //Doi cho left voi pivotIndex
    swap (a, left, pivotIndex);
    //Sap xep cac gia tri nho hon sang ben trai va lon hon sang ben pai pivot
    int i=left;
    int j=right;
    while (i<pivotIndex && j>pivotIndex) {
        while(a[i]<=pivot) {
            i++;
        }
        while(a[j]>=pivot) {
            j--;
        }
        if (i<pivotIndex && j>pivotIndex) {
            swap (a,i, j);
        }
    }
    return pivotIndex;
}
void QuickSort(int a[], int left, int right) {
    if (left >= right) {
        return;
    }
    //Chia
    int pivot = partition(a, left, right);
    //Goi de quy (Tri)
    QuickSort(a,left,pivot-1);
    QuickSort(a, pivot+1, right);

}

int main() {
    freopen(fi,"r",stdin);
    int a[1000];
    int n;
    cin >> n;
    //cout<< "Nhap day so ban dau: ";
    for (int i=0; i<n; i++) {
        cin>> a[i];
    }
    QuickSort(a, 0, n-1);
    //cout << "Day so sau khi sap xep: ";
    for (int i=0; i<n; i++) {
        cout << a[i] << " ";
    }
}
