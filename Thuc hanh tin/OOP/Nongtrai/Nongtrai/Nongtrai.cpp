#include "Giasuc.h"
#include "Cow.h"
#include "Sheep.h"
#include "Goat.h"
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Nhap so luong bo: ";
    cin >> a;
    cout << "Nhap so luong cuu: ";
    cin >> b;
    cout << "Nhap so luong de: ";
    cin >> c;
    int n = a + b + c;
    int conbo = 0, concuu = 0, conde = 0;
    int lit1 = 0, lit2 = 0, lit3 = 0;
    vector<Giasuc*> list(n);
    cout <<endl<< "\t\t\tTIENG KEU NGHE DUOC TRONG NONG TRAI LA: \n";
    for (int i = 0; i < a; i++)
    {
        list[i] = new Cow;
        list[i]->tiengkeu();
        lit1 += list[i]->sua();
        if (list[i]->getloai() == 1)
            conbo += list[i]->sinhcon();
    }
    for (int j = 0; j < b; j++)
    {
        list[j] = new Sheep;
        list[j]->tiengkeu();
        lit2 += list[j]->sua();
        if (list[j]->getloai() == 2)
            concuu += list[j]->sinhcon();
    }
    for (int k = 0; k < c; k++)
    {
        list[k] = new Goat;
        list[k]->tiengkeu();
        lit3 += list[k]->sua();
        if (list[k]->getloai() == 3)
            conde += list[k]->sinhcon();
    }
    cout << endl;
    cout << "\tSo luong bo ban dau la: " << a <<"\t"<<" || "<< "\t So luong bo con duoc sinh ra la: " << conbo << endl;
    cout << "\tSo luong cuu ban dau la: " << b << "\t" << " || " << "\t So luong cuu con duoc sinh ra la: " << concuu << endl;
    cout << "\tSo luong de ban dau la: " << c << "\t" << " || " << "\t So luong de con duoc sinh ra la: " << conde << endl;
    cout <<endl<< "\t\tTONG SO LUONG GIA SUC TRONG NONG TRAI SAU KHI SINH CON LA: " << endl;
    cout << endl;
    cout << "\t\t\t\t Tong so luong Bo la: " << a + conbo << endl;
    cout << "\t\t\t\t Tong so luong Cuu la: " << b + concuu << endl;
    cout << "\t\t\t\t Tong so luong De la: " << c + conde << endl;
    cout << "\t\t\t\t Tong so lit sua la: " << lit1 + lit2 + lit3;
    return 0;
}