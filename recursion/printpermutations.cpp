#include <iostream>
#include <cstring>
using namespace std;
void print_Permutations(string input, string output)
{
    if (input.length() == 0)
    {
        cout << output << endl;
        return;
    }

    string s;

    // permutation nikal rhe iske bad wale ka
    for (int i = 0; i < input.length(); i++)
    {
        s = input.substr(0, i) + input.substr(i + 1);
        print_Permutations(s, output + input[i]);

        /* code */
    }
}

int main()
{
    string ip = "abc";
    print_Permutations(ip, "");

    return 0;
}