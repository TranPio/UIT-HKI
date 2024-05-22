#include <iostream>
using namespace std;

int InsertionSort(int a[], int n)
{
    for (int i=1; i<n; i++)
    {
        int j=i;
        while (j>0 && a[j]<=a[j-1])
        {
            int temp = a[j];
            a[j] = a[j-1];
            a[j-1] = temp;
            j--;
        }
    }
}
int InsertionSort2(int a[], int n)
{
    for (int i=1; i<n; i++)
    { 
        int key=a[i];
        int j = i-1;
        while (j>=0 && a[j] > key)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
}
int main()
{
    int a[100];
    int n;
    cin>>n;
    cout <<"Day ban dau: ";
    for (int i=0; i<n; i++)
        cin >>a[i];
    InsertionSort2(a, n);
    cout <<"Day sau khi sap xep: ";
    for (int i=0; i<n; i++)
        cout << a[i] << " ";
    return 0;
}