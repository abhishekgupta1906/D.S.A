#include <iostream>
#include <cstring>
using namespace std;
// 1-a
// 2-b..............26-z

int getCodes(string input, string output[10000])
{
    /*
    You are given the input text and output string array. Find all possible codes and store in the output string array. Don’t print the codes.
    Also, return the number of codes return to the output string. You do not need to print anything.
    */

    if (input.length() == 0)
    {
        return 1;
    }

    int i = input[0] - '0';
    char c = 'a' + i - 1;
    // if (input.length() == 1)
    // {
    //     output[0] = c;
    //     return 1;
    // }
    
    string o2[10000];

    int a = getCodes(input.substr(1), output);
    for (int i = 0; i <a; i++)
    {
        output[i]=c+output[i];
        /* code */
    }
    

    if (input[1] != '\0')
    {
        i = i * 10 + input[1] - '0';
        char d = 'a' + i - 1;
        if(i<=26&&i>=10)
        {
            int b=getCodes(input.substr(2),o2);
            for (int i = 0; i <b; i++)
            {
                output[i+a]=d+o2[i];
                /* code */
            }

            return a+b;
        }
       
    }
    return a;
}

int main()
{
    string input = "1123";

    string op[10000];
    int b = getCodes(input, op);
    for (int i = 0; i < b; i++)
    {
        cout << op[i] << endl;
        /* code */
    }

    return 0;
}