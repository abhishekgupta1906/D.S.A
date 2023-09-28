#include <iostream>
#include <cstring>
using namespace std;
int binarySearch(int input[], int start, int end, int element)
{
    if (start > end)
    {
        return -1;
    }

    int mid = (start + end) / 2;

    if (element > input[mid])
    {
        binarySearch(input, mid + 1, end, element);
    }

    else if (element < input[mid])
    {
        binarySearch(input, start, mid - 1, element);
    }

    else
    {
        return mid;
    }
}

// Write your code here

int main()
{
    int arr[7] = {2, 3, 4, 5, 6, 9, 11};
    int a = binarySearch(arr, 0, 6, 56);
    cout << a;

    return 0;
}