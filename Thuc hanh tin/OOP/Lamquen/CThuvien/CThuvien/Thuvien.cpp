#include "Thuvien.h"
#include "CDocGiaTreEm.h"
#include "CDocGiaNguoiLon.h"

void Thuvien::Nhap()
{
    while (true) {
        int luachon;
        system("cls");
        cout << "\n\n\t\t \================THU VIEN X================ ";
        cout << "\n\t 1.Doc gia tre em";
        cout << "\n\t 2.Doc gia nguoi lon";
        cout << "\n\t 0.Thoat";
        cout << "\n\n\t\t \================END================ ";
        cout << "\n Nhap lua chon: ";
        cin >> luachon;
        CDocGia* x;
        if (luachon == 1) {
            x = new CDocGiaTreEm;
            cout << "\n\n\t\t NHAP THONG TIN DOC GIa\n";
            x->Nhap();
            x->Setter_KT(true);
            ds_cdocgia.push_back(x);

        }
        else if (luachon == 2) {
             x=new CDocGiaNguoiLon;
            cout << "\n\n\t\t NHAP THONG TIN DOC GIa\n";
            x->Nhap();
            x->Setter_KT(false);
            ds_cdocgia.push_back(x);
        }
        else {
            break;
        }
    }
}

void Thuvien::Xuat()
{
    int dem = 0;
    int dem1 = 0;
    for (int i = 0; i < ds_cdocgia.size(); i++) {
        if (ds_cdocgia[i]->Getter_KT() == true) {
            cout << "\n\n\t\t Thong tin doc gia tre em thu " << ++dem<< " la: " << endl;
            ds_cdocgia[i]->Xuat();
        }
        else {
            cout << "\n\n\t\t Thong tin doc gia nguoi lon thu " << ++dem1 << " la: " << endl;
            ds_cdocgia[i]->Xuat();
        }
    }
}

int Thuvien::Tong_tien_lam_the()
{
    int sum = 0;
    for (int i = 0; i < ds_cdocgia.size(); i++) {
        sum += ds_cdocgia[i]->Tinh_tien();
    }
    return sum;
}

Thuvien::Thuvien()
{
}

Thuvien::~Thuvien()
{
}
