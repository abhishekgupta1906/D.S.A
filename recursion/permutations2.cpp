#include <iostream>
#include <cstring>
using namespace std;
int returnPermutations(string input, string output[])
{
    if (input.length() == 0)
    {
        output[0] = " ";
        return 1;
    }
    string s;
    string o1[10000];
    int k = 0;
    for (int i = 0; i < input.length(); i++)
    {
        char c = input[i];
        s = input.substr(0, i) + input.substr(i + 1);

        int a = returnPermutations(s, o1);
        for (int j = 0; j < a; j++)
        {
            output[k] = c + o1[j];
            k++;

            /* code */
        }

        /* code */
    }

    return k;
}

int main()
{
    string s1 = "123";
    string op[10000];
    int b = returnPermutations(s1, op);
    for (int i = 0; i < b; i++)
    {
        cout << op[i] << endl;
        /* code */
    }

    return 0;
}