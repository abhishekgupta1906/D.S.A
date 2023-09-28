void subsetSumToK(int n, int k, vector<int> &arr,vector<bool>&prev)
{
   
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
   
    // Write your code here.
}


int minSubsetSumDifference(vector<int> &arr, int n)
{
    int S = 0;
    for (int i = 0; i < n; i++)
    {
        S = S + arr[i];
        /* code */
    }
    vector<bool>prev(S+1,false);
    subsetSumToK(n,S,arr,prev)
   
    // min -0 max-S for s1`
    int mini = INT16_MAX;
    for (int i = 1; i < S; i++)
    {
        if (prev[i] == true)
        {
            int s1 = i;
            int s2 = S - i;
            mini = min(mini, abs(s1 - s2));
        }
        /* code */
    }
    return mini;
    // adha iteration me ho gyega 5,3 3,5

    // Write your code here.
}