#include <bits/stdc++.h>
using namespace std;
const int ch_MAX = 26;
const int ch_MAX_dongco=3;
const int ch_MAX_banhxe=2;
const int ch_MAX_khung=2;
string RandomString(int ch)
{
    srand(time(NULL)*10);
    char alpha[ch_MAX] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g',
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',
                          'o', 'p', 'q', 'r', 's', 't', 'u',
                          'v', 'w', 'x', 'y', 'z' };
    string result = "";
    for (int i = 0; i<ch; i++)
        result = result + alpha[rand() % ch_MAX];

    return result;
}
string Randomloaidongco(int ch)
{
    srand(time(NULL)*10);

    char alpha[ch_MAX_dongco] = { 'A', 'B', 'C'};
    string result = "";
    for (int i = 0; i<ch; i++)
        result = result + alpha[rand() % ch_MAX_dongco];
    if(result=="B")
    {
        result=result+" 1";
    }
    return result;
}
string Randomloaibanhxe(int ch)
{
srand(time(NULL)*10);
    char alpha[ch_MAX_banhxe] = { 'D', 'E'};
    string result = "";
    for (int i = 0; i<ch; i++)
        result = result + alpha[rand() % ch_MAX_banhxe];
    return result;
}
string Randomloaikhung(int ch)
{
srand(time(NULL)*10);
    char alpha[ch_MAX_khung] = { 'D', 'E'};
    string result = "";
    for (int i = 0; i<ch; i++)
        result = result + alpha[rand() % ch_MAX_khung];
        if(result=="D")
            return "nhom";
        if(result=="E")
            return "nhua";
    return "nhom";
}
int main()
{
    ofstream cout ("test.txt");
    int n=1000;
    cout<<1000<<endl;
    for(int i=1;i<=n;i++)
    {
        srand(time(NULL)*13);
        //int ch = rand() % (10 - 1 + 1) + 1;
        int ms=10;
        cout<<RandomString(ms)<<endl;

        srand(time(NULL)*10);
        int msdongco=5;
        cout<<RandomString(msdongco)<<endl;
        int loaidongco=1;
        cout<<Randomloaidongco(loaidongco)<<endl;
        int hangdongco=13;
        cout<<RandomString(hangdongco)<<endl;

        srand(time(NULL)*11);
        int msbanhxe=5;
        cout<<RandomString(msbanhxe)<<endl;
        int loaibanhxe=1;
        cout<<Randomloaibanhxe(loaibanhxe)<<endl;
        int hangbanhxe=13;
        cout<<RandomString(hangbanhxe)<<endl;

        srand(time(NULL)*16);
        //int msbanhxe=5;
        cout<<RandomString(msbanhxe)<<endl;
        //int loaibanhxe=1;
        cout<<Randomloaibanhxe(loaibanhxe)<<endl;
        //int hangbanhxe=13;
        cout<<RandomString(hangbanhxe)<<endl;

        srand(time(NULL)*100);
        int mskhung=5;
        cout<<RandomString(mskhung)<<endl;
        int loaikhung=4;
        cout<<Randomloaikhung(loaikhung)<<endl;
        int hangkhung=13;
        cout<<RandomString(hangkhung)<<endl<<endl;

    }

	return 0;
}
