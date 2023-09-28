#include <iostream>
#include <cstring>
using namespace std;
void Merge(int arr[], int start, int end)
{
    int mid = (start + end) / 2;
    int l1 = mid - start + 1;
    int l2 = end - mid;
    // l1,l2 length of the subarrays
    int *ptr1 = new int[l1];
    int *ptr2 = new int[l2];
    // copy values
    int t = start;
    for (int i = 0; i < l1; i++)
    {
        /* code */
        ptr1[i] = arr[t];
        t++;
    }
    t = mid + 1;

    for (int i = 0; i < l2; i++)
    {
        /* code */
        ptr2[i] = arr[t];
        t++;
    }

    int i = 0;
    // for first subarray
    int j = 0;
    // for second subarray
    int k = start;
    while (i < l1 && j < l2)
    {
        if (ptr1[i] > ptr2[j])
        {
            arr[k] = ptr2[j];
            j++;
            k++;
        }
        else if (ptr1[i] == ptr2[j])
        {
            arr[k] = ptr1[i];
            arr[k] = ptr2[j];
            i++;
            j++;
            k++;
        }

        else
        {
            arr[k] = ptr1[i];
            i++;
            k++;
        }
    }

    while (i < l1)
    {
        arr[k] = ptr1[i];
        i++;
        k++;
    }

    while (j < l2)
    {
        arr[k] = ptr2[j];
        j++;
        k++;
    }

    delete[] ptr1;
    delete[] ptr2;
}

void mergesort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int m = (start + end) / 2;

    mergesort(arr, start, m);
    mergesort(arr, m + 1, end);

    Merge(arr, start, end);
}

int main()
{
    int a[6] = {2, 6, 8, 5, 4, 2};
    mergesort(a, 0, 5);

    for (int i = 0; i < 6; i++)
    {
        /* code */
        cout << a[i] << " ";
    }

    return 0;
}
