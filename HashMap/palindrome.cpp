#include <iostream>
#include<bits/stdc++.h> 
#include <vector>
#include <cstring>
using namespace std;
bool checkpalindrome(string word, int si, int ei)
{
    if (si >= ei)
    {
        return true;
    }
    if (word[si] != word[ei])
    {
        return false;
    }
    bool b = checkpalindrome(word, si + 1, ei - 1);
    return b;
}
bool checkpalindrome(string word)
{
    return checkpalindrome(word, 0, word.length() - 1);
}
bool isPalindromePair(vector<string> words)
{
    for (int i = 0; i <words.size(); i++)
    {
        if(checkpalindrome(words[0]))
        {
            return true;
        }
        /* code */
    }
    for (int i = 0; i <words.size(); i++)
    {
        for (int j = 0; j <words.size(); j++)
        {
            if(j==i)
            {
                continue;
            }
            string s1=words[i]+words[j];
            if(checkpalindrome(s1))
            {
                return true;
            }
            /* code */
        }
        
        /* code */
    }
    return false;
    
    
    // Write your code here
}
int main()
{
    string s1 = "abh";
    // bool b = checkpalindrome(s1);
    // cout << b;
    reverse(s1.begin(),s1.end());
    string s2="abh";
    string s3=" ";
    for (int i =s2.length()-1; i>=0; i--)
    {
        s3=s3+s2[i];
        /* code */
    }
    cout<<s3;
    

    cout<<s1;

    return 0;
}