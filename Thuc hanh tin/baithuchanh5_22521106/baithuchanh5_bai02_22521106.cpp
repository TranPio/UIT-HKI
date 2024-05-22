#include <iostream>
#include <math.h>
using namespace std;
void nhapmang(int a[][100], int &n, int &m)
{
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
        {
            cout << "a[" << i << "][" << j << "]=";
            cin >> a[i][j];
        }
}
void xuatmang(int a[][100], int n, int m)
{
    cout << "Ma tran la:" << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            cout << a[i][j] << "\t";
        cout << endl;
    }
}
int MAX(int a[][100], int n, int m)
{
    int max = a[0][0];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] > max)
                max = a[i][j];
        }
    return max;
}
void trendcc(int a[][100], int n, int m)
{
    cout << "\nCac gia tri nam nua tren duong cheo chinh la: ";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            if (i <= j)
                cout << a[i][j] << " ";
        }
}
void Minrow(int a[][100], int n, int m)
{
    int min;
    for (int i = 0; i < n; i++)
    {
        min = a[i][0];
        for (int j = 1; j < m; j++)
        {
            if (a[i][j] < min)
                min = a[i][j];
            
        }
        cout << "\nDong " << i + 1 << " co gia tri nho nhat la: " << min;
    }
}
void Maxcol(int a[][100], int n, int m)
{
    int max;
    for (int j = 0; j < m; j++)
    {
        max = a[0][j];
        for (int i = 1; i < n; i++)
        {
            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
        cout << "\nCot " << j + 1 << " co gia tri lon nhat la: " << max;
    }
}
bool ktsnt(int x)
{
    if (x < 2)
        return false;
    if (x == 2 || x == 3)
        return true;
    if ( x % 2==0 || x % 3 == 0)
        return false;
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int a[100][100], n, m;
    cout << "Nhap so luong hang: ";
    cin >> n;
    cout << "Nhap so luong cot: ";
    cin >> m;
    cout << "Nhap ma tran:" << endl;
    nhapmang(a, n, m);
    xuatmang(a, n, m);
    cout << "\nGia tri lon nhat trong mang la: " << MAX(a, n, m);
    trendcc(a, n, m);
    Minrow(a, n, m);
    Maxcol(a, n, m);
    cout << "\nCac so nguyen to trong ma tran la: ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {

            if (ktsnt(a[i][j]))
                cout << a[i][j] << " ";
        }
    }
}
