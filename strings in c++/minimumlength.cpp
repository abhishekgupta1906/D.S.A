#include <iostream>
#include <cstring>
#include <vector>
using namespace std;
int main()
{
    char a[100];
    cout << "enetr the string :";
    cin.getline(a, 100);
    int j = strlen(a);
    int start = 0;
    int minlenght = INT16_MAX;
    char output[100];

    for (int i = 0; i <= j; i++)
    {
        if (a[i] == ' ' || i == j)
        {
            int len = 0;
            // variable for str
            char str[j];
            int end = i - 1;
            for (int m = start; m <= end; m++)
            {
                str[len] = a[m];
                len++;

                /* code */
            }
            if (len < minlenght)
            {
                minlenght = len;
                strcpy(output,str);
              
            }
            start = i + 1;
        }
        /* code */
    }
    cout<<output;
    // brute force

    return 0;
}