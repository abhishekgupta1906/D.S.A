#include<iostream>
#include<unordered_map>
#include<cstring>
using namespace std ;

int lengthOfLongestSubsetWithZeroSum(int* arr, int n)
{
      int maxlen=0;
     int sum=0;
    unordered_map<int,int>o;
    for (int i = 0; i <n; i++)
    {
        /* code */
        
       int len=0;
       sum=sum+arr[i];
       if(sum==0)
       {
           maxlen=i+1;

       }
       if(o.count(sum)>0)
       {
           maxlen=max(maxlen,i-o[sum]);
       }
       else
       {
           o[sum]=i;
       }
      
       

        
        
        

    }
    return maxlen;
    
    

   
    
}
int main()
{
    int arr[10]={ 95, -97, -387, -435, -5, -70, 897, 127, 23, 284};
    int b=lengthOfLongestSubsetWithZeroSum(arr,10);
    cout<<b;
   
    
   

return 0;
}