#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
// MEMOIZATION
int minimumPathSum(vector<vector<int>> &triangle, int n, int i, int j, vector<vector<int>> &dp)
{
    if (j > n)
    {
        return INT16_MAX;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }

    if (i == n - 1)
    {
        return triangle[n - 1][j];
    }
    int a = triangle[i][j] + minimumPathSum(triangle, n, i + 1, j, dp);
    int b = triangle[i][j] + minimumPathSum(triangle, n, i + 1, j + 1, dp);
    dp[i][j] = min(a, b);
    return dp[i][j];
    // Write your code here.
}
int minimum_PathSum(vector<vector<int>> &triangle, int n)
{
    vector<vector<int>> dp(n, vector<int>(n, -1));

    return minimumPathSum(triangle, n, 0, 0, dp);
}
int minimumPathSum(vector<vector<int>> &triangle, int n)
{
    vector<vector<int>> dp(n, vector<int>(n, 0));
    for (int j = 0; j < n; j++)
    {
        dp[n - 1][j] = triangle[n - 1][j];
        /* code */
    }

    for (int i = n - 2; i >= 0; i--)
    {
        for (int j = i; j >= 0; j--)
        {
            int a = triangle[i][j] + dp[i + 1][j];
            int b = triangle[i][j] + dp[i + 1][j + 1];

            dp[i][j] = min(a, b);

            /* code */
        }

        /* code */
    }
    return dp[0][0];
}
// optimization
int minimumPathSum(vector<vector<int>> &triangle, int n)
{
    // bottom to top depends top to down
    vector<int>bottom(n,0);
    for (int j = 0; j < n; j++)
    {
        bottom [j] = triangle[n - 1][j];
        /* code */
    }

    for (int i = n - 2; i >= 0; i--)
    {
        vector<int>up(n,0);
        for (int j = i; j >= 0; j--)
        {
            int a = triangle[i][j] +bottom[j];
            int b = triangle[i][j] +bottom[j+1];
            up[j]=min(a,b);

            

            /* code */
        }
        bottom=up;

        /* code */
    }
    return bottom[0];
}

int main()
{

    return 0;
}