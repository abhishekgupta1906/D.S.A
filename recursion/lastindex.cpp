#include <iostream>
using namespace std;
// 9 10 11 12 12
// 4
int lastindex(int a[], int size, int x)
{
    // base case
    if (size == 0)
    {
        return -1;
    }

    if (a[size - 1] == x)
    {
        return size - 1;
    }

    int output = lastindex(a , size - 1, x);

    if (output == -1)
    {
        return -1;
    }

    else
    {
        return output ;
    }
}
int main()
{
    int A[5] = {9, 10, 11, 12, 12};
    int ans = lastindex(A,5,12);
    cout << ans;

    return 0;
}