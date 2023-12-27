// Merge sort
#include <bits/stdc++.h>
using namespace std;
void merge(int arr[], int left, int right, int mid)
{

    int lsize = mid - left + 1;
    int rsize = right - mid;
    int larr[lsize];
    int rarr[rsize];
    for (int i = 0; i < lsize; i++)
    {
        larr[i] = arr[left + i];
    }
    for (int j = 0; j < rsize; j++)
    {
        rarr[j] = arr[mid + 1 + j];
    }

    int i = 0;
    int j = 0;
    int k = left;
    while (i < lsize && j < rsize)
    {
        if (larr[i] > rarr[j])
        {
            arr[k] = rarr[j];
            j++;
            k++;
        }
        else
        {
            arr[k] = larr[i];
            i++;
            k++;
        }
    }
    while (i < lsize)
    {
        arr[k] = larr[i];
        i++;
        k++;
    }
    S while (j < rsize)
    {
        arr[k] = rarr[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int left, int right)
{
    int mid;
    if (left < right)
    {
        mid = (left + right) / 2;
        mergeSort(arr, left, mid);      // To divide left parts into sub-parts  //It's good to write left instead of 0(Execution Time)
        mergeSort(arr, mid + 1, right); // To divide right parts int sub-parts
        merge(arr, left, right, mid);
    }
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1, 10, 6, 7, 12, 34, 56, 78, 1, 23, 56};
    int size = sizeof(arr) / sizeof(int);
    cout << "Array before sorting" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    mergeSort(arr, 0, size - 1);
    cout << "Array after sorting" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}