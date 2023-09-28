#include <iostream>
#include <cstring>
using namespace std;

void Merge(int arr[], int arr1[], int arr2[], int m, int n)
{

    int i = 0;
    // for first subarray
    int j = 0;
    // for second subarray
    int k = 0;
    while (i < n && j < m) {
        if (arr1[i] <= arr2[j]) {
            arr[k] =arr1[i];
            i++;
        }
        else {
            arr[k] =arr2[j];
            j++;
        }
        k++;
    }


    while (i < m)
    {
        arr[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n)
    {
        arr[k] = arr2[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return;
    }
    int m = size / 2;
    int n = size - m;

    int arr1[m];
    int arr2[n];
    //   copy values
    int t=0;

    for (int i = 0; i < m; i++)
    {
        /* code */
        arr1[i] = arr[t];
        t++;
    }

    

    for (int i = 0; i < n; i++)
    {
        /* code */
        arr2[i] = arr[t];
        t++;
    }

    mergeSort(arr1, m);
    mergeSort(arr2, n);
    Merge(arr, arr1, arr2, m, n);
    return ;
}

int main()
{
    int a[6] = {2, 6, 8, 5, 6, 2};
    mergeSort(a, 6);
    for (int i = 0; i < 6; i++)
    {
        /* code */
        cout << a[i] << " ";
    }

    return 0;
}