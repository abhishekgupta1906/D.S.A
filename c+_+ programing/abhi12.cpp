#include<iostream>
using namespace std;

// pointers

int main()
{
    int arr[]={1,3,6,9};
    int *b=arr;
    int i;
    // for ( i = 0; i < 4; i++)
    // {
    //     cout<<"value at address of b:"<<arr[i]<<endl;
    // }
    // for ( i = 0; i < 4; i++)
    // {
    //     cout<<"value at address of b:"<<*(b+i)<<endl;
    // }
    for ( i = 0; i < 4; i++)
    {
        cout<<"value at address of b:"<<arr<<endl;
    }
    // for ( i = 0; i < 4; i++)
    // {
    //     cout<<"value at address of b:"<<b<<endl;
    // }
    
return 0;
}