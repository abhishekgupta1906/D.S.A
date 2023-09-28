#include <iostream>
#include <string>
#include <vector>
using namespace std;
void heapSort(int pq[], int n)
{
    if (n == 0 || n == 1)
    {
        return;
    }
    // heap insert
    int i = 1;
    // for unsorted
    while (i < n)
    {
        int ci = i;
        while (ci > 0)
        {
            int pi = (ci - 1) / 2;
            if (pq[pi] > pq[ci])
            {
                int temp = pq[ci];
                pq[ci] = pq[pi];
                pq[pi] = temp;
            }
            ci = pi;
        }
        i++;
    }
    // remove jo ki krna nhi h
    int j = n - 1;
    while (j > 0)
    {
        int temp = pq[j];
        pq[j] = pq[0];
        pq[0] = temp;

        int pi = 0;
        int lci = 2 * pi + 1;
        int rci = 2 * pi + 2;
        while (lci < j)
        {
            int minindex = pi;
            if (pq[minindex] > pq[lci])
            {
                minindex = lci;
            }
            if (pq[minindex] > pq[rci] && rci < j)
            {
                minindex = rci;
            }
            if (minindex == pi)
            {
                break;
            }
            int temp = pq[minindex];
            pq[minindex] = pq[pi];
            pq[pi] = temp;
            pi = minindex;
            lci = 2 * pi + 1;
            rci = 2 * pi + 2;
        }
        j--;
    }

    // Write your code
}

int main()
{
    int arr[5] = {10, 5, 8, 25, 4};
    heapSort(arr, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
        /* code */
    }

    return 0;
}