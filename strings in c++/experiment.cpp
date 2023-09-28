#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s1[6]="abhi";
    string s2="";
    int b=5;
    s2=s2+s1[0]+(char)(b+'0');
    cout<<s2;

return 0;
}