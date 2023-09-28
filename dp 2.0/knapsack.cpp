#include <iostream>
#include <string>
#include <vector>
using namespace std;
int max_Profit(vector<int> &value, vector<int> &weight, int index, int W, vector<vector<int>> &dp)
{
    if (index == 0)
    {
        if (weight[index] <= W)
        {
            return value[index];
        }
        return 0;
    }
    if (dp[index][W] != -1)
    {
        return dp[index][W];
    }
    // PICK THE ITEM
    int pick = INT16_MIN;
    if (weight[index] <= W)
    {
        pick = value[index] + max_Profit(value, weight, index - 1, W - weight[index], dp);
    }
    int notPick = max_Profit(value, weight, index - 1, W, dp);
    dp[index][W] = max(pick, notPick);
    return dp[index][W];
    // Write your code here
}
int maxProfit(vector<int> &value, vector<int> &weight, int n, int W)
{
    vector<vector<int>> dp(n, vector<int>(W + 1, -1));
    return max_Profit(value, weight, n - 1, W, dp);
    // Write your code here
}
// tabulation
int maxProfit(vector<int> &value, vector<int> &weight, int n, int W)
{
    vector<vector<int>> dp(n, vector<int>(W + 1, 0));
    for (int j = weight[0]; j <= W; j++)
    {
        dp[0][j] = value[0];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            int pick = INT_MIN;
            if (j >= weight[i])
            {
                pick = value[i] + dp[i - 1][j - weight[i]];
            }
            int notPick = dp[i - 1][j];
            dp[i][j] = max(pick, notPick);
            /* code */
        }

        /* code */
    }
    return dp[n - 1][W];

    /* code */
}
// optimised
int maxProfit(vector<int> &value, vector<int> &weight, int n, int W)
{
    vector<int>prev(W+1,0);
    for (int j = weight[0]; j <= W; j++)
    {
        prev[j] = value[0];
    }
    for (int i = 1; i < n; i++)
    {
        vector<int>curr(W+1,0);
        for (int j = 0; j <= W; j++)
        {
            int pick = INT_MIN;
            if (j >= weight[i])
            {
                pick = value[i] +prev[j - weight[i]];
            }
            int notPick =prev[j];
            curr[j] = max(pick, notPick);
            /* code */
        }
        prev=curr;

        /* code */
    }
    return prev[W];

    /* code */
}
int main()
{

    return 0;
}