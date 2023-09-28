#include <iostream>
#include <string>
#include <climits>
#include <vector>
using namespace std;
int countMinStepsToOne(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    int a = INT_MAX;
    ;
    int b = INT_MAX;
    int c = INT_MAX;
    c = countMinStepsToOne(n - 1);
    if (n % 2 == 0)
    {
        a = countMinStepsToOne(n / 2);
    }
    if (n % 3 == 0)
    {
        b = countMinStepsToOne(n / 3);
    }
    int d = min(c, min(a, b));
    return 1 + d;

    // Write your code here
}
int minhelper(int *arr, int n)
{
    if (n <= 1)
    {
        return 0;
    }
    if (arr[n] != -1)
    {
        return arr[n];
    }
    int a = INT_MAX;
    ;
    int b = INT_MAX;
    int c = INT_MAX;
    c = minhelper(arr, n - 1);
    if (n % 2 == 0)
    {
        a = minhelper(arr, n / 2);
    }
    if (n % 3 == 0)
    {
        b = minhelper(arr, n / 3);
    }
    arr[n] = 1 + min(c, min(a, b));
    return arr[n];
}
int minsteps(int n)
{
    int *arr = new int[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        /* code */
        arr[i] = -1;
    }

    // final ans[n] h
    int b = minhelper(arr, n);
    delete[] arr;
    return b;
}
int minstepsdp(int n)
{
    int *arr = new int[n + 1];
    arr[0] = 0;
    arr[1] = 0;
    int b = INT16_MAX;
    int c = INT16_MAX;
    for (int i = 2; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            b = arr[i / 2];
        }
        if (i %3 == 0)
        {
            c = arr[i / 3];
        }
        arr[i]=1+min(arr[i-1],min(b,c));

        /* code */
    }
    return arr[n];
}

int main()
{
    cout << "hello abhi";
    return 0;
}