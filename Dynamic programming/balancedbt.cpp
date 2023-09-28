#include <iostream>
#include <string>
#include <vector>
using namespace std;
typedef long long int ll;
const ll m = 1e9 + 7;
int multiply(ll a, ll b)
{
    return (int)(((a % m) * (b % m)) % m);
}
int modAdd(ll a, ll b) { return (int)((a % m + b % m) % m); }
int balancedBTs(int h)
{
    if (h == 0)
    {
        return 1;
    }
    if (h == 1)
    {
        return 1;
    }
    int a = balancedBTs(h - 1);
    int b = balancedBTs(h - 2);
    int d = multiply(a, a);
    int c = 2 * multiply(a, b);
    int ans = modAdd(c, d);
    return ans;
    // Write your code here
}
// memoization
int balanceBTshelper(int *ans, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return 1;
    }
    if (ans[n] != -1)
    {
        return ans[n];
    }
    int a = balanceBTshelper(ans, n - 1);
    int b = balanceBTshelper(ans, n - 2);
    int d = multiply(a, a);
    int c = 2 * multiply(a, b);
    ans[n] = modAdd(c, d);
    return ans[n];
}
int balanced_BTs(int n)
{
    int *ans = new int[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        /* code */
        ans[i] = -1;
    }
    int b = balanceBTshelper(ans, n);
    delete[] ans;
    return b;
}
// dp
int balancedbts3(int n)
{
    int*ans=new int[n+1];
    ans[0]=1;
    ans[1]=1;
    for (int i =2; i <n+1; i++)
    {
        /* code */
        ans[i]=modAdd(multiply(ans[i-1],ans[i-1]),2*multiply(ans[i-1],ans[i-2]));
    }
    int b=ans[n];
    delete[]ans;
    return b;

    
}
int main()
{
    int p=balancedbts3(4);
    cout<<p;

    return 0;
}