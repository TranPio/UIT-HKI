#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Nhap n = ";
    do{
        cin >> n;
        if(n <= 0){
            cout << "Nhap lai n = ";
        }
    }while(n <= 0);
    
    for(int i = 1;i <= n;i++){
        if(n % i == 0){
            cout << i << " ";
        }
    }
}