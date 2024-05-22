#include<iostream>
#include<math.h>
using namespace std;
struct DIEM{
    float Ox,Oy,KC;
};
void NhapToaDo(DIEM *a, DIEM *b){
    cout<<"Nhap toa do diem A: \n";
    cout<<"Truc Ox: ";
    cin>>a->Ox;
    cout<<"Truc Oy: ";
    cin>>a->Oy;
    cout<<"Nhap toa do diem B: \n";
    cout<<"Truc Ox: ";
    cin>>b->Ox;
    cout<<"Truc Oy: ";
    cin>>b->Oy;
}
void XuatToaDo(DIEM a, DIEM b){
    cout<<"Toa do diem A("<<a.Ox<<","<<a.Oy<<").\n";
    cout<<"Toa do diem B("<<b.Ox<<","<<b.Oy<<").\n";
}
int KhoangCach(DIEM a, DIEM b){
    DIEM DoDai,VectorC;
    VectorC.Ox = a.Ox - b.Ox;
    VectorC.Oy = a.Oy - b.Oy;
    cout<<" Vector C("<<VectorC.Ox<<","<<VectorC.Oy<<").";
    DoDai.KC = sqrt(VectorC.Ox*VectorC.Ox + VectorC.Oy*VectorC.Oy);
    cout<<"Do dai cua 2 diem A va B la: "<<DoDai.KC;
}
int DiemDoiXung(DIEM a){
    DIEM c; 
    c.Ox = a.Ox * (-1);
    c.Oy = a.Oy * (-1);
    cout<<" ("<<c.Ox<<","<<c.Oy<<").\n";
}
int DiemDoiXungQuaOx(DIEM a){
    DIEM c;
    c.Ox = a.Ox;
    c.Oy = (-1)*a.Oy;
    cout<<" ("<<c.Ox<<","<<c.Oy<<").\n"; 
}
int DiemDoiXungQuaOy(DIEM a){
    DIEM c;
    c.Ox = (-1)*a.Ox;
    c.Oy = a.Oy;
    cout<<" ("<<c.Ox<<","<<c.Oy<<").\n";
}
int main(){
    DIEM A, B;
    DIEM *ptr1 = &A;
    DIEM *ptr2 = &B;
    NhapToaDo(ptr1, ptr2);
    XuatToaDo(*ptr1, *ptr2);
    KhoangCach(*ptr1,*ptr2);
    cout<<"\nDiem A doi xung qua goc toa do la:";
    DiemDoiXung(*ptr1);
    cout<<"Diem B doi xung qua goc toa la:";
    DiemDoiXung(*ptr2);
    cout<<"Diem doi xung cua A qua Ox la:";
    DiemDoiXungQuaOx(*ptr1);
    cout<<"Diem doi xung cua A qua Ox la:";
    DiemDoiXungQuaOx(*ptr2);
    cout<<"Diem doi xung cua A qua Oy la:";
    DiemDoiXungQuaOy(*ptr1);
    cout<<"Diem doi xung cua A qua Oy la:";
    DiemDoiXungQuaOy(*ptr2);

}