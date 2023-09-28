#include <iostream>
#include <string>
#include <vector>
using namespace std;
int minimumJumps(vector<int> &arr, int n, int index)
{
    if (index == 0)
    {
        return 0;
    }
    int a = INT16_MAX;
    for (int j = 1; j <= arr[index]; j++)
    {
        if (index - j >= 0)
        {
            int t = 1 + minimumJumps(arr, n, index - j);
            a = min(t, a);
        }

        /* code */
    }
    return a;
    // write your code here
}

int main()
{
    vector<int> v = {2, 1, 3, 2, 4};
    int b = minimumJumps(v, 5, 4);
    cout << b;

    return 0;
}