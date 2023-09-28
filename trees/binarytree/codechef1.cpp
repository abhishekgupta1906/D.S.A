#include <iostream>
#include <cstring>
using namespace std;
// 2 3 4 17 9
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        
        int arr[n];
        int even=0;

        for (int i = 0; i < n; i++)
        {
            /* code */
            cin >> arr[i];
            if(arr[i]%2==0)
            {
                even++;
            }
        }

        int i = 0;
        int j = n - 1;
        int count = 0;

        while (i < j)
        {
            if (arr[i] % 2 == 1 && arr[j] % 2 == 0)
            {
                i++;
                j--;
            }
            else if (arr[i] % 2 == 1)
            {
                i++;
            }
            else if (arr[j] % 2 == 0)
            {
                j--;
            }
            else
            {
                int c = arr[i] ^ arr[j];
                int b = c | x;
                if (b % 2 == 1)
                {
                    count++;
                }
                i++;
                j--;
            }
        }
        if(even==n)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<count<<endl;

        }
        
    }

    return 0;
}