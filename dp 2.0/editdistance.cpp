#include <iostream>
#include <string>
#include <vector>
using namespace std;
// int f(string &str1, string &str2, int i, int j, vector<vector<int>> &dp)
// {
//     if(dp[i][j]!=-1)
//     {
//         return dp[i][j];
//     }
//     if (i < 0)
//     {
//         return j + 1;
//     }
//     if (j < 0)
//     {
//         return i + 1;
//     }

//     if (str1[i]==str2[j])
//     {
//        return dp[i][j]=f(str1, str2, i-1, j-1,dp);
//     }
//     return dp[i][j]=1+min(f(str1, str2, i,j-1,dp),min(f(str1, str2,i-1,j,dp),f(str1, str2,i-1,j-1,dp)));

// }

// int editDistance(string str1, string str2)
// {
//     int n = str1.size();
//     int m = str2.size();
//     vector<vector<int>> dp(n, vector<int>(m,- 1));

//     return f(str1, str2, n - 1, m - 1, dp);

//     // write you code here
// }
int f(int i, int j, string str1, string str2, vector<vector<int>> &dp)
{

    if (i < 0)
        return j + 1;

    if (j < 0)
        return i + 1;

    if (dp[i][j] != -1)
        return dp[i][j];

    if (str1[i] == str2[j])
        return dp[i][j] = f(i - 1, j - 1, str1, str2, dp);

    else
        return dp[i][j] = 1 + min(f(i, j - 1, str1, str2, dp), min(f(i - 1, j, str1, str2, dp), f(i - 1, j - 1, str1, str2, dp)));
}

int editDistance(string str1, string str2)

{

    // write you code here

    int n = str1.size();

    int m = str2.size();

    vector<vector<int>> dp(n, vector<int>(m, -1));

    return f(n - 1, m - 1, str1, str2, dp);
}
// tabulation
int editDistance(string str1, string str2)

{
    // shift by 1
    int n = str1.size();

    int m = str2.size();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int j = 0; j <= m; j++)
    {
        dp[0][j] = j;
        /* code */
    }
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = i;
        /* code */
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (str1[i - 1] == str2[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1];
            }
            else
            {
                int a = dp[i][j - 1];
                int b = dp[i - 1][j];
                int c = dp[i - 1][j-1];
                dp[i][j]=1+min(a,min(b,c));
            }

            /* code */
        }

        /* code */
    }
    return dp[n][m];
}

int main()
{
    string s = "anc";
    string t = "dc";
    int a = editDistance(s, t);
    cout << a;

    return 0;
}