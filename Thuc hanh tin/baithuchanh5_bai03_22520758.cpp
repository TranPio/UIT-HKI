#include <iostream>
using namespace std;
void xuatkytu(string s)
{
    int dem = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
            cout << s[i] << ' ';
    }
}
void daochuoi(string s)
{
    for (int i = s.size(); i >= 0; i--)
        cout << s[i];
}
void hoathuong(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (i % 2 == 0)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] -= 32;
        }
        if (i % 2 != 0)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] += 32;
        }
        cout << s[i];
    }
}
void xuathien1(string s)
{
    int dem = 0;
    for (int i = 0; i < s.size(); i++)
    {
        {
            if (s[i] == s[i - 1])
            {
                dem++;
            }
            else
                cout << s[i] << ' ';
        }
    }
}
void removespace(string s)
{
    int dem = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
            dem++;
        else
            break;
    }
    for (int i = s.size(); i <= 0; i--)
    {
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
            dem++;
        else
            break;
    }
    for (int i = 0; i <= s.size() - dem; i++)
    {
        s[i] = s[i + dem];
        cout << s[i];
    }
}
int main()
{
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);
    cout << "\nCac ky tu thuong trong chuoi la: ";
    xuatkytu(s);
    cout << "\nChuoi sau khi dao nguoc la: ";
    daochuoi(s);
    cout << "\nChuoi sau khi duoc viet lai la: ";
    hoathuong(s);
    cout << "\nSo ky tu xuat hien 1 lan la: ";
    xuathien1(s);
    cout << "\nChuoi sau khi xoa het khoang trang o dau va cuoi la: ";
    removespace(s);
}