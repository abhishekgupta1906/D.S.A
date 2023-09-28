#include <iostream>
#include <string>
#include <vector>
using namespace std;
//   minimum insertion to make string palindrome
int f(string &str,int i ,int j, vector<vector<int>&dp)
{
    if(i>=j)
    {
        return 0;
    }
    if(dp[i][j]!=-1)
    {
        return dp[i][j];
    }
    if(str[i]==str[j])
    {
        int ans=f(str,i+1,j-1);
        dp[i][j]=ans;
        return ans;
    }
    int a=1+f(str,i+1,j);
    int b=1+f(str,i,j-1);
    dp[i][j]=min(a,b);
    return dp[i][j];

	// Write your code here.
}

int minimumInsertions(string &str)
{
    int a=str.length();
    vector<vector<int>dp(a,vector<int>(a,-1));
    return f(str,0,a-1);
	// Write your code here.
}


int main()
{
    string str="abcdefg";
    int o=minimumInsertions(str);
    cout<<o;

    return 0;
}