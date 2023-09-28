#include <iostream>
using namespace std;
// 5
// 9 8 10 8 8
// 8
// 1 3 4
// 3
int allIndexes(int input[], int size, int x, int output[])
{
    if (size == 0)
    {
        return 0;
    }
    // starting from last

    int d = allIndexes(input, size - 1, x, output);
    // mann ke chalo ki ye mere n-1 wala array jahan x h usko count kr d me store kr dega
    int k = 0;
    for (int i = 0; i < size - 1; i++)
    {
        if (input[i] == x)
        {
            if (k < d)
            {
                output[k] = i;
                k++;
                /* code */
            }
        }
    }

    if (input[size - 1] == x)
    {
        output[d] = size - 1;
        return d + 1;
    }

    else
    {
        return d;
    }
}

int main()
{
    int A[5] = {9, 8, 10, 8, 8};
    int op[6];
    int ans = allIndexes(A, 5, 8, op);
    ;

    return 0;
}