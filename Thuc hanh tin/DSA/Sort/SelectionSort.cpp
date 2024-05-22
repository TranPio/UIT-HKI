#include <iostream>
using namespace std;

int SelectionSort(int a[], int n)
{
    for (int i=0; i< n-1; i++)
    {
        int i_min = i;
        int v_min = a[i];
        for (int j=i; j<n; j++)
        {
            if (a[j] < v_min)
                {
                    v_min = a[j];
                    i_min = j;
                }
        }
        //doi cho a[i], a[i_min]
        int temp = a[i_min];
        a[i_min] = a[i];
        a[i] = temp;
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
    SelectionSort(a, n);
    cout <<"Day sau khi sap xep: ";
    for (int i=0; i<n; i++)
        cout <<a[i] <<" ";
}