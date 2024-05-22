
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

void Nhap(SinhVien A[], int& n) {
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n ; i++) {
        cin.getline(A[i].MASV, 10);
        cin.getline(A[i].HoTen, 100);
        cin.getline(A[i].NgaySinh, 12);
        cin >> A[i].GioiTinh;
        cin >> A[i].DiemToan >> A[i].DiemLy >> A[i].DiemHoa;
        A[i].DTB = (A[i].DiemToan + A[i].DiemLy + A[i].DiemHoa) / 3;
    }
}

void SapXepGiamTheoMASV(SinhVien A[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(A[i].MASV, A[j].MASV) <0) {
                SinhVien temp = A[i];
                A[i] = A[j];
                A[j] = temp;
            }
        }
    }
}

void Xuat(SinhVien A[], int n) {
    for (int i = 0; i < n; i++) {
        cout << A[i].MASV << '\t' << A[i].HoTen <<'\t' <<A[i].NgaySinh << '\t' << A[i].GioiTinh << '\t'
             << A[i].DiemToan << '\t' <<A[i].DiemLy <<'\t' <<A[i].DiemHoa << '\t' <<fixed<<setprecision(2)
             << A[i].DTB << endl;
    }
}

int main() {
    SinhVien A[MAXN];
    int n;
    Nhap(A, n);
    SapXepGiamTheoMASV(A, n);
    Xuat(A, n);
    return 0;
}

