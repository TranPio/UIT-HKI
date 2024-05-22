#include <iostream>
using namespace std;
int main() {
long long S, giam,tien;
cout << "Nhap vao so km di:" << flush;
cin >> S;

if (S == 1) {
tien = 15000;
}
else if (S >= 2 && S <= 5) {
tien = (13500 * (S - 1)) + 15000 ;
}
else if(S >= 6 && S <= 120)
{
tien = (11000 * (S - 5)) + ((13500 * 4) + 15000);
}
if (S >= 120)
 tien =(11000 * (S - 5)) + ((13500 * 4) + 15000)-(((11000 * (S - 5)) + ((13500 * 4) + 15000))*10/100);
cout << "so tien phai tra la:" << tien << endl;
return 0;
}