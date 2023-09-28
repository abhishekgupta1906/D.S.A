#include <iostream>
#include <string>
#include <vector>
using namespace std;
// max-5
// weight arr-1 2 4 5
// value-5 4 8 6
int knapsack(int *weight, int *value, int n, int maxweight)
{
    if (n == 0 || maxweight == 0)
    {
        return 0;
    }
    if (weight[0] > maxweight)
    {
        int y = knapsack(weight + 1, value + 1, n - 1, maxweight);
        return y;
    }
    // first element is included
    int x = value[0] + knapsack(weight + 1, value + 1, n - 1, maxweight - weight[0]);
    int y = knapsack(weight + 1, value + 1, n - 1, maxweight);
    int ans = max(x, y);
    return ans;

    // write your code here
}
// memoization
int knapsack_helper(int *weight, int *value, int n, int maxweight, int **ans)
{
    if (ans[maxweight][n] != -1)
    {
        return ans[maxweight][n];
    }
    if (n == 0 || maxweight == 0)
    {
        return 0;
    }
    if (weight[0] > maxweight)
    {
        int y = knapsack_helper(weight + 1, value + 1, n - 1, maxweight, ans);
        ans[maxweight][n] = y;
        return ans[maxweight][n];
    }
    // first element is included
    int x = value[0] + knapsack_helper(weight + 1, value + 1, n - 1, maxweight - weight[0], ans);
    int y = knapsack_helper(weight + 1, value + 1, n - 1, maxweight, ans);
    int d = max(x, y);
    ans[maxweight][n] = d;
    return ans[maxweight][n];
}
int knapsack_memoization(int *weight, int *value, int n, int maxweight)
{
    int **ans = new int *[maxweight + 1];
    for (int i = 0; i < maxweight + 1; i++)
    {
        ans[i] = new int[n + 1];

        /* code */
    }
    for (int i = 0; i < maxweight + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            ans[i][j] = -1;
            /* code */
        }

        /* code */
    }
    int d = knapsack_helper(weight, value, n, maxweight, ans);
    for (int i = 0; i < maxweight + 1; i++)
    {
        delete[] ans[i];

        /* code */
    }
    delete[] ans;

    return d;
}
int knapsack_dp(int *weight, int *value, int n, int maxweight)
{
    int **ans = new int *[maxweight + 1];
    for (int i = 0; i < maxweight + 1; i++)
    {
        ans[i] = new int[n + 1];

        /* code */
    }
   
    for (int i = 0; i < maxweight + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            if (i == 0 || j == 0)
            {
                ans[i][j] = 0;
            }
            else
            {
                if (weight[j-1] > i)
                {
                    ans[i][j] = ans[i][j - 1];
                }
                else
                {
                    ans[i][j] = max(value[j-1] + ans[i - weight[j-1]][j - 1], ans[i][j - 1]);
                }
            }
            /* code */
        }

        /* code */
    }
    int d = ans[maxweight][n];
    for (int i = 0; i < maxweight + 1; i++)
    {
        delete[] ans[i];

        /* code */
    }
    delete[] ans;

    return d;
}

int main()
{
    int arr[4] = {1, 2, 4, 5};
    int arr2[4] = {5, 4, 8, 6};
    int d = knapsack_dp(arr, arr2, 4, 5);
    cout << d;

    return 0;
}