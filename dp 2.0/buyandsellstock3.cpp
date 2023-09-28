#include <iostream>
#include <string>
#include <vector>
using namespace std;
int f(int *values, int n, int ind, int buy, int count, vector<vector<vector<int>>> &dp)
{
    if (ind == n)
    {
        return 0;
    }
    if (count == 0)
    {
        return 0;
    }
    if (dp[ind][buy][count] != -1)
    {
        return dp[ind][buy][count];
    }
    long profit = 0;
    if (buy == 1)
    {
        long take = -values[ind] + f(values, n, ind + 1, 0, count, dp);
        long notake = f(values, n, ind + 1, 1, count, dp);
        profit = max(take, notake);
    }
    else
    {
        long sell = values[ind] + f(values, n, ind + 1, 1, count - 1, dp);
        long notsell = f(values, n, ind + 1, 0, count, dp);
        profit = max(sell, notsell);
    }
    dp[ind][buy][count] = profit;
    return dp[ind][buy][count];
}
// count -1
int maxProfit(vector<int> &values)
{
    // Write your code here.
    int n = prices.size();
    vector<vector<vector<int>>> dp(n, vector<vector<int>>(2, vector<int>(3, -1)));
    return f(values, n, 0, 1, 2, dp);
}
int maxProfit(vector<int> &values)
{
    // Write your code here.
    int n =values.size();
    vector<vector<vector<int>>> dp(n + 1, vector<vector<int>>(2, vector<int>(3, 0)));
    // base case
   
    for (int i = n - 1; i >= 0; i--)
    {
        long profit = 0;
        for (int buy = 0; buy <= 1; buy++)
        {
            for (int count =1; count <= 2; count++)
            {
                if (buy == 1)
                {
                    int take = -values[i] +dp[i+1][0][count];
                    int notake =dp[i+1][1][count];
                    profit = max(take, notake);
                }
                else
                {
                    int sell = values[i] +dp[i+1][1][count-1];
                    int notsell =dp[i+1][0][count];
                    profit = max(sell, notsell);
                }
                dp[i][buy][count]=profit;

                /* code */
            }

            /* code */
        }

        /* code */
    }
    return dp[0][1][2];
}
// space optmisation
int maxProfit(vector<int> &values)
{
    // Write your code here.
    int n =values.size();
    vector<vector<int>>prev(2, vector<int>(3, 0)));
    // base case
   
    for (int i = n - 1; i >= 0; i--)
    {
        vector<vector<int>>curr(2, vector<int>(3, 0)));
        long profit = 0;
        for (int buy = 0; buy <= 1; buy++)
        {
            for (int count =1; count <= 2; count++)
            {
                if (buy == 1)
                {
                    int take = -values[i] +prev[0][count];
                    int notake =prev[1][count];
                    profit = max(take, notake);
                }
                else
                {
                    int sell = values[i] +prev[1][count-1];
                    int notsell =prev[0][count];
                    profit = max(sell, notsell);
                }
                curr[buy][count]=profit;

                /* code */
            }

            /* code */
        }
        prev=curr;

        /* code */
    }
    return prev[1][2];
}

int main()
{

    return 0;
}