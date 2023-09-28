#include <iostream>
#include <string>
#include <vector>
using namespace std;
int f(string &pattern, string &text, int i, int j, vector<vector<int>> &dp) {
    if (i < 0 && j < 0) {
        return true;
    }
    if (i < 0) {
        return false; // pattern exhausted
    }
    if (j < 0) {
        // text exhausted
        for (int m = 0; m <= i; m++) {
            if (pattern[m] != '*') {
                return false;
            }
        }
        return true;
    }

    if (dp[i][j] != -1) {
        return dp[i][j]; // Return memoized result if available
    }

    if (pattern[i] == text[j] || pattern[i] == '?') {
        bool ans = f(pattern, text, i - 1, j - 1, dp);
        dp[i][j] = ans; // Memoize the result
        return ans;
    }
    if (pattern[i] == '*') {
        bool a = f(pattern, text, i - 1, j, dp);
        bool b = f(pattern, text, i, j - 1, dp);
        bool ans = a | b;
        dp[i][j] = ans; // Memoize the result
        return ans;
    }
    dp[i][j] = false; // Memoize the result
    return false;
}

bool wildcardMatching(string pattern, string text) {
    int m = pattern.length();
    int n = text.length();
    vector<vector<int>> dp(m, vector<int>(n, -1));
    return f(pattern, text, m - 1, n - 1, dp);
}

int main()
{
    string patt = "ba*a?";
    string text = "baaabab";
    bool a = wildcardMatching(patt, text);
    cout << a;

    return 0;
}