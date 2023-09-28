int f(long *values, int n, int ind, int buy,int count, vector<vector<vector<int>>> &dp)
{
    if (ind == n)
    {
        return 0;
    }
    if(count==3)
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
        long take = -values[ind] + f(values, n, ind + 1, 0,count, dp);
        long notake = f(values, n, ind + 1, 1,count, dp);
        profit = max(take, notake);
    }
    else
    {
        long sell = values[ind] + f(values, n, ind + 1, 1, count+1,dp);
        long notsell = f(values, n, ind + 1, 0, count,dp);
        profit = max(sell, notsell);
    }
    dp[ind][buy][count] = profit;
    return dp[ind][buy][count];
}
// count -1
int maxProfit(vector<int>&values)
{
    // Write your code here.
    int n=prices.size();
    vector<vector<vector<int>>>dp(n,vector<vector<int>>(2,vector<int>(3,-1)));
    return f(values,n,0,1,1,dp);

}