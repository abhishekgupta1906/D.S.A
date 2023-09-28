#include<iostream>
using namespace std;
int main()
{
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int m=0;
    while(m<3)
    {
        for (int i = 0; i <3-m; i++)
        {
            /* code */
            for (int j = 0; j <3; j++)
            {
                cout<<arr[m][j]<<" ";
                /* code */
            }
            cout<<endl;

        }

        m++;

        
    }
    

return 0;
}