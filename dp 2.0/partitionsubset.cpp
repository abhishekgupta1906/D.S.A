#include<iostream>
#include<string>
#include<vector>
using namespace std;
// array ko partition krna two subset aur dono ka sum barabar hona chaiye s1+s2=s,s1=s/2
bool subsetSumToK(int n, int k, vector<int> &arr)
{
    vector<bool>prev(k+1,false);
   vector<bool>next(k+1,false);
   
   prev[0]=next[0]=true;
    
    prev[arr[0]] = true;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < k + 1; j++)
        {
            bool notake =prev[j];
            bool take = false;
            if (arr[i] <=j)
            {
                take =prev[j-arr[i]];
            }
           next[j] = notake | take;

            /* code */
        }
        prev=next;

        /* code */
    }
    return prev[k];
    // Write your code here.
}
bool canPartition(vector<int> &arr, int n)
{

	// Write your code here
    int sum=0;
    for (int i = 0; i <n; i++)
    {
        sum=sum+arr[i];
        /* code */
    }
    if(sum%2==1)
    {
        return false;
    }
    bool b=subsetSumToKb(n,arr,sum/2); //
    return b;

    
}
int main()
{
    
return 0;
}