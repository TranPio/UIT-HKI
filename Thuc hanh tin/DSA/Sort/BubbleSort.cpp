#include <iostream>
using namespace std;

int BubbleSort(int a[], int n)
{
    for (int i=0; i<n-1;i++)
    {
        for (int j=0; j<n-1; j++)
        {
            if (a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
int main()
{
     int a[1000];
    int n;
    cin>>n;
    cout <<"Day ban dau: ";
    for (int i=0; i<n; i++)
        cin>>a[i];
    BubbleSort(a, n);
    cout <<"Day sau khi sap xep: ";
    for (int i=0; i<n; i++)
        cout <<a[i] <<" ";
}