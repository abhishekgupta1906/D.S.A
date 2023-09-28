#include <iostream>
#include <cstring>
using namespace std;
// aaabcd
// abcd
// sirf consecutive

int main()
{
    char s[100] = "aaabbcdb";
    int m = strlen(s);
    for (int i = 0; i < m; i++)
    {
        /* code */
        if (s[i] == s[i + 1])
        {
            for (int j = i + 1; j < m; j++)
            {
                /* code */
                s[j] = s[j + 1];
            }
            m--;
            i--;
        }
    }

    // for (int i = 0; i < m; i++)
    // {
    //     /* code */
    //     for (int j = i + 1; j < m; j++)
    //     {
    //         /* code */
    //         if (s[i] == s[j])
    //         {
    //             for (int k = j; k < m; k++)
    //             {
    //                 /* code */
    //                 s[k] = s[k + 1];
    //             }
    //             m--;
    //             i--;
    //         }
    //     }
    // }

    // for all
    // aaaabcda
    // abcd

    cout << s;

    return 0;
}