#include <iostream> 
using namespace std; 
// Hàm nhập mảng 
void nhapmang(int a[], int n) 
{ 
 for (int i = 0; i < n; i++) 
 { 
  cout << "Nhap a[" << i << "] = "; 
  cin >> a[i]; 
 } 
} 

// Hàm xuất mảng 
void xuatmang(int a[], int n) 
{ 
 for (int i = 0; i < n; i++) 
  cout << a[i] << " "; 
 cout << endl; 
} 

// Hàm tính tổng các phần tử trong mảng 
int tongmang(int a[], int n) 
{ 
 int S = 0; 
 for (int i = 0; i < n; i++) 
  S += a[i]; 
 
 return S; 
} 

// Hàm đếm số lần xuất hiện 1 phần tử x bất kỳ 
int demphantuX(int a[], int n, int x) 
{ 
 int dem = 0; 
 for (int i = 0; i < n; i++) 
  if (a[i] == x) 
   dem++; 
 return dem; 
} 

// Hàm xuất các phần tử chẵn nhỏ hơn 20 
void xuatphantuchannhohon20(int a[], int n) 
{ 
 cout << "Cac phan tu chan nho hon 20: "; 
 for (int i = 0; i < n; i++) 
  if (a[i] % 2 == 0 && a[i] < 20) 
   cout << a[i] << " "; 
 cout << endl; 
} 

// Hàm tìm vị trí phần tử nhỏ nhất trong mảng 
int vtphantunhonhat(int a[], int n) 
{ 
 int min = a[0]; 
 int vt = 0; 
 for (int i = 1; i < n; i++) 
  if (a[i] < min) 
  { 
   min = a[i]; 
   vt = i; 
  } 
 return vt; 
} 

// Hàm xuất ra dãy nghịch đảo 
void nghichdaomang(int a[], int n) 
{ 
 cout << "Mảng nghịch đảo: \n"; 
 for (int i = n - 1; i >= 0; i--) 
  cout << a[i] << " "; 
 cout << endl; 
} 

// Hàm chính 
int main() 
{ 
 int a100, n; 
 int x; 
 
 // Nhap mang 
 do { 
  cout << "Nhap so phan tu cua mang: "; 
  cin >> n; 
  if (n < 1 || n > 100) 
   cout << "n phai >= 1 va <= 100\n"; 
 } while (n < 1 || n > 100); 
 
 cout << "Nhap cac phan tu: \n";
}