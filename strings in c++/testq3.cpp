#include<iostream>
#include<cstring>
#include<climits>
using namespace std;
// this is  test string
int main()
{
    char s[100];
    char f[100];
    cin.getline(s,100);
   int m=strlen(s);

   int start=0;
   string s2;
   int minlen=INT16_MAX;

   bool a=false;

   for (int i = 0; i <m; i++)
   {
    /* code */
    int len=0;
    string s1=" ";
    if(s[i]==' '||i==m)
    {
        int end=i-1;
        while(start<=end)
        {
            len++;
            s1=s1+s[start];
            start++;

            
        }

        if(len<minlen)
        {
            minlen=len;
            cout<<s1;
            
        }
        

    }

    start=i+1;

    
       

   }

   


   





   




    


return 0;
}


    