#include<iostream>
using namespace std;
bool isCheck(int nam) {
    return ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0);
} // kiem tra nam nhuan
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
     if(thang==1||thang==3||thang==5||thang==7||thang==8||thang==10||thang==12){
     cout<<"31 ngay";
     return;
 }
     if(thang==4||thang==6||thang==9||thang==11){
	 cout<<"30 ngay";
	 return;
}
	 if(thang==2){
	  if (isCheck(nam)){
	  cout<<"29 ngay";
	  return;
}
	  else{
	  cout<<"28 ngay";
	  return;
 }}
}
int main(){
  kt();
    return 0;
}