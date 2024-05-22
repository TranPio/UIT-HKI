#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
#define MAXN 100

struct SinhVien {
    char MASV[10];
    char HoTen[100];
    char NgaySinh[12];
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};

void Nhap(SinhVien a[], int &n){
    cin>>n;
    for(int i = 0; i<n; i++){
    cin>>a[i].MASV;
    cin.ignore();
    cin.getline(a[i].HoTen,100);
    cin.getline(a[i].NgaySinhtr,12);
    cin>>a[i].GioiTinh;
    cin>>a[i].DiemToan;
    cin>>a[i].DiemLy;
    cin>>a[i].DiemHoa;
    }
}

void Xuat(SinhVien a[], int n){
    for (int i = 0; i < n; i++){
        a[i].DTB = (a[i].DiemToan + a[i].DiemLy + a[i].DiemHoa) / 3;
        cout  << a[i].MASV << '\t'<< a[i].HoTen << '\t'<< a[i].NgaySinh << '\t'<< a[i].GioiTinh << '\t'<< a[i].DiemToan << '\t'
              << a[i].DiemLy << '\t'
             << a[i].DiemHoa << '\t'
             << setw(8) << left << setprecision(3) << a[i].DTB << '\t';
        cout << endl;
    }
}
int partition(SinhVien A[], int low, int high) {
    SinhVien pivot = A[high];
    int left = low;
    int right = high - 1;
    while (true) {
        while (left <= right && strcmp(A[left].MASV, pivot.MASV) > 0)
            left++;
        while (right >= left && strcmp(A[right].MASV, pivot.MASV) < 0)
            right--;
        if (left >= right)
            break;
        swap(A[left], A[right]);
        left++;
        right--;
    }
    swap(A[left], A[high]);
    return left;
}

void quicksort(SinhVien A[], int low, int high) {
    if (low < high) {
        int pi = partition(A, low, high);
        quicksort(A, low, pi - 1);
        quicksort(A, pi + 1, high);
    }
}
void SapXepGiamTheoMASV(SinhVien a[],int n){
    quicksort(a,0,n-1);
}
int main() {
    SinhVien A[MAXN];
    int n;
    Nhap(A, n);
    SapXepGiamTheoMASV(A, n);
    Xuat(A, n);
    return 0;
}
