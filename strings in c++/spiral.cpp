#include <iostream>
using namespace std;
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16

// 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
int main()
{
    int a[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int rs = 0;
    int re = 3;
    int cs = 0;
    int ce = 3;

    // for (int j =cs; j <4; j++)
    // {
    //     /* code */
    //     cout<<a[rs][j]<<" ";
    // }

    // for (int i =rs+1; i <4; i++)
    // {
    //     /* code */
    //     cout<<a[i][ce]<<" ";
    // }

    // for (int j = ce-1; j>=0; j--)
    // {
    //     /* code */
    //     cout<<a[re][j]<<" ";
    // }

    // for (int i =re-1; i>=1; i--)
    // {
    //     /* code */
    //     cout<<a[i][cs]<<" ";
    // }

    while (rs <= re && cs <= ce)
    {
        for (int j = cs; j <= ce; j++)
        {
            /* code */
            cout << a[rs][j] << " ";
        }
        rs++;

        for (int i = rs; i <= re; i++)
        {
            /* code */
            cout << a[i][ce] << " ";
        }
        ce--;

        for (int j = ce; j >= cs; j--)
        {
            /* code */
            cout << a[re][j] << " ";
        }
        re--;

        for (int i = rs; i >= rs; i--)
        {
            /* code */
            cout << a[i][cs] << " ";
        }
        cs++;
    }

    return 0;
}