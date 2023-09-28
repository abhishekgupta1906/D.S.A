#include<iostream>
#include<string>
#include<vector>
#include<queue>

using namespace std;
#include<queue>

vector<int> kLargest(int input[], int n, int k){

    /* Don't write main().
     * Don't read input, it is passed as function argument.
     * Return output and don't print it.
     * Taking input and printing output is handled automatically.
     #include<queue>

     */
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
    vector<int> v;
    while (!pq.empty())
    {
        int s = pq.top();
        v.push_back(s);
        pq.pop();
    }
    return v;


}
int main()
{
    int arr[8]={8,5,12,10,0,1,6,9};
    vector<int>s=kLargest(arr,8,4);
    for (int i = 0; i <s.size(); i++)
    {
        cout<<s[i]<<" ";
        /* code */
    }
    
    
return 0;
}