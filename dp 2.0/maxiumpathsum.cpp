#include<iostream>
#include<string>
#include<climits>
#include<vector>
using namespace std;
// memoization
int getMaxPathSum(vector<vector<int>> &matrix,int i,int j,vector<vector<int>> &dp)
{
    if(j<0 || j>=matrix.size())
    {
        return INT16_MIN;
    }
    if(i==0)
    {
        return matrix[0][j];

    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    int a=matrix[i][j]+getMaxPathSum(matrix,i-1,j,dp);
    int b=matrix[i][j]+getMaxPathSum(matrix,i-1,j-1,dp);
    int c=matrix[i][j]+getMaxPathSum(matrix,i-1,j+1,dp);
    dp[i][j]=max(a,max(b,c));
    return dp[i][j];


    //  Write your code here.
}
int getMaxPathSum(vector<vector<int>> &matrix)
{
    int maxi=INT16_MIN;
    int n=matrix.size();
    vector<vector<int>>dp(n,vector<int>(n,-1));
    for (int j = 0; j <n; j++)
    {
        maxi=max(maxi,getMaxPathSum(matrix,n-1,j,dp));
        /* code */
    }
    return maxi;
    
    


    //  Write your code here.
}
// tabulation
int getMaxPathSum(vector<vector<int>> &matrix)
{
    int maxi=INT32_MIN;
    int n=matrix.size();
    int m=matrix[0].size();
    vector<vector<int>>dp(n,vector<int>(n,-1));
    for (int j = 0; j <m; j++)
    {
        dp[0][j]=matrix[0][j];
        
        /* code */
    }
    for (int i =1; i <n; i++)
    {
        for (int j = 0; j <m; j++)
        {
            int b=INT32_MIN;
            int c=INT32_MIN;
            int a=matrix[i][j]+dp[i-1][j];
            if(j>0)
            {
             b=matrix[i][j]+dp[i-1][j-1];

            }
            if(j<m-1)
            {
             c=matrix[i][j]+dp[i-1][j+1];

            }
            dp[i][j]=max(a,max(b,c));

            /* code */
        }
        
        /* code */
    }
    
    for (int j = 0; j <m; j++)
    {
        maxi=max(maxi,dp[n-1][j]);
        /* code */
    }
    return maxi;
    
    
    

    
    


    //  Write your code here.
}
// space optimization
int getMaxPathSum(vector<vector<int>> &matrix)
{
    int maxi=INT32_MIN;
    int n=matrix.size();
    int m=matrix[0].size();
    vector<int>dp(n,0);
   
    for (int j = 0; j <m; j++)
    {
        dp[j]=matrix[0][j];
        
        /* code */
    }
    for (int i =1; i <n; i++)
    {
        vector<int>t(m,0);
        for (int j = 0; j <m; j++)
        {
            int b=INT32_MIN;
            int c=INT32_MIN;
            int a=matrix[i][j]+dp[j];
            if(j>0)
            {
             b=matrix[i][j]+dp[j-1];

            }
            if(j<m-1)
            {
             c=matrix[i][j]+dp[j+1];

            }
            t[j]=max(a,max(b,c));

            /* code */
        }
        dp=t;
        
        /* code */
    }
    
    for (int j = 0; j <n; j++)
    {
        maxi=max(maxi,dp[j]);
        /* code */
    }
    return maxi;
    
    
    

    
    


    //  Write your code here.
}


int main()
{
   

    
return 0;
}