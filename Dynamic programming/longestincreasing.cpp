#include <iostream>
#include <string>
#include <vector>
using namespace std;
// recursive
int longestIncreasingSubsequence(int *arr, int n)
{
    if (n == 0)
    {
        return 0;
    }
    int a = INT16_MIN;
    if (arr[0] < arr[1])
    {
        int d = longestIncreasingSubsequence(arr + 1, n - 1);
        a = d + 1;
    }
    int b = longestIncreasingSubsequence(arr + 1, n - 1);
    int ans = max(a, b);
    return ans;

    // Write your code here
}
// memoization
int longestincreasing(int *arr, int n, int *ans)
{
    if (ans[n] != -1)
    {
        return ans[n];
    }
    if (n == 0)
    {
        return 0;
    }
    int a = INT16_MIN;
    if (arr[0] < arr[1])
    {
        int d = longestincreasing(arr + 1, n - 1,ans);
        a = d + 1;
        
    }
    int b = longestincreasing(arr + 1, n - 1,ans);
    int d = max(a, b);
    ans[n]=d;
    return ans[n];
    
}
int longestIncreasingSubsequence_memo(int *arr, int n)
{
    int *ans = new int[n + 1];
    for (int i = 0; i <n+1; i++)
    {
        ans[i]=-1;
        /* code */
    }
    
    int d=longestincreasing(arr,n,ans);
    delete[]ans;
    return d;
}
int longestIncreasingSubsequence_dp(int*arr,int n)
{
    int *ans = new int[n + 1];
    
    for (int i =0; i <n+1; i++)
    {
        if(i==0)
        {
            ans[i]=0;
        }
        int a=INT16_MIN;
        if(arr[i-1]<arr[i])
        {
            a=ans[i-1]+1;
            
        }
        int b=ans[i-1];
        ans[i]=max(a,b);
        
        /* code */
    }
    int d=ans[n];
    delete[]ans;
    return d;
    

}
int main()
{
    int arr[3] = {1,2,2};
    int p=longestIncreasingSubsequence_dp(arr,3);
    cout<<p;
    

    return 0;
}