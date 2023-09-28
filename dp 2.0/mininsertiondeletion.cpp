#include <iostream>
#include <string>
#include <climits>
#include <vector>
using namespace std;
// empty i<0
// int f(string &s1, string &s2,int i ,int j)
// {
//     if(i<0)
//     {
//         return j+1;
//     }
//     if(j<0)
//     {
//         return i+1;
//     }
//     if(s1[i]==s2[j])
//     {
//         int ans=f(s1,s2,i-1,j-1);
//         return ans;
//     }
//     int del=1+f(s1,s2,i-1,j);
//     int insert=1+f(s1,s2,i,j-1);
//     return min(del,insert);
//     // Write your code here.
// }
// int canYouMake(string &s1, string &s2)
// {
//     int n=s1.length();
//     int m=s2.length();
//     return f(s1,s2,n-1,m-1);
//     // Write your code here.
// }
// i==0 indexing
int f(string &s1, string &s2, int i, int j, vector<vector<int>> &dp)
{
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    if (i == 0)
    {
        return j;
    }
    if (j == 0)
    {
        return i;
    }
    if (s1[i - 1] == s2[j - 1])
    {
        int ans = f(s1, s2, i - 1, j - 1, dp);
        dp[i][j]=ans;
        return ans;
    }

    int del = f(s1, s2, i - 1, j, dp);
    int insert = f(s1, s2, i, j - 1, dp);
    dp[i][j]=1 + min(del, insert);
    return dp[i][j];

    // Write your code here.
}
int canYouMake(string &s1, string &s2)
{
    int n = s1.length();
    int m = s2.length();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    return f(s1, s2, n, m,dp);
    // Write your code here.
}
// tabulation
int canYouMake(string &s1, string &s2)
{
    int n = s1.length();
    int m = s2.length();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    for (int i = 0; i <=n; i++)
    {
        dp[i][0]=i;
        /* code */
    }
    for (int j = 0; j <=m; j++)
    {
        dp[0][j]=j;
        /* code */
    }
    for (int i =1; i <=n; i++)
    {
        for (int j =1; j <=m; j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                dp[i][j]=dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=1+min(dp[i-1][j],dp[i][j-1]);

            }
            /* code */
        }
        
        /* code */
    }
    return dp[n][m];
    
    
   
    // Write your code here.
}
// optimal code
int canYouMake(string &s1, string &s2)
{
    int n = s1.length();
    int m = s2.length();
    vector<int>prev(m+1,0);
    for (int j = 0; j <=m; j++)
    {
       prev[j]=j;
        /* code */
    }
   
    for (int i =1; i <=n; i++)
    {
        vector<int>curr(m+1,0);
        curr[0]=i;
        for (int j =1; j <=m; j++)
        {
            if(s1[i-1]==s2[j-1])
            {
                curr[j]=prev[j-1];
            }
            else
            {
                curr[j]=1+min(prev[j],curr[j-1]);

            }
            /* code */
        }
        prev=curr;
        
        /* code */
    }
    return prev[m];
   
    
    
   
    // Write your code here.
}
int main()
{
    string s1 = "aaa";
    string s2 = "aa";
    int op = canYouMake(s1, s2);
    cout<<op<<endl;

    return 0;
}