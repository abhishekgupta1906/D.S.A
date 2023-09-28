#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[100] = "abc";
    int start = 0;
    int end = strlen(s1) - 1;
    while (start <= end)
    {
        /* code */
        for (int i = start; i < end + 1; i++)
        {
            /* code */
            for (int j = start; j <= i; j++)
            {
                cout << s1[j];
                /* code */
            }
            cout << endl;
        }
        start++;
    }

    return 0;
}