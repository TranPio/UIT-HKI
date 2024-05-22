#include <iostream>
#include <math.h>
using namespace std;
void nhapmang(int a[], int &n)
{
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "]=";
        cin >> a[i];
    }
}
void xuatmang(int a[], int n)
{
    cout << "Mang: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
}
int tongmang(int a[], int &n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
        s = s + a[i];
    return s;
}
void dem(int a[], int n, int x)
{
    int demptx = 0;
    for (int i = 0; i < n; i++)
        if (a[i] == x)
            demptx++;
    cout << "So phan tu " << x << " xuat hien trong mang la: " << demptx;
}
void xuatnho(int a[], int n)
{
    cout << "\nPhan tu chan nho hon 20 la: ";
    for (int i = 0; i < n; ++i)
    {
        if (a[i] % 2 == 0 && a[i] < 20)
            cout << a[i] << " ";
    }
}
void timvt(int a[], int n)
{
    int min = a[0], vt = 0;
    cout << "\nVi tri nho nhat trong mang la: ";
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= min)
        {
            min = a[i];
            vt = i;
            cout << vt << " ";
        }
    }
}
void daomang(int a[], int n)
{

    int dao = 0;
    for (int i = 0; i < n/2; i++)
    {
        dao = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = dao;
    }
    cout << "\nMang dao nguoc la: ";
    for (int i = 0; i < n; i++)
        cout << a[i]<<"\t";
}
int main()
{
    int n, a[100001], x;
    nhapmang(a, n);
    xuatmang(a, n);
    cout << "\nTong cua cac phan tu trong mang la: " << tongmang(a, n);
    cout << "\nNhap phan tu x can kiem tra: ";
    cin >> x;
    dem(a, n, x);
    xuatnho(a, n);
    timvt(a, n);
    daomang(a, n);
    return 0;
}