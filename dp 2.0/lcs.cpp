#include<iostream>
#include<string>
#include<vector>
using namespace std;
// shift by 1
int f(string &s1, string &s2, int i, int j, vector<vector<int>> &dp)
{
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    if (i == 0)
    {
        return 0;
    }
    if (j == 0)
    {
        return 0;
    }
    if (s1[i - 1] == s2[j - 1])
    {
        int ans = 1+f(s1, s2, i - 1, j - 1, dp);
        dp[i][j]=ans;
        return ans;
    }

    int a= f(s1, s2, i - 1, j, dp);
    int b= f(s1, s2, i, j - 1, dp);
    dp[i][j]=max(del, insert);
    return dp[i][j];

    // Write your code here.
}
int lcs(string &s1, string &s2)
{
    int n = s1.length();
    int m = s2.length();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    return f(s1, s2, n, m,dp);
    // Write your code here.
}
int lcs(string s, string t)
{
    int n = s1.length();
    int m = s2.length();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1,0));
    for (int i = 0; i <=n; i++)
    {
        dp[i][0]=0;
        /* code */
    }
    for (int j = 0; j <=m; j++)
    {
        dp[0][j]=0;
        /* code */
    }
    for (int i =1; i <=n; i++)
    {
        for (int j =1; j <=m; j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);

            }
            /* code */
        }
        
        /* code */
    }
    return dp[n][m];
	//Write your code here
}
int main()
{
    
return 0;
}