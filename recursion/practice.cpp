#include<iostream>
#include<cstring>
using namespace std ;
// subsequence print krna h

int subsequence(string input,string output[])
{
    if(input.size()==0)
    {
        output[0]=" ";
        return 1;
        
    }

    string b=input.substr(1);
    int c=subsequence(b,output);
    for (int i = 0; i <c; i++)
    {
        /* code */
        output[i+c]=input[0]+output[i];
    }

    return 2*c;
    


}


int main()
{
    string s1="def";
    
    string op[1000];
    int m= subsequence(s1,op);
    for (int i = 0; i <m; i++)
    {
        cout<<op[i]<<endl;
        /* code */
    }
    

return 0;
}