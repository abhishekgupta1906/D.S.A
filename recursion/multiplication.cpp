#include <iostream>
using namespace std;
int multiply(int m, int n)
{
    if (n == 0)
    {
        return 0;
    }

    int ans = multiply(m, n - 1);
    return m + ans;
}
int main()
{
    int a = 3;
    int b = 5;
    int d = multiply(a, b);
    cout << d;

    return 0;
}