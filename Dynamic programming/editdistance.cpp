#include <iostream>
#include <string>
#include<climits>
#include <vector>
using namespace std;
int editDistance(string s, string t)
{
    int m = s.length();
    int n = t.length();
    if (m == 0 && n == 0)
    {
        return 0;
    }
    if (m == 0)
    {
        return n;
    }
    if (n == 0)
    {
        return m;
    }
    int ans;
    if (s[0] == t[0])
    {
        ans = editDistance(s.substr(1), t.substr(1));
        return ans;
    }
    // insert
    int x = editDistance(s.substr(1), t);
    int y = editDistance(s, t.substr(1));
    int z = editDistance(s.substr(1), t.substr(1));
    ans = min(1 + x, min(1 + y, 1 + z));
    return ans;

    // Write your code here
}
int editdistancehelper(int **ans, string s, string t)
{
    int m = s.length();
    int n = t.length();
    if (ans[m][n] != -1)
    {
        return ans[m][n];
    }
    if (m == 0 && n == 0)
    {
        return 0;
    }
    if (m == 0)
    {
        return n;
    }
    if (n == 0)
    {
        return m;
    }
    int d;
    if (s[0] == t[0])
    {
        d = editdistancehelper(ans, s.substr(1), t.substr(1));
        return d;
    }
    // insert
    int x = editdistancehelper(ans, s.substr(1), t);
    // delete
    int y = editdistancehelper(ans, s, t.substr(1));
    // replace
    int z = editdistancehelper(ans, s.substr(1), t.substr(1));
    d = min(1 + x, min(1 + y, 1 + z));
    ans[m][n] = d;
    return d;
}
int editDistance_memoization(string s, string t)
{
    int m = s.length();
    int n = t.length();
    int **ans = new int *[m + 1];
    for (int i = 0; i < m + 1; i++)
    {
        ans[i] = new int[n + 1];
        /* code */
    }
    for (int i = 0; i < m + 1; i++)
    {
        for (int j = 0; j < n + 1; j++)
        {
            ans[i][j] = -1;
            /* code */
        }

        /* code */
    }
    int output = editdistancehelper(ans, s, t);
    for (int i = 0; i < m + 1; i++)
    {
        delete[] ans[i];

        /* code */
    }
    delete[] ans;
    return output;

    // Write your code here
}
// dp solution
int editdistance_dp(string s, string t)
{
    // 2d array
    int m = s.length();
    int n = t.length();
    int **ans = new int *[m + 1];
    for (int i = 0; i < m + 1; i++)
    {
        ans[i] = new int[n + 1];
        /* code */
    }
    ans[0][0]=0;
    for (int j = 1; j <n+1; j++)
    {
        /* code */
        ans[0][j]=j;
    }
    for (int i = 1; i <m+1; i++)
    {
        ans[i][0]=i;
        /* code */
    }
    
    
    
    
    for (int i =1; i <m+1; i++)
    {
        for (int j =1; j <n+1; j++)
        {
            if(s[m-i]==t[n-j])
            {
                ans[i][j]=ans[i-1][j-1];

            }
            else
            {
                int x=ans[i-1][j];
                int y=ans[i][j-1];
                int z=ans[i-1][j-1];
                ans[i][j]=1+min(x,min(y,z));
            }
            /* code */
        }
        
        /* code */
    }
    int d=ans[m][n];
    // delete
    for (int i = 0; i < m + 1; i++)
    {
        delete[] ans[i];

        /* code */
    }
    delete[] ans;
    return d;

    
}
int main()
{
    string s = "abc";
    string t = "bc";
    int p=editdistance_dp(s,t);
    cout<<p;

    return 0;
}