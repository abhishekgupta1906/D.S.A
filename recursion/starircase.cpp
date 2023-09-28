#include <iostream>
#include <cstring>
using namespace std;
int staircase(int n)
{
    if (n == 0)
    {
        return 1;
    }

    if (n == 1)
    {
        return 1;
    }

    if (n == 2)
    {
        return 2;
    }

    int m = staircase(n - 1);
    int p = staircase(n - 2);
    int o = staircase(n - 3);

    return m + p + o;
}
int main()
{
    int t = staircase(5);
    cout << t;

    return 0;
}