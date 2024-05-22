#include <iostream>
using namespace std;

void quickSort(int arr[], int left, int right)
{
    int pivot = arr[(left + right) / 2];
    int i = left, j = right;
    while (i < j)
    {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;
        if (i <= j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }

    if (i < right)
        quickSort(arr, i, right);
    if (left < j)
        quickSort(arr, left, j);
}

int main()
{
    int numElements, numPrint;
    cin >> numElements >> numPrint;
    int elements[numElements];
    for (int i = 0; i < numElements; ++i)
        cin >> elements[i];

    quickSort(elements, 0, numElements - 1);

    int count[numElements] = {0};
    int uniqueElements[numElements];
    int uniqueCount = 0;

    for (int i = 0; i < numElements; ++i)
    {
        if (elements[i] != elements[i - 1])
        {
            count[uniqueCount] = 1;
            uniqueElements[uniqueCount] = elements[i];
            uniqueCount++;
        }
        else
            count[uniqueCount - 1]++;
    }

    for (int i = 0; i < uniqueCount && numPrint > 0; ++i)
    {
        cout << uniqueElements[i] << ' ';
        count[i]--;
        numPrint--;
    }
    for (int i = 0; i < uniqueCount && numPrint > 0; ++i)
        while (count[i] > 0 && numPrint > 0)
        {
            cout << uniqueElements[i] << ' ';
            count[i]--;
            numPrint--;
        }
    return 0;
}