#include <iostream>
using namespace std;
// 9 10 11 12 12
// 3
int firstindex(int a[], int size, int x)
{
    // base case
    if (size == 0)
    {
        return -1;
    }

    if (a[0] == x)
    {
        return 0;
    }

    int output = firstindex(a + 1, size - 1, x);

    if (output == -1)
    {
        return -1;
    }

    else
    {
        return output + 1;
    }
}
int main()
{
    int A[5] = {9, 10, 11, 12, 12};
    int ans = firstindex(A, 5, 15);
    cout << ans;

    return 0;
}