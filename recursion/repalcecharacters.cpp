#include <iostream>
#include <cstring>
using namespace std;
// abadeafg
// a x
// xbadeafg

void replaceCharacter(char input[], char c1, char c2)
{
    if (input[0] == '\0')
    {
        return;
    }

    if (input[0] != c1)
    {
        replaceCharacter(input + 1, c1, c2);
    }

    else
    {
        input[0] = c2;
        replaceCharacter(input, c1, c2);
    }
}

void replaceCharacter2(char input[], char c1, char c2)
{
    if (input[0] == '\0')
    {
        return;
    }

    if (input[0] == c1)
    {
        input[0] = c2;
    }

    replaceCharacter2(input + 1, c1, c2);
}

int main()
{
    char s1[30] = "abhiaadea";
    replaceCharacter(s1, 'a', 'q');
    replaceCharacter2(s1, 'q', 'd');
    cout << s1;

    return 0;
}
