#include <iostream>
#include <cstring>
using namespace std;
int returnPermutations(string input, string output[])
{
    if (input.length() == 0)
    {
        return 1;
    }
    // dusra string array

    string o1[10000];
    char b = input[0];
    // permutation nikal rhe iske bad wale ka
    int a = returnPermutations(input.substr(1), o1);
    int k = 0;
    for (int i = 0; i < a; i++)
    {
        // differnt position me b ko add krna
        // -ef e-f ef-
        for (int m = 0; m < o1[i].length() + 1; m++)
        {
            output[k] = o1[i].substr(0, m) + b + o1[i].substr(m);
            k++;
            /* code */
        }

        /* code */
    }

    return a * input.length();
}

int main()
{
    string s1 = "def";
    string op[10000];
    int c = returnPermutations(s1, op);
    for (int i = 0; i < c; i++)
    {
        cout << op[i] << endl;
        /* code */
    }

    return 0;
}