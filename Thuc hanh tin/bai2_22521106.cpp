#include <iostream>
#include <math.h>
#include<string.h>
using namespace std;
void kituhoakhongtrung(string s){
    for (int i=0; i<s.size(); i++){
            if(s[i]>='A' && s[i]<='Z'){
                int j;
                for (j=0; j<i; j++){
                    if (s[i] == s[j])
                        break;
                }
                if (i==j) cout<<s[i]<< " ";
            }
    }
}
void kituvietthuong(string s){
    for (int i=0; i<s.size(); i++){
        if (i%2!=0 && s[i]>='a' && s[i]<='z')
            cout<<s[i];
    }
}
void kituxuathien1lan(string s){
    for (int i=0; i<s.size(); i++){
        int d=0;
        for (int j=0; j<s.size(); j++){
            if (s[i] == toupper(s[j]) && s[i] == s[j])
                d++;
        }
        if (d==1) cout<<s[i]<<" ";
    }
}
void xoakhoangtrang(string s){
    string thaydoi;
    for (int i=0; i<s.size(); i++){
        if (s[i]!=' ')
            thaydoi+=s[i];
    }
    cout<<thaydoi;
}
int main(){
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);
    cout<<"Cac ki tu in hoa trong chuoi la: ";
    kituhoakhongtrung(s);
    cout<<endl;
    cout<<"Cac ki tu viet thuong o vi tri le la: ";
    kituvietthuong(s);
    cout<<endl;
    cout<<"Cac ki tu in hoa xuat hien 1 lan la: ";
    kituxuathien1lan(s);
    cout<<endl;
    cout<<"Chuoi sau khi xoa khoang trang la: ";
    xoakhoangtrang(s);
    cout<<endl;
    return 0;
}