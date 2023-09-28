#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[100] = "aabcdea";
    char x = 'a';
    int k = strlen(s1);

    for (int i = 0; i < k; i++)
    {
        /* code */
        if (s1[i] == x)
        {
            for (int j = i; j < k; j++)
            {
                s1[j] = s1[j + 1];
                /* code */
            }
            k--;
            i--;
        }
    }

    cout << s1;

    return 0;
}