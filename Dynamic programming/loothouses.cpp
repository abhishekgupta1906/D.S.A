#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;
int maxMoneyLooted(int *arr, int n)
{
    // Write your code here
    if (n<=0)
    {
        return 0;
    }
    int d=arr[0];
    int b = INT16_MIN;
    int c = INT16_MIN;
    // when first element is not included
    b = maxMoneyLooted(arr + 1, n - 1);
    c = maxMoneyLooted(arr + 2, n - 2);
    int ans = max(b, d+ c);
    return ans;
}
int loothouses_dp(int*arr,int n)
{
    int*ans=new int[n];
    ans[0]=arr[0];
    ans[1]=max(arr[0],arr[1]);
    for (int i =2; i <n; i++)
    {
        ans[i]=max(ans[i-1],ans[i-2]+arr[i]);
        /* code */
    }
    int d=ans[n-1];
    delete[]ans;
    return d;

    
}
int main()
{
    int arr[6]={5,5,10,100,10,5};
    int d=maxMoneyLooted(arr,6);
    cout<<d;
    cout<<endl;
    int b=loothouses_dp(arr,6);
    cout<<b;

    return 0;
}