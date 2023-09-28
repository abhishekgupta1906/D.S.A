#include <iostream>
using namespace std;
int sum(int a[], int n)
{
    if (n == 1)
    {
        return a[0];
    }

    int j = a[0] + sum(a + 1, n - 1);

    return j;

    // return a[n]+sum(a+1,n-1);
}
int main()
{
    int A[5] = {2, 4, 5, 6, 7};
    int a = sum(A, 5);
    cout << a;

    return 0;
}