#include<iostream>
#include<string>
#include<vector>
#include<queue>
using namespace std;
// k sorted 
int kthLargest(int*input, int n, int k) 
{
     priority_queue<int,vector<int>,greater<int>> pq;
    // first k elements ko queue
    for (int i = 0; i < k; i++)
    {
        pq.push(input[i]);
        /* code */
    }
    for (int i = k; i < n; i++)
    {
        if (input[i]>pq.top())
        {
            pq.pop();
            pq.push(input[i]);
        }
        /* code */
    }
    // vector<int> v;
    // while (!pq.empty())
    // {
    //     int s = pq.top();
    //     v.push_back(s);
    //     pq.pop();
    // }
    // return v[0];
    // Write your code here
    return pq.top();
}
int main()
{
    int arr[8]={8,5,12,10,0,1,6,9};
    int s=kthLargest(arr,8,4);
    cout<<s;
    
return 0;
}