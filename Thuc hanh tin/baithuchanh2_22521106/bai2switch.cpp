#include<iostream>
using namespace std;
bool isCheck(int nam) {
    return ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0);
}
void kt(){
	int thang, nam;
        cout << "Nhap thang: ";
        cin >>thang;
        if(thang < 1 || thang >12){
     cout << "So thang nhap khong hop le"<<endl;
     return ;
 }
        cout << "Nhap nam: ";
        cin >> nam;
     if(nam<=1975){
     cout << "So nam nhap khong hop le"<<endl;
     return;
 }
     switch (thang)
    {
    case 1: cout<<"31 ngay"; break;
    case 3: cout<<"31 ngay"; break;
    case 5: cout<<"31 ngay"; break;
    case 7: cout<<"31 ngay"; break;
    case 8: cout<<"31 ngay"; break;
    case 10: cout<<"31 ngay"; break;
    case 12: cout<<"31 ngay"; break;
    case 4: cout<<"30 ngay"; break;
    case 6: cout<<"30 ngay"; break;
    case 9: cout<<"30 ngay"; break;
    case 11: cout<<"30 ngay"; break;
    case 2:
        if (isCheck(nam)){
           cout<<"29 ngay"; break; }
        else{
            cout<<"28 ngay"; break; }
    default:
        cout << "So thang nhap khong hop le"<<endl;
        exit(0);
    }
}
int main()
{
  	kt();
    return 0;
}