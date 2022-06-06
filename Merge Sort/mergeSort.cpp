#include <iostream>
#include <array>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int merging(int arr[], int l, int mid, int h)
{

    int i = l;
    int j = mid + 1;
    int k = l;

    int temp[100];

    while (i <= mid && j <= h)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid)
    {
        temp[k++] = arr[i++];
    }

    while (j <= h)
    {
        temp[k++] = arr[j++];
    }

    for(int i =l ;i<=h;i++){
        arr[i] = temp[i];
    }
}

void mergeSort(int arr[], int l, int h)
{
    int mid = (l + h) / 2;

    if (l < h)
    {

        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, h);
        merging(arr, l, mid, h);
    }
}

int main()
{

    int arr[10]{100, 43, 234, 543, 3, 5, 1, 23423, 35, 34};
    int arr2[5] = {1, 2, 4, 5, 6};

    mergeSort(arr, 0, 10 - 1);

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}