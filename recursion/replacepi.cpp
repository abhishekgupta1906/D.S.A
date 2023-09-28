#include <iostream>
#include <cstring>
using namespace std;
// 3.14 chracter h
//  '3' . 1 4



void replacePi(char input[])
{
    int j = strlen(input);
    if (j == 0 || j == 1)
    {
        return;
    }

    replacePi(input + 1);

    if (input[0] == 'p' && input[1] == 'i')
    {
        for (int i = j + 1; i >=2; i--)
        {
            input[i + 2] = input[i];
            /* code */
        }

        j = j + 2;

        input[0] = '3';
        input[1] = '.';
        input[2] = '1';
        input[3] = '4';
    }

    else
    {
        return;
    }
}

int main()
{
    char s1[100] = "pixpi";
    replacePi(s1);
    cout << s1;

    return 0;
}
