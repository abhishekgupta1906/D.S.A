#include <iostream>
#include <cstring>
using namespace std;
// 1-a
// 2-b........26-z

void print_AllPossibleCodes(string input, string output)
{
    /*
    Given the input as a string, print all its possible combinations. You do not need to return anything.

    */
    if (input.length() == 0)
    {
        cout << output << endl;
        return;
    }
    int i = input[0] - '0';
    char c = 'a' + i - 1;
    //    c baad me isliy add kiye kyuki output string pehle empty tha
    print_AllPossibleCodes(input.substr(1),output+c);
    
    if (input[1] != '\0')
    {
        i = i * 10 + input[1] - '0';
        c = 'a' + i - 1;
        if (i <= 26 && i >= 10)
        {
            print_AllPossibleCodes(input.substr(2), output + c);
        }

        
    }
}

int main()
{
    string input = "1123";
    print_AllPossibleCodes(input, " ");

    return 0;
}