#include<iostream>
#include<string>
#include<cstring>
#include<unordered_map>
using namespace std ;
string uniqueChar(string str) 
{
    unordered_map<char,bool>o;
    string s1="";
    for (int i = 0; i <str.length(); i++)
    {
        /* code */
        if(o.count(str[i])==0)
        {
            o[str[i]]=true;
            s1=s1+str[i];
        }
    }
    return s1;
    
	// Write your code here
}
int main()
{
    string s2="abbcdedd";
    string s1=uniqueChar(s2);
    cout<<s1;

return 0;
}