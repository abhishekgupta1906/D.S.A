#include <iostream>
#include <string>
#include <vector>
using namespace std;
// index i increasing subsequence ka length
int longestIncreasingSubsequence(int *arr, int n)
{
    int *ans = new int[n];
    ans[0] = 1;
    for (int i = 1; i < n; i++)
    {
        ans[i] = 1;
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[j] < arr[i])
            {
                int possibleans = ans[j] + 1;
                if (possibleans > ans[i])
                {
                    ans[i] = possibleans;
                }
            }
            /* code */
        }

        /* code */
    }
    // max length find
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (ans[i] > max)
        {
            max = ans[i];
        }

        /* code */
    }
    delete[] ans;
    return max;

    // Write your code here
}
int main()
{
    int arr[7]={5,4,11,1,6,7,8};
    int p=longestIncreasingSubsequence(arr,7);
    cout<<p;

    return 0;
}