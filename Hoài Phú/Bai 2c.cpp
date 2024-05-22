#include <iostream>
#include <math.h>
using namespace std;
	char str[1000];
		float a,b,s;
int main(){
	cout<<"Nhap ten san pham: ";
	cin>>str;
	cout<<"Nhap so luong: ";
	cin>>a;
	cout<<"Nhap don gia: ";
	cin>>b;
	s=a*b;
	cout<<"So tien la: "<<s<<endl;
    cout<<"Thue gia tri gia tang: "<<s*10/100<<endl;
    return 0;
}
