#include <iostream>
#include <math.h>
#include<string.h>
using namespace std;
//Xuất cac ki tu in hoa trong chuoi
void in_hoa(string s){
    for (int i=0; i<s.size(); i++){
            if(s[i]>='A' && s[i]<='Z'){
                int j;
                for (j=0; j<i; j++){
                    if (s[i] == s[j])
                        break;
                }
                if (i == j) cout<<s[i]<< " ";
            }
    }
}
//In ra cac ki tu o vi tri le va la ki tu viet thuong
void viet_thuong(string s){
    for (int i=0; i<s.size(); i++){
        if (i%2!=0 && s[i]>='a' && s[i]<='z')
            cout<<s[i];
    }
}
//In ra các kí tự in hoa xuất hiện 1 lần
void xuat_hien_1_lan(string s){
    for (int i=0; i<s.size(); i++){
        int dem=0;
        for (int j=0; j<s.size(); j++){
            if (s[i] == toupper(s[j]) && s[i] == s[j])
                dem++;
        }
        if (dem==1) cout<<s[i]<<" ";
    }
}
//Xóa khoảng trắng trong chuỗi
void xoa_khoang_trang(string s){
    string news;
    for (int i=0; i<s.size(); i++){
        if (s[i]!=' ')
            news+=s[i];
    }
    cout<<news;
}
int main(){
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);
    cout<<"\nCac ki tu in hoa trong chuoi: ";
    in_hoa(s);
    cout<<"\nCac ki tu viet thuong o vi tri le: ";
    viet_thuong(s);
    cout<<"\nCac ki tu in hoa xuat hien 1 lan: ";
    xuat_hien_1_lan(s);
    cout<<"\nChuoi sau khi xoa khoang trang: ";
    xoa_khoang_trang(s);
    return 0;
}