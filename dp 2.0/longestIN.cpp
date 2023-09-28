#include <iostream>
#include <string>
#include <vector>
using namespace std;
// shift by 1
int f(int arr[], int n, int ind, int prev, vector<vector<int>> &dp)
{
    if (index == n)
    {
        return 0;
    }
    if (dp[ind][prev + 1] != -1)
    {
        return dp[ind][prev + 1];
    }
    int pick = INT16_MIN;
    if (arr[prev] < arr[ind] || prev == -1)
    {
        pick = 1 + f(arr, n, ind + 1, ind, dp);
    }
    int notpick = f(arr, n, ind + 1, prev, dp);
    dp[ind][prev + 1] = max(pick, notpick);
    return dp[ind][prev + 1];

    // Write Your Code here
}

int longestIncreasingSubsequence(int arr[], int n)
{
    vector<vector<int>> dp(n, vector<int>(n + 1, -1));
    return f(arr, n, 0, -1);
    // Write Your Code here
}
// when shift occurs for a parameter reflect everywhere in tabulation
int longestIncreasingSubsequence(int arr[], int n)
{
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    for (int i = n - 1; i >= 0; i--)
    {
        for (int prev = i - 1; prev >= -1; prev--)
        {
            int pick = INT16_MIN;
            if (arr[prev] < arr[i] || prev == -1)
            {
                pick = 1 + dp[i + 1][i + 1];
            }
            int notpick = dp[i + 1][prev + 1];
            dp[i][prev + 1] = max(pick, notpick);

            /* code */
        }

        /* code */
    }
    return dp[0][-1 + 1];

    // Write Your Code here
}
int longestIncreasingSubsequence(int arr[], int n)
{
    vector<int> previous(n + 1, 0);
    for (int i = n - 1; i >= 0; i--)
    {
        vector<int> curr(n + 1, 0);
        for (int prev = i - 1; prev >= -1; prev--)
        {
            int pick = INT16_MIN;
            if (arr[prev] < arr[i] || prev == -1)
            {
                pick = 1 + previous[i + 1];
            }
            int notpick = previous[prev + 1];
            curr[prev + 1] = max(pick, notpick);

            /* code */
        }
        previous = curr;

        /* code */
    }
    return previous[-1 + 1];

    // Write Your Code here
}
// binary search
int longestIncreasingSubsequence(int arr[], int n)
{
    vector<int>t;
    t.push_back(arr[0]);
    int len=1;
    for (int i=1;i<n;i++)
    {
        if(arr[i]>t[len-1])
        {
            t.push_back(arr[i]);
            len++;
        }
        else
        {
            int ind=lower_bound(t.begin(),t.end(),arr[i])-t.begin();
            t[ind]=arr[i];
        }
       
        
        /* code */
    }
    return len;
    

    // Write Your Code here
}


int main()
{

    return 0;
}