#include<iostream>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int i=1;
    while(i<=N)
    {
        int m=1;
        int j=1;
        while(m<=N-i)
        {
            cout<<" ";
            m++;
        }    
        while(j<=2*i-1)
        {
            cout<<"*";
            j++;    
        } 
      cout<<endl;
        i++;
   
    }    
 return 0;
} 
        
            
   
        
    
    