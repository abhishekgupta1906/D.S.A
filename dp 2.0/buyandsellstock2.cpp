#include <iostream>
#include <string>
#include <vector>
using namespace std;
// buy 0-mtlb uss particular day pr stock kharidne ka permission h
long f(long *values, int n, int ind, int buy, vector<vector<long>> &dp)
{
    if (ind == n)
    {
        return 0;
    }
    if (dp[ind][buy] != -1)
    {
        return dp[ind][buy];
    }
    long profit = 0;
    if (buy == 1)
    {
        long take = -values[ind] + f(values, n, ind + 1, 0, dp);
        long notake = f(values, n, ind + 1, 1, dp);
        profit = max(take, notake);
    }
    else
    {
        long sell = values[ind] + f(values, n, ind + 1, 1, dp);
        long notsell = f(values, n, ind + 1, 0, dp);
        profit = max(sell, notsell);
    }
    dp[ind][buy] = profit;
    return dp[ind][buy];
}
long getMaximumProfit(long *values, int n)
{
    vector<vector<long>> dp(n, vector<long>(2, -1));
    return f(values, n, 0, 1, dp);
    // Write your code here
}
// tabulation
long getMaximumProfit(long *values, int n)
{
    vector<vector<long>> dp(n + 1, vector<long>(2, 0));
    dp[n][0] = 0;
    dp[n][1] = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        long profit = 0;
        for (int buy = 0; buy <= 1; buy++)
 
       {
            if (buy == 1)
            {
                long take = -values[i] + dp[i + 1][0] long notake = dp[i + 1][1];
                profit = max(take, notake);
            }
            else
            {
                long sell = values[i] + dp[i+1][1];
                long notsell =dp[i+1][0];
                profit = max(sell, notsell);
            }
            dp[i][buy]=profit;
        }

        /* code */
    }
    return dp[0][1];

    /* code */
}
//space optimisation
// dp i+1 prev
long getMaximumProfit(long *values, int n)
{
    vector<long>prev(2,0);
    prev[0]=0;
    prev[1]=0;
  
    for (int i = n - 1; i >= 0; i--)
    {
        vector<long>curr(2,0);
        long profit = 0;
        for (int buy = 0; buy <= 1; buy++)
 
       {
            if (buy == 1)
            {
                long take = -values[i] + prev[0];
                long notake =prev[1];
                profit = max(take, notake);
            }
            else
            {
                long sell = values[i] + prev[1];
                long notsell =prev[0];
                profit = max(sell, notsell);
            }
            curr[buy]=profit;
        }
        prev=curr;

        /* code */
    }
    return prev[1];

    /* code */
}
// Write your code here

int main()
{
    vector<long> values{7, 6, 5, 4, 3, 2, 1};

    return 0;
}