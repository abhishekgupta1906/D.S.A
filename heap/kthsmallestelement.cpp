#include<iostream>
#include<string>
#include<vector>
#include<queue>
using namespace std;
int kthsmallest(int*arr,int n,int k)
{
    priority_queue<int> pq;
    // first k elements ko queue
    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
        /* code */
    }
    for (int i = k; i < n; i++)
    {
        if (arr[i] < pq.top())
        {
            pq.pop();
            pq.push(arr[i]);
        }
        /* code */
    }
    return pq.top();
}
int main()
{
     int arr[8]={8,5,12,10,0,1,6,9};
    int s=kthsmallest(arr,8,4);
    cout<<s;

    
return 0;
}