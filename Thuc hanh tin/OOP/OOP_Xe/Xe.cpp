#include <bits/stdc++.h>
using namespace std;
class linhkien
{
protected:
    string ms;
    string loai;
    double cost;
    string hang;
public:
    void setloai(string loai)
    {
        this->loai=loai;
    }
    void setcost(double cost)
    {
        this->cost=cost;
    }
    void sethang(string hang)
    {
        this->hang=hang;
    }
    double getcost()
    {
        return cost;
    }
    string getloai()
    {
        return loai;
    }
    string gethang()
    {
        return hang;
    }
    string getms()
    {
        return ms;
    }

};
class dongco: public linhkien
{
protected:
    int tieuchuan=0;
public:
    void nhap()
    {
        cin>>ms>>loai;
        if(loai=="B")
        {
            cin>>tieuchuan;
            if(tieuchuan==1) cost=600;
            if(tieuchuan==2) cost=700;
            if(tieuchuan==3) cost=800;

        }
        if(loai=="A") cost=500;
        if(loai=="C") cost=400;
        cin>>hang;
    }
    string getloai()
    {
        string newloai=loai;
        if(tieuchuan==1)
            newloai=newloai+" 1";
        if(tieuchuan==2)
            newloai=newloai+" 2";
        if(tieuchuan==3)
            newloai=newloai+" 3";
        return newloai;
    }
    void xuat()
    {
        cout<<"Dong Co:"<<endl;
        cout<<"\tMS:"<<this->ms<<endl;
        cout<<"\tLoai:"<<getloai()<<endl;
        cout<<"\tGia:"<<this->cost<<endl;
        cout<<"\tHang:"<<this->hang<<endl;
    }
};
class banhxe1:public linhkien
{
protected:
public:
    void nhap()
    {
        cin>>ms>>loai;
        if(loai=="D") cost=400;
        if(loai=="E") cost=300;
        cin>>hang;
    }
    void xuat()
    {
        cout<<"Banh xe 1:"<<endl;
        cout<<"\tMS:"<<this->ms<<endl;
        cout<<"\tLoai:"<<this->loai<<endl;
        cout<<"\tGia:"<<this->cost<<endl;
        cout<<"\tHang:"<<this->hang<<endl;
    }
};
class banhxe2:public banhxe1
{
protected:
public:
    void xuat()
    {
        cout<<"Dong Co:"<<endl;
        cout<<"\tMS:"<<this->ms<<endl;
        cout<<"\tLoai:"<<this->loai<<endl;
        cout<<"\tGia:"<<this->cost<<endl;
        cout<<"\tHang:"<<this->hang<<endl;
    }
};
class khung:public linhkien
{
protected:
public:
    void nhap()
    {
        cin>>ms>>loai;
        if(loai=="nhom") cost=500;
        if(loai=="nhua") cost=200;
        cin>>hang;
    }
    void xuat()
    {
        cout<<"Dong Co:"<<endl;
        cout<<"\tMS:"<<this->ms<<endl;
        cout<<"\tLoai:"<<this->loai<<endl;
        cout<<"\tGia:"<<this->cost<<endl;
        cout<<"\tHang:"<<this->hang<<endl;
    }
};
class xe
{
protected:
    string ms;
    dongco ifdongco;
    banhxe1 ifbanhxe1;
    banhxe2 ifbanhxe2;
    khung ifkhung;
public:
    void nhapxe()
    {
        cout<<"nhap ms xe:"<<endl;
        cin>>this->ms;
        cout<<"nhap thong tin dong co:"<<endl;
        ifdongco.nhap();
        cout<<"nhap thong tin banh xe 1:"<<endl;
        ifbanhxe1.nhap();
        cout<<"nhap thong tin banh xe 2:"<<endl;
        ifbanhxe2.nhap();
        cout<<"nhap thong tin khung xe:"<<endl;
        ifkhung.nhap();
    }
    void xuatxe()
    {
        cout<<"Xe MS:"<<this->ms<<endl;
        ifdongco.xuat();
        ifbanhxe1.xuat();
        ifbanhxe2.xuat();
        ifkhung.xuat();


    }
    double thanhtien()
    {
        double s=0;
        s=s+ifdongco.getcost()+ifbanhxe1.getcost()+ifbanhxe2.getcost()+ifkhung.getcost();
        return s;
    }
};
int main()
{
   // ofstream cout ("output.txt");
    //xe A;
    int n;
    cin>>n;
    xe *A=new xe[n];

    for(int i=0;i<n;i++)
    {
        (A+i)->nhapxe();
        (A+i)->xuatxe();
        cout<<(A+i)->thanhtien()<<endl;
    }

}
