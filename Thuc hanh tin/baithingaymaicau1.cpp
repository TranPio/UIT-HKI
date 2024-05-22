#include <iostream>
using namespace std;

//Hàm tính tổng các số lẻ trong mảng
int sumOdd(int *arr, int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
            sum += arr[i];
    }
    return sum;
}

//Hàm xuất các số lẻ nhỏ hơn 20
void printLessThan20(int *arr, int size)
{
    cout << "Cac so le nho hon 20: ";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0 && arr[i] < 20)
            cout << arr[i] << " ";
    }
    cout << endl;
}

//Hàm tìm xuất hiện 2 lần của x
void findDouble(int *arr, int size, int x)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
            count++;
    }
    if (count == 2)
        cout << "Gia tri " << x << " xuat hien 2 lan trong mang." << endl;
        else
        cout << "Gia tri " << x << " khong xuat hien 2 lan trong mang." << endl;
}

//Hàm tìm vị trí giá trị lớn nhất trong mảng
void findMax(int *arr, int size)
{
	cout << "Vi tri gia tri lon nhat trong mang la: " ;
    int max = arr[0];
    int sogiatrimax=1;
    int index = 0;
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            sogiatrimax=1;
            index = i;
        }
        else if(arr[i]==max)
        {
        	sogiatrimax++;
		}
    }
    if (sogiatrimax== 1) {
        for (int i=0;i<size;i++) {
            if (arr[i]==max) {
                cout << "Vi tri co gia tri max la: " << i << endl;
                break;
            }
        }
    } else {
        cout << "Cac vi tri co gia tri max la: ";
        for (int i=0;i<size;i++) {
            if (arr[i] ==max) {
                cout << i << " ";
            }
        }
}
cout<<endl;
}
int main()
{
    int size;
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> size;
    while(size <0) {
    cout<<"So luong phan tu phai lon hon 0. Nhap lai: ";
    cin>>size;
  }
    int *arr = new int[size];
    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < size; i++){
      cout<<"arr["<<i<<"]="<<" ";
        cin >> arr[i];
    }
    cout << "Tong cac so le trong mang la: " << sumOdd(arr, size) << endl;
    printLessThan20(arr, size);
    int x;
    cout << "Nhap gia tri x can tim: ";
    cin >> x;
    findDouble(arr, size, x);
    findMax(arr, size);
    delete[] arr;
    return 0;
}