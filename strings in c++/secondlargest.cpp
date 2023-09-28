#include <iostream>
using namespace std;
#include<climits>
// 5 6 1 2 3 4
// 5
int main()
{
    int arr[6] = {5, 6, 1, 2, 3, 4};
    bool a = true;

    for (int i = 1; i < 6; i++)
    {
        /* code */
        if (arr[i] == arr[i + 1] )
        {
            a = false;
            break;
        }

        else
        {
            for ( int j = 0; j <6-i ; j++)
            {
                if (arr[j] > arr[j + 1])
                {
                    int c = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = c;
                }
            }
        }
    }
    /* code */

   if(a==false)
   {
    cout<<INT16_MAX;

   }

   else
   {
    cout<<arr[4];
   }

    return 0;
}