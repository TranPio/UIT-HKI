#include "Sanpham.h"

Sanpham::Sanpham()
{
    this->gt = gt;
    this->size = size;
    if (this->Getter_gt() == 1) {
        gt = "Nam";
    }
    else {
        gt = "Nu";
    }
}
void Sanpham::Nhap()
{
    cin.ignore();
    cout << "\n\t Nhap vao ma: ";
    getline(cin, Masanpham);
    cout << "\n\t Nhap vao ten san pham: ";
    getline(cin, Tensanpham);
    cout << "\n\t Nhap vao mau(LUU Y: NHAP VAO TRANG,DEN,XANH,VANG,DO,.....): ";
    getline(cin, Mau);
    cout << "\n\t Nhap vao gia san pham(LUU Y:NHAP VAO 1 CON SO): ";
    cin >> Dongia;
}

void Sanpham::Xuat(ostream& os) const
{
  
    os << Masanpham <<" "<< Tensanpham << " "<<Loai<<" "<<gt<<" "<<size<<" "<<Mau<<" " <<Dongia<< " " << TC << " ";

}
