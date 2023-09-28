#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[100]="aaabbcce";
    string s1=" ";
    int m=strlen(s);

    for (int i = 0; i <m; i++)
    {
        int count=1;
        /* code */
        
        while(s[i]==s[i+1])
        {
            count++;
            i++;
        }

        if(count>1)
        {
            s1=s1+s[i]+(char)(count+'0');
        }

        else
        {
            s1=s1+s[i];
          
        }
    }

    cout<<s1;
    
    
    


   

   

return 0;
}