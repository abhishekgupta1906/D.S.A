#include<iostream>
#include<cstring>
#include<stack>
using namespace std ;
bool isBalanced(string expression) 
{
    // Write your code here
    stack<char> s1;
    for (int i = 0; i <expression.length(); i++)
    {
        /* code */
        if(expression[i]=='(')
        {
            s1.push(expression[i]);
        }

        else
        {
            if(s1.empty())
            {
                return false;
            }
            else if(s1.top()!='(')
            {
                return false;
            }
          
            else
            {
                s1.pop();
            }
        }

    }

    if(s1.empty())
    {
        return true;
    }
    return false;
    
}


int main()
{
    string s1="(()))";
    bool a=isBalanced(s1);
    cout<<a;
    

return 0;
}