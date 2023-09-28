#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

// vector<int> longestConsecutiveIncreasingSequence(int *arr, int n)
// {
//     unordered_map<int, bool> o;
//     for (int i = 0; i < n; i++)
//     {
//         /* code */
//         o[arr[i]] = true;
//     }
//     int maxlen=0;
//     int start;
//     int end;
//     for (int i = 0; i <n; i++)
//     {

//         /* code */
//         int m=arr[i];
//         if(o[m]==false)
//         {
//             continue;
//         }
//         int len=1;
//         int a,b;
//         // sequence ka starting h ya part h or jo use ho gya usko false kr do
//         a=arr[i];
//         // start ke liy 
//         b=arr[i];
//         // ye end ke liy
//         while(o.count(m-1)>0)
//         {
//             len++;
//             a=m-1;
//             o[m-1]=false;
//             m--;


//         }
//         while(o.count(m+1)>0)
//         {
//             len++;
//             b=m+1;
//             o[m+1]=false;
//             m++;


//         }
//         if(len>maxlen)
//         {
//             maxlen=len;
//             start=a;
//             end=b;
//         }
//     }
//     vector<int>v;
//     if(start==end)
//     {
//         v.push_back(start);
//     }
//     v.push_back(start);
//     v.push_back(end);
//     return v;

    
    

//     // Your Code goes here
// }
vector<int> longestConsecutiveIncreasingSequence(int *arr, int n)
{
    unordered_map<int,int> o;
    for (int i = 0; i < n; i++)
    {
        /* code */
        o[arr[i]] =i;
    }
    vector <int>v;
    for (int i = 0; i<n; i++)
    {
        /* code */
        vector<int>t;
        if(o.count(arr[i]-1)==0)
        {
            t.push_back(arr[i]);
            int p=1;
            while(o.count(arr[i]+p))
            {
                t.push_back(arr[i]+p);
                p++;
            }
            if(t.size()>v.size())
            {
                v=t;
            }


        }
    }
    int a=v[0];
    int b=v[v.size()-1];
    v.clear();
    v.push_back(a);
    v.push_back(b);
    return v;

    

    
    

    // Your Code goes here
}
int main()
{
    int arr[6] = {3, 7, 9, 4, 5, 6};
    vector<int>d=longestConsecutiveIncreasingSequence(arr,6);
    for ( int i= 0; i <d.size(); i++)
    {
        cout<<d[i]<<endl;
        /* code */
    }
    
    
    

    
    

    return 0;
}