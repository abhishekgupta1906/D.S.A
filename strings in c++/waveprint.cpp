#include <iostream>
using namespace std;
// 1  2  3  4
// 5  6  7  8
// 9 10 11 12
// 1 5 9 10 6 2 3 7 11 12 8 4
int main()
{
    int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    //    column fix kro mtlb row change ho rha h

    //    for (int i = 0; i <3; i++)
    //    {
    //     /* code */
    //     cout<<a[i][0]<<" ";
    //    }

    //    for (int i =2; i>=0; i--)
    //    {
    //     /* code */
    //     cout<<a[i][1]<<" ";
    //    }
    int c = 0;
    //    ye btayega ki column index even h ya odd

    while (c < 4)
    {
        /* code */
        if (c % 2 == 0)
        {
            for (int i = 0; i < 3; i++)
            {
                /* code */
                cout << a[i][c] << " ";
            }
        }

        else
        {
            for (int i =3-1; i >= 0; i--)
            {
                /* code */
                cout << a[i][c] << " ";
            }
        }

        c++;
    }

    return 0;
}