#include <iostream>
#include <cstring>
using namespace std;
void removeConsecutiveDuplicates(char *input)
{
    if (input[0] == '\0')
    {
        return;
    }

    if (input[0] == input[1])
    {
        for (int i = 0; i < strlen(input) + 1; i++)
        {
            /* code */
            input[i] = input[i + 1];
        }

        removeConsecutiveDuplicates(input);
    }

    else
    {
        removeConsecutiveDuplicates(input + 1);
    }
}
int main()
{
    char s1[30] = "aaabcdddee";
    removeConsecutiveDuplicates(s1);
    cout << s1;

    return 0;
}