#include <bits/stdc++.h>
using namespace std;
class KY_HIEU
{
protected:
    string ten;
    double truong_do;
    string dscaodo={"CDEFGAB"};
public:
    virtual void nhap()
    {
        cout<<"nhap ten:"<<endl;
        cin>>ten;
        cout<<"nhap truong do:"<<endl;
        cin>>truong_do;
    }
    virtual void xuat()
    {
        cout<<"ten: "<<ten<<endl;
        cout<<"truong do: "<<truong_do<<endl;
    }
    //virtual bool daulangden()=0;
    //virtual void notnhaccaonhat()=0;
};
class NOT_NHAC:public KY_HIEU
{
private:
    string cao_do;
public:
    void nhap()
    {
        KY_HIEU::nhap();
        cout<<"nhap cao do:"<<endl;
        cin>>cao_do;
    }
    void xuat()
    {
        KY_HIEU::xuat();
        cout<<"cao do la:"<<cao_do<<endl;
    }
    string getcaodo()
    {
        return cao_do;
    }
};
class DAU_LANG:public KY_HIEU
{
public:
    void nhap()
    {
        KY_HIEU::nhap();
    }
    void xuat()
    {
        KY_HIEU::xuat();
    }
};
class BAN_NHAC
{
private:
    vector <KY_HIEU*> NOT;
    vector <KY_HIEU*> DAU;
public:
    void nhap()
    {
        KY_HIEU *x;
        bool check;
        int option;
        while(check=true)
        {
            cout<<"chon option:"<<endl;
            cout<<"1.nhap not nhac"<<endl;
            cout<<"2.nhap dau lang"<<endl;
            cin>>option;
            if(option==1)
            {
               x=new NOT_NHAC;
                x.nhap();
                NOT.push_back(x);
            }
            if(option==2)
            {
                x=new DAU_LANG;
                x.nhap();
                DAU.push_back(x);
            }
        }
    }
    int demdaulangden()
    {
        int dem=0;
        for(int i=0;i<DAU.size();i++){


            }
        }
        return dem;
    }

};
int main()
{

}
