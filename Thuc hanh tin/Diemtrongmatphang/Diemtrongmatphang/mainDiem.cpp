#include <iostream>
#include "Diem.h"
using namespace std;
int main() {
    Diem A; 
    A.nhap();
    int a, b;
    cout << "Nhap tinh tien theo hoanh do: ";
    cin >> a;
    cout << "Nhap tinh tien theo tung do: ";
    cin >> b;
    A.tinhtien(a, b); 
    A.xuat();
    return 0;
 }