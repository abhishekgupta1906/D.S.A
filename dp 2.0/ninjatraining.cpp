#include <iostream>
#include <string>
#include <vector>
#include<queue>
using namespace std;
// day last
// memoization
// n-1 ,3 pass krke skte the base case day==0 recursion day-1
int ninjaTraining(int n, vector<vector<int>> &arr, int day, int last, vector<vector<int>> &dp)
{
   
    
    if (dp[day][last] != -1)
    {
        return dp[day][last];
    }

    // o to n-1
    if (day == n - 1)
    {
        int maxpoints = 0;
        for (int Activity = 0; Activity < 3; Activity++)
        {
            if (Activity != last)
            {
                maxpoints = max(maxpoints, arr[n - 1][Activity]);
            }
            /* code */
        }
        dp[day][last] = maxpoints;
        return dp[day][last];
    }
    int maxpoints = 0;
    for (int Activity = 0; Activity < 3; Activity++)
    {
        if (Activity != last)
        {
            maxpoints = max(maxpoints, arr[day][Activity] + ninjaTraining(n, arr, day + 1, Activity, dp));
            /* code */
        }
    }
    dp[day][last] = maxpoints;
    return dp[day][last];
    // Write your code here.
}
// tabulation
int ninjaTraining(int n, vector<vector<int>> &arr)
{
    vector<vector<int>> dp(n, vector<int>(4, 0));
    dp[0][0] = max(arr[0][1], arr[0][2]);
    dp[0][1] = max(arr[0][0], arr[0][2]);
    dp[0][2] = max(arr[0][0], arr[0][1]);
    dp[0][3] = max(arr[0][0], max(arr[0][1], arr[0][2]));
    for (int day = 1; day < n; day++)
    {

        for (int last = 0; last < 4; last++)
        {
            dp[day][last]=0;
            int maxi = 0;
            for (int Activity = 0; Activity < 3; Activity++)
            {
                if (Activity != last)
                {
                    int point=arr[day][Activity] + dp[day - 1][Activity];
                    maxi = max(maxi,point);
                    /* code */
                }
            }
            dp[day][last] = maxi;

            /* code */
        }

        /* code */
    }
    return dp[n - 1][3];

    // Write your code here.
}

// int ninjaTraining(int n, vector<vector<int>> &arr)
// {
//     vector<vector<int>> dp(n, vector<int>(4, -1));
//     return ninjaTraining(n, arr, 0, 3, dp);

//     // Write your code here.
// }
int main()
{

    return 0;
}