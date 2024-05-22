#include<bits/stdc++.h>
using namespace std;
void tongsole(int *a,int n)
{
	int tong=0;
	for(int i=0;i<n;i++)
	if(a[i]%2!=0)
	tong=tong+a[i];
	cout<<tong;
	cout<<endl;	
}
void timxxuathien2lan(int *a,int n,int x)
{
	int dem=0;
	for(int i=0;i<n;i++)
	if(a[i]==x)
	{
		dem++;
	}
	if(dem==2){
	cout<<"So "<<x<<" xuat hien 2 lan trong mang";
}
	else
	{
	cout<<"So "<<x<<" khong xuat hien 2 lan trong mang";
}
}
void cacsolenhohon20(int *a,int n)
{
	for(int i=0;i<n;i++)
	if(a[i]%2!=0 && a[i]<20)
	cout<<a[i]<<" ";
	else 
	cout<<"Trong mang khong co so le va la so nho hon 20";
}
void vitriphantulonnhat(int *a,int n){
	int max=a[0];
	int dem=1;
	for(int i=1;i<n;i++)
	{
     if(a[i]>max){
	 
	 a[i]=max;		
	}
	else if(a[i]==max)
	{
		dem++;
	}
}
	if (dem==1) {
        for (int i=0;i<n;i++) {
            if (a[i]==max) {
                cout<<"Vi tri co gia tri max la: " <<i<<endl;
                break;
            }
        }
    } else {
        cout << "Cac vi tri co gia tri max la: ";
        for (int i=0;i<n;i++) {
            if (a[i] ==max) {
                cout<<i<<" ";
            }
        }
	}
}
int main()
{
    int n;
    cout<<"Nhap so luong phan tu cua mang: ";
    cin >> n;
    while(n<0) {
    cout<<"So luong phan tu phai lon hon 0. Nhap lai: ";
    cin>>n;
  }
    int *a= new int[n];
    for (int i=0;i<n;i++){
      cout<<"a["<<i<<"]="<<" ";
        cin >> a[i];
    }
    cout<<endl;
    cout<<"Tong cac so le trong mang la: ";
    tongsole(a,n);
    cout<<endl;
    cout<<"Cac so le va la so nho hon 20 la: ";
    cacsolenhohon20(a,n);
    cout<<endl;
    int x;
    cout<<"Nhap so x: ";
    cin>>x;
    timxxuathien2lan(a,n,x);
    cout<<endl;
    vitriphantulonnhat(a,n);
    cout<<endl;
    return 0;
}