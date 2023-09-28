#include<iostream>
#include<string>
#include<climits>
#include<vector>
using namespace std;
int maxMoneyLooted(vector<int> &houses, int index,int n,vector<int> &dp)
{
    if(index==0)
    {
        return houses[index];
    }
    if(dp[index]!=-1)
    {
        return dp[index];
    }
    // included
	if(index<0)
	{
		return INT_MIN;
	}
    
    int a=houses[index]+maxMoneyLooted(houses,index-2,n,dp);

    
    int b=maxMoneyLooted(houses,index-1,n,dp);
    dp[index]=max(a,b);
    return dp[index];
	
}
int maxMoneyLooted(vector<int> &houses, int n)
{
    vector<int>dp(n,-1);
    return maxMoneyLooted(houses,n-1,n,dp);
	
	
}
int maxMoneyLooted(vector<int> &houses, int n)
{
    vector<int>dp(n,0);
    dp[0]=houses[0];
	dp[1]=max(houses[0],houses[1]);
    for(int i=2;i<n;i++)
    {
		int a=houses[i]+dp[i-2];
        int b=dp[i-1];
        dp[i]=max(a,b);
        

    }
	
}
int main()
{
    
return 0;
}