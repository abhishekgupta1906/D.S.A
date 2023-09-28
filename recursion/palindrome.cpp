#include <iostream>
#include <cstring>
using namespace std;
bool ispalindrome(char input[], int start, int end)
{

    if (start >= end)
    {
        return true;
    }

    if(input[start]!=input[end])
    {
        return false;
    }



    bool a = ispalindrome(input, start + 1, end - 1);
   return a;
}

// }


int main()
{
    char s1[100] = "aba";
    // char s2[10];
    // strcpy(s2,s1);

    // int j=strlen(s2);

    // for (int i = 0; i <j/2; i++)
    // {
    //     /* code */
    //     char c=s1[i];
    //     s1[i]=s1[j-1-i];
    //     s1[j-1-i]=c;
    // }

    // cout<<s1;
    bool c = ispalindrome(s1,0,strlen(s1)-1);
    cout << c;

    return 0;
}
