#include <iostream>
#include <cstring>
using namespace std;
// 1 5 2 3 7
// 1 3 2 5 7
// about 5
int partition(int a[], int si, int ei)
{
    int c = a[si];
    int count = 0;
    // ye btayega ki jitna c se chota
    for (int i = si; i < ei + 1; i++)
    {
        /* code */
        if (c >= a[i])
        {
            // mistake=
            count++;
        }
    }
    // for finding actual position of c
    int m = si + count;
    int temp = a[m];
    a[m] = c;
    a[si] = temp;
    // c ke pehle usse chota hoga aur baad element bada hoga
    int i = si;
    int j = ei;
    while (i <m && j<m)
    {
        // mistake condition
        if (a[i] <=c) 
        {
            // mistake =
            i++;
        }

        else if (a[j] > c)
        {
            j--;
        }

        else
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }

       
    }
    return m;
}

void quick_Sort(int a[], int start, int end)
{
    if (start >= end)
    {
        return;
    }

    int b = partition(a, start, end);
    quick_Sort(a, start, b - 1);
    quick_Sort(a, b + 1, end);
}
void quickSort(int input[], int length)
{
    quick_Sort(input, 0, length - 1);
}
int main()
{
    int a[6] = {2, 6, 8, 5, 34,3};
    quickSort(a, 6);
    for (int i = 0; i < 6; i++)
    {
        /* code */
        cout << a[i] << " ";
    }

    return 0;
}