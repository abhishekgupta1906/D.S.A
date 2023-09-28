#include<iostream>
using namespace std;
// 4- 9 7 6 1
// 3-4 5 9
// 5 -1 0 2 2 0 
int main()
{
    int arr1[4]={9,7,6,1};
    int arr2[3]={4,5,9};
    int op[5];
    int k=4;
    int i=3;
    int j=2;
    int num;
    int carry=0;
    //  for (int k =n; k>=0; k--)
    // {
    //     /* code */

        

    //     if(i>=-1 || j>=-1)
    //     {
    //         num=input1[i]+input2[j]+carry;
    //         num=num%10;
    //         carry=num/10;
    //         output[k]=num;
    //         i--;
    //         j--;
    //         // continue;

    //     }

        
    // }

    while(i>=0 && j>=0)
    {
       num=arr1[i]+arr2[j]+carry;
       num=num%10;
       op[k]=num;
       carry=num/10;
       k--;
       i--;
       j--;

    }

    while(i>=0)
    {
       num=arr1[i]+carry;
       num=num%10;
       op[k]=num;
       carry=num/10;
       k--;
       i--;
       

    }

    while(j>=0)
    {
       num=arr2[j]+carry;
       num=num%10;
       op[k]=num;
       carry=num/10;
       k--;
       
       j--;

    }

    if(carry!=0)
    {
        op[0]=carry;
    }

    for (int i = 0; i <5; i++)
    {
        /* code */
        cout<<op[i];

    }
        


        
    
    

       

    
    
    

    

return 0;
}