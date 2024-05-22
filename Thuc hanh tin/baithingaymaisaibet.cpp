#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
    string s;
    getline(cin, s);

    // a. Xuất các ký tự in hoa trong chuỗi không trùng kí tự
   
    int j = 0; 
    
    cout << "Cac ky tu in hoa trong chuoi la: ";
    for (int i=0; i<s.length(); i++) { 
        if (s[i]>='A' && s[i]<='Z'){
            int k;
            for (k=0; k<i; k++)
                if (s[i] == s[k])
                    break; 
            if (i == k){                     
                cout << s[i];
            } 
        }
    } 
  cout << endl;

    // b. In lên màn hình các ký tự ở vị trí lẻ và là ký tự viết thường.
    cout << "Cac ky tu viet thuong tai vi tri le la: ";
    for (int i = 0; i < s.length(); i++) {
        if (i % 2 != 0 && islower(s[i])) {
            cout << s[i] << " ";
        }
    }
    cout << endl;

    // c. In lên màn hình các ký tự xuất hiện đúng 1 lần trong chuỗi và là ký tự hoa
    cout << "Cac ki tu hoa xuat hien dung 1 lan trong chuoi: ";
    for (int i = 0; i < s.length(); i++) {
        int count = 0;
        for (int j = 0; j < s.length(); j++) {
            if (s[i] == s[j]) {
                count++;
            }
        }
        if (count == 1 && isupper(s[i])) {
            cout << s[i] << " ";
        }
    }
    cout << endl;

    // d. Xoá các khoảng trắng trong chuỗi
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    cout << "Chuoi sau khi xoa cac khoang trang la: " << s << endl;

    return 0;
}