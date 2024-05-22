#include <bits/stdc++.h>
using namespace std;
void nhapmang(int arr[], int &n)
{
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]=";
        cin >> arr[i];
    }
}
void xuatmang(int arr[], int n)
{
    cout << "Mang: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
// Tính tổng các phần tử trong mảng
int sum(int arr[], int n) 
{ 
    int s = 0; 
    for (int i=0; i<n; i++) 
        s += arr[i]; 
    return s; 
} 

// b. Đếm số lần xuất hiện 1 phần tử x bất kỳ
int count(int arr[], int n, int x) 
{ 
    int c = 0; 
    for (int i=0; i<n; i++) 
        if (arr[i] == x) 
            c++; 
    return c; 
} 

// c. Xuất các phần tử chẵn nhỏ hơn 20
void printEvenNumbersLessThan20(int arr[], int n) 
{ 
    for (int i=0; i<n; i++) 
        if (arr[i] % 2 == 0 && arr[i] < 20) 
            cout << arr[i] << " "; 
} 

// d. Tìm vị trí phần tử nhỏ nhất trong mảng
int minPos(int arr[], int n) 
{ 
    int m = 0; 
    for (int i=1; i<n; i++) 
        if (arr[i] < arr[m]) 
            m = i; 
    return m; 
} 

// e. Xuất ra mảng đảo ngược
void reverse(int arr[], int n) 
{ 
    for (int i=n-1; i>=0; i--) 
            cout << arr[i] << " "; 
}
int main(){
	 int n, arr[10001], x;
    nhapmang(arr, n);
    xuatmang(arr, n);
    cout << "\nTong cua cac phan tu trong mang la: " << sum(arr, n)<<endl;
    cout << "\nNhap phan tu x can kiem tra: ";
    cin >> x;
    count(arr, n, x);
    printEvenNumbersLessThan20(arr, n);
    minPos(arr, n);
    reverse(arr, n);
    return 0;
}