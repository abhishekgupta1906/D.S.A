#include<iostream>
using namespace std;
int count=0;
int countdigit(int n)
{
    
    if(n>0)
    {
        count++;
        n=n/10;
        countdigit(n);
    }

  return count;  
}
int main()
{
    int n;
    cin>>n;
    int op=countdigit(n);
    cout<<op;
    // int count=0;
    // while(n>0)
    // {
    //     count++;
    //     n=n/10;

    // }
    // cout<<count;

return 0;
}