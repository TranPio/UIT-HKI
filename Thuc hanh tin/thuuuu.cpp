#include <iostream>
#include <string>
#include <vector>
using namespace std;

class docgia
{
protected:
    string name;
    string ngay_lap;
    int so_thang;
public:
    virtual ~docgia() {}
    virtual void nhap();
    virtual void xuat();
    virtual int tinh_tien() = 0;
};

class treem : public docgia {
private:
    string dai_dien;
public:
    void nhap();
    void xuat();
    int tinh_tien();
};
class nguoilon : public docgia {
private:
    string cccd;
public:
    void nhap();
    void xuat();
    int tinh_tien();
};
class thuvien {
private:
    vector <docgia*> ds_docgia;
public:
    void nhap();
    void xuat();
    int tong_tien();
};

void docgia::nhap()
{
    cin.ignore();
    cout << "Nhap ho ten: ";
    getline(cin, name);
    cout << "Nhap ngay lap the: ";
    getline(cin, ngay_lap);
    cout << "Nhap so thang co hieu luc: ";
    cin >> so_thang;
}

void docgia::xuat()
{
    cout << "Ho ten: " << name;
    cout << "\nNgay lap the: " << ngay_lap;
    cout << "\nSo thang co hieu luc: " << so_thang;
    cout << "\nSo tien phai tra: " << tinh_tien() << " VND\n";
}

void treem::nhap()
{
    docgia::nhap();
    cout << "Nhap ten nguoi dai dien: ";
    cin.ignore();
    getline(cin, dai_dien);
}

void treem::xuat()
{
    docgia::xuat();
    cout << "Ten nguoi dai dien: " << dai_dien << endl;
}

int treem::tinh_tien()
{
    return so_thang * 5000;
}

void nguoilon::nhap()
{
    docgia::nhap();
    cout << "Nhap cccd: ";
    cin.ignore();
    getline(cin, cccd);
}

void nguoilon::xuat()
{
    docgia::xuat();
    cout << "CCCD: " << cccd << endl;
}

int nguoilon::tinh_tien()
{
    return so_thang * 10000;
}

void thuvien::xuat()
{
    cout << "\n========= DANH SACH DOC GIA ========="<<endl;
    for (int i = 0; i < ds_docgia.size(); i++) {
        cout<<" THONG TIN DOC GIA THU "<<i<<endl;
        ds_docgia[i]->xuat();
    }
}
void thuvien::nhap()
{
    int chon;
    while (true) {
        system("cls");
        cout << "Chon 1 neu ban la tre em, 2 neu la nguoi lon: ";
        cin >> chon;
        docgia* x;

        if (chon == 1) {
            treem *x = new treem;
            cout << "NHAP THONG TIN DOC GIA: " << endl;
            cin.ignore();
            x->nhap();
           // x->xuat();
            ds_docgia.push_back(x);
            delete x;
        }
        else if (chon == 2) {
           nguoilon *x = new nguoilon;
            cout << "NHAP THONG TIN DOC GIA: "<<endl;
            cin.ignore();
            x->nhap();
           // x->xuat();
            ds_docgia.push_back(x);
            delete x;
        }
        else {
    x->xuat();
    }
}
}

int thuvien::tong_tien()
{
    int sum = 0;
    for (int i = 0; i < ds_docgia.size(); i++) {
        sum += ds_docgia[i]->tinh_tien();
    }
    return sum;
}

int main() {
    thuvien *n=new thuvien;
    n->nhap();
    n->xuat();
    cout << "TONG TIEN LAM THE: " << n->tong_tien() << " VND";
    delete n;
    return 0;
}
