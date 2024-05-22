#include <iostream>
using namespace std;

void InterchangeSort(int a[], int n){
    for (int i=0;i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if (a[j] < a[i]){
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}
int main(){
    int n, a[100];
    cout << "Nhap so luong phan tu: ";
    cin >> n;
    cout << "Nhap phan tu: ";
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    InterchangeSort(a,n);
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    return 0;
}