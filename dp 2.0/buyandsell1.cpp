#include<iostream>
#include<string>
#include<vector>
using namespace std;
int maximumProfit(vector<int> &prices)
{
    int n=prices.size();
    int mini=prices[0];
    int maxprofit=0;
    // mtlb left part kis samay sbse km price pr min rha h
    for (int i =1; i <n; i++)
    {
        int profit=prices[i]-mini;
        maxprofit=max(profit,maxprofit);
        mini=min(mini,prices[i]);

        /* code */
    }
    return maxprofit;
    
    
}
int main()
{
    vector<int>prices={2,2,2,2};
    int b=maximumProfit(prices);
    cout<<b;
    
return 0;
}