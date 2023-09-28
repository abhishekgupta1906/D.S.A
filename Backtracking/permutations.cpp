#include <iostream>
#include <string>
#include <vector>
using namespace std;
// ek string given h uska sara permutation vector me store krwao
void storepermutation(string input, string output)
{
    if (input.length() == 0)
    {
        cout << output << endl;
        return;
    }

    for (int i = 0; i < input.length(); i++)
    {
        /* code */
        string s=input.substr(0,i)+input.substr(i+1);
        storepermutation(s,output+input[i]);
    }

    /* code */
}
int main()
{
    string in = "abc";
    storepermutation(in," ");

    return 0;
}