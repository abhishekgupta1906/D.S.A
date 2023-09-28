#include<iostream>
using namespace std;
int main()
{
    int arr[7]={0,1,2,0,2,0,1};
    int c0=0;
    int c1=0;
    int c2=0;
    for (int i = 0; i <7; i++)
    {
        if(arr[i]==0)
        {
            c0++;
        }

        else if(arr[i]==1)
        {
            c1++;
        }

        else
        {
            c2++;
        }
    }

    for (int i = 0; i < c0; i++)
    {
        /* code */
        arr[i]=0;
    }
    // cout<<c1<<c2<<c0;

    for (int i = c0; i <c1+c0; i++)
    {
        /* code */
        arr[i]=1;
    }

    for (int i =c0+c1; i <c2+c1+c0; i++)
    {
        /* code */
        arr[i]=2;
    }
    for (int i = 0; i <7; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    

return 0;
}