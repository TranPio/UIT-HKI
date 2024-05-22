#include<iostream>
#define fi "thumerge.inp"
//#define fo "thumerge.txt"
using namespace std;

void Merge(int a[], int left, int mid, int right)
{
    //Ben trai: left -> mid
    //Benphai: mid+1 -> right
    int length_left  = mid - left + 1;
    int length_right = right - mid;
    //Tao mang tam thoi
    int a_left[length_left];
    int a_right[length_right];
    for (int i=0; i<length_left; i++)
    {
            a_left[i] = a[left + i];
    }
    for (int i=0; i<length_right; i++)
    {
        a_right[i] = a[mid + 1 + i];
    }
    //Gop hai mang theo quy tac phan tu nho hon duoc dua vao mang gop truoc
    int i1=0; //Vi tri hien tai cua phan tu mang ben trai
    int i2=0; //Vi tri hien tai cua phan tu mang ben phai
    int k=left;
    while (i1<length_left && i2<length_right)
    {
        if (a_left[i1] <= a_right[i2])
        {
            a[k] = a_left[i1];
            i1++;
        }
        else
        {
            a[k] = a_right[i2];
            i2++;
        }
        k++;
    }
    //Copy nhung phan tu cua mang ben trai chua duoc bo vao
    while (i1<length_left)
    {
        a[k] = a_left[i1];
        i1++;
        k++;
    }
    //Copy nhung phan tu cua mang ben phai chua duoc bo vao

    while (i2<length_right)
    {
        a[k] = a_right[i2];
        i2++;
        k++;
    }
}
void MergeSort(int a[], int left, int right)
{
    if (left < right)
    {
        //Tim vi tri o giua
        int mid = (left + right)/2;
        //Goi de quy sort tung phan ben trai va ben phai
        MergeSort(a, left, mid);
        MergeSort(a, mid + 1, right);
        //Gop hai phan ben trai va ben phai voi nhau
        Merge(a, left, mid, right);
    }
}
int main()
{
    freopen(fi,"r",stdin);
  //  freopen(fo,"w",stdout);
    int a[1000];
    int n;
    cin>>n;
    for (int i=0; i<n; i++)
        cin>>a[i];
    MergeSort(a,0,n-1);
    for (int i=0; i<n;i++)
        cout << a[i] << " ";
}
