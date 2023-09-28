#include <iostream>
#include <cstring>
using namespace std;
// pehla character a hoga
// dusra a,bb hoga,kuch nhi hoga
// bb ke baad a hoga,ya fir kuch nhi

bool checkAB(char input[])
{
    if (input[0] == '\0')
    {
        return true;
    }

    if (input[0] == 'b')
    {
        return false;
    }

    if (input[0] == 'a' && input[1] == '\0')
    {
        return true;
    }

    if (input[0] == 'a')
    {

        if (input[1] =='b' && input[2]=='b')
        {
            if (input[3] == 'a' || input[3] == '\0')
            {
                return true;
            }

            else
            {
                return false;
            }
        }

       
    }

    bool b = checkAB(input + 1);
    return b;
}
// Write your code here

int main()
{
    char s1[50] = "abbaaaaa";
    bool c = checkAB(s1);
    cout << c;

    return 0;
}