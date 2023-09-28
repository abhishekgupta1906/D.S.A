#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[100] = "abcbdccaa";
    int m = strlen(s);
    
    char maxoccur;
    int maxcount = 0;
    for (int i = 0; i < m; i++)
    {
         int count = 0;
        /* code */
        // j=0 se isliy intialise hua kyu ki jb pehla character man lete ha h to uske count 3 then jb dusra a tbhi count 3
        for (int j = 0; j <m; j++)
        {
            if (s[i] == s[j])
            {
                count++;
            }
            /* code */
        }

        if(maxcount<count)
        {
            maxcount=count;
            maxoccur=s[i];
        }
    }

    cout<<maxcount;
    cout<<maxoccur;

    return 0;
}