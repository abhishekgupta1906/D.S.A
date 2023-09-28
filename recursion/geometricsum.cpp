#include <iostream>
using namespace std;
double exponential(int m, int n)
{
    if (n == 0)
    {
        return 1.00000;
    }

    double a = exponential(m, n - 1);
    return a * m;
}
double geometricSum(int k)
{
    if (k == 0)
    {
        return 1.00000;
    }

    double d = geometricSum(k - 1);

    double a = 1 / exponential(2, k);

    return a + d;
}

int main()
{
    double b = geometricSum(3);
    cout << b;

    return 0;
}