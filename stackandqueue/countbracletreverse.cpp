#include <iostream>
#include <cstring>
#include <stack>
using namespace std;
int countBracketReversals(string input)
{
    // Write your code here
    int co = 0, ce = 0, count = 0;
    char c1, c2;
    stack<char> s1;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == '}')
        {
            ce++;
            if (s1.empty())
            {
                s1.push(input[i]);
            }
            else if (!s1.empty() && s1.top() == '}')
            {
                s1.pop();
            }
            else
            {
                s1.push(input[i]);
            }
        }
        else
        {
            co++;
            s1.push(input[i]);
        }
        /* code */
    }
    if ((co + ce) % 2 == 1)
    {
        return -1;
    }

    while (!s1.empty())
    {
        c1 = s1.top();
        s1.pop();
        c2 = s1.top();
        if (c1 == c2)
        {
            count = count +1;
        }
        else
        {
            count=count+2;
        }
        s1.pop();
        
    }

    return count;
}
int main()
{

    return 0;
}