/*###Begin banned keyword - each of the following line if appear in code will raise error. regex supported
define
include
using
std
###End banned keyword*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//###INSERT CODE HERE -
void merge(int a[],int n,int b[],int m,int c[]){
int j1=0,j2=0,k=0;
while (j1<n && j2<m){
    if(a[j1]<b[j2]){
        c[k]=a[j1];
        j1++;
    }
    else{
        c[k]=b[j2];
        j2++;
    }
    k++;
}
while(j1<n){
    c[k]=a[j1];
    j1++;
    k++;
}d
while(j2<m){
    c[k]=b[j2];
    j2++;
    k++;
}
}

int main (){
    cin.tie(0);
    std::ios::sync_with_stdio(false);
    int n, m;
    int t; cin >> t;
    while (cin >> n >> m || t > 0){
        t--;
        int *a = new int [n], *b = new int[m], *c = new int[n+m];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];

	merge(a, n, b, m, c);
	int nc = n + m;;
        for(int i = 0; i < nc; i++){
            cout << c[i] << " ";
        }
        delete c;
        cout << endl;
    }
}
