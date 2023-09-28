#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
vector<int> kSmallest(int arr[], int n, int k)
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
    vector<int> v;
    while (!pq.empty())
    {
        int s = pq.top();
        v.push_back(s);
        pq.pop();
    }
    return v;

    // Write your code here
}

int main()
{
    int arr[8]={8,5,12,10,0,1,6,9};
    vector<int>s=kSmallest(arr,8,4);
    for (int i = 0; i <s.size(); i++)
    {
        cout<<s[i]<<" ";
        /* code */
    }
    

    return 0;
}