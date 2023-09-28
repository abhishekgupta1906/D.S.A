#include <iostream>
#include <string>
#include <vector>
using namespace std;
// recursive
int countDistinct_Ways(int index)
{
    if (index == 0)
    {
        return 1;
    }
    if (index == 1)
    {
        return 1;
    }
    int a = countDistinct_Ways(index - 1);
    int b = countDistinct_Ways(index - 2);
    return a + b;

    //  Write your code here.
}
// memoization
int countdistinctways(int index, vector<int> &dp)
{
    if (index == 0)
    {
        return 1;
    }
    if (index == 1)
    {
        return 1;
    }
    if (dp[index] != -1)
    {
        return dp[index];
    }
    int a = countdistinctways(index - 1,dp);
    int b = countdistinctways(index - 2,dp);
    dp[index]=a+b;
    return dp[index];
}
// dp
int countdistinctways_Dp(int n)
{
    vector<int>dp(n+1,-1);
    dp[0]=1;
    dp[1]=1;
    for (int i =2; i <=n; i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
        /* code */
    }
    return dp[n];
    

}
// space optimize
int count(int n)
{
    int prev=1;
    int current=1;
    int next;
    for (int i =2; i <=n; i++)
    {
        next=current+prev;
        prev=current;
        current=next;
        
        /* code */
    }
    return current;
    
}
int countDistinctWays(int n)
{
    vector<int> dp(n + 1, -1);
    return countdistinctways(n, dp);

    //  Write your code here.
}
// memoization

int main()
{
    int b=countDistinctWays(3);
    cout<<b<<" ";
    int a=countdistinctways_Dp(3);
    cout<<a<<" ";
    int c=count(3);
    cout<<c;


    return 0;
}