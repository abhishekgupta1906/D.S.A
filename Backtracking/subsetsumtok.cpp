#include<bits/stdc++.h>
using namespace std;
int subsetsumtok(int*arr,int n,int k)
{
    if(n==0 && k!=0)
    {
       return 0;
    }
    if(n==0 && k==0)
    {
        return 1;
    }

 
    int a=subsetsumtok(arr+1,n-1,k-arr[0]);
    int b=subsetsumtok(arr+1,n-1,k);
    return a+b;
}
int main(){
    
    // write your code here
    int arr[5]={2,4,4,3,1};
    int c=subsetsumtok(arr,5,6);
    cout<<c;
    return 0;
}