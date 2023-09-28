#include <iostream>
#include <cstring>
#include <stack>
using namespace std;
// agar paranthesis ke andar count ka value >1 jda toh redundant nhi h
// (a+b) count=3
bool checkRedundantBrackets(string expression)
{
    // Write your code here
    for (int i = 0; i < expression.length(); i++)
    {
        stack<char> s1;
        if (expression[i] = '(')
        {
            while (expression[i] != ')')
            {
                s1.push(expression[i]);
                i++;
            }

            while (!s1.empty())
            {
                int count = 0;
                while (s1.top() != '(')
                {
                    count++;
                    s1.pop();
                }
                s1.pop();
                if (count <= 1)
                {
                    return true;
                }
            }
        }
    }

    return false;
}

int main()
{
    // string s1 = "((a+b))";
    // bool a = checkRedundantBrackets(s1);
    // cout << a;

    return 0;
}