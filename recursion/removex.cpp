#include <iostream>
#include <cstring>
using namespace std;
void removeX(char input[])
{
    // Write your code here
    int j = strlen(input);
    if (input[0] == '\0')
    {
        return;
    }

    removeX(input + 1);

    if (input[0] == 'x')
    {
        for (int i = 0; i < j + 1; i++)
        {
            /* code */
            input[i] = input[i + 1];
        }
    }

    else
    {
        return;
    }
}

int main()
{
    char s1[10] = "xxpixt";
    removeX(s1);
    cout<<s1;

    return 0;
}