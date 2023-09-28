#include <iostream>
#include <cstring>
using namespace std;
void subsequence(string ip, string op)
{
    if (ip.size() == 0)
    {
        cout << op;
        return;
    }

    string s2 = ip.substr(1);
    subsequence(s2, op);
    subsequence(s2, op + ip[0]);
}

void printkeypad(int num, string op)
{
    if (num == 0 || num == 1)
    {

        cout << op << endl;
        return;
    }

    int a = num / 10;
    int b = num % 10;
    string w[100]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string s3=w[b];

    for (int i = 0; i < s3.size(); i++)
    {
        printkeypad(a, s3[i] + op);

        /* code */
    }
    //    kuch na kuch lena h
}
int main()
{

    string output = " ";
    printkeypad(23, output);

    return 0;
}