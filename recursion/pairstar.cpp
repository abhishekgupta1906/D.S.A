#include <iostream>
#include <cstring>
using namespace std;
void pairStar(char input[])
{
    // Write your code here
    int j = strlen(input);
    if (input[0] == '\0')
    {
        return;
    }

    pairStar(input + 1);

    if (input[0] == input[1])
    {
        for (int i =j; i>=1 ; i--)
        {
            /* code */
            input[i+1] = input[i];
        }
        input[1]='*';
    }

    else
    {
        return;
    }
}

int main()
{
    char s1[10] = "xxpixt";
    pairStar(s1);
    cout<<s1;

    return 0;
}