#include <iostream>
#include <string>
#include <vector>
using namespace std;
// memoization
bool subsetsumtok(vector<int> &arr, int index, int target, vector<vector<int>> &dp)
{
    if (target == 0)
    {
        return true;
    }
    if (index == 0)
    {
        if (arr[index] == target)
        {
            return true;
        }
        return false;
    }
    if (dp[index][target] != -1)
    {
        return dp[index][target];
    }
    bool notake = subsetsumtok(arr, index - 1, target, dp);
    bool take = false;
    if (arr[index] <= target)
    {
        take = subsetsumtok(arr, index - 1, target - arr[index], dp);
    }
    dp[index][target] = notake | take;
    return dp[index][target];
}
// tabulation

bool subsetSumToK(int n, int k, vector<int> &arr)
{
    vector<vector<bool>> dp(n, vector<bool>(k + 1, false));
    for (int i = 0; i < n; i++)
    {
        dp[i][0] = true;
        /* code */
    }
    dp[0][arr[0]] = true;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < k + 1; j++)
        {
            bool notake =dp[i-1][j];
            bool take = false;
            if (arr[i] <=j)
            {
                take =dp[i-1][j-arr[i]];
            }
            dp[i][j] = notake | take;

            /* code */
        }

        /* code */
    }
    return dp[n-1][k];

    // Write your code here.
}
// optimised
bool subsetSumToK(int n, int k, vector<int> &arr)
{
    vector<bool>prev(k+1,false);
   vector<bool>next(k+1,false);
   
   prev[0]=next[0]=true;
    
    prev[arr[0]] = true;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < k + 1; j++)
        {
            bool notake =prev[j];
            bool take = false;
            if (arr[i] <=j)
            {
                take =prev[j-arr[i]];
            }
           next[j] = notake | take;

            /* code */
        }
        prev=next;

        /* code */
    }
    return prev[k];
    // Write your code here.
}

int main()
{

    return 0;
}