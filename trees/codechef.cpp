#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        string s1;
        cin>>s1;
        int c=0;
        for (int i = 0; i <s1.length(); i++)
        {
            if(s1[i]=='1')
            {
                c++;
            }
        }
        if(s1=="1" || s1=="10")
        {
            cout<<"No"<<endl;

        }
        else if(c<=3)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        
    }

    

    return 0;
}