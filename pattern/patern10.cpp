#include<iostream>
using namespace std;
/*..*
  .***
  *****
  .***
  ..*
*/  

int main()
{
int N;
cin>>N;
int i=1;

while(i<=N)
{
    int k=1;
    while(k<=N-i)
    {
        cout<<" ";
        k++;
    }
    int j=1;
    
    while(j<=2*i-1)
    {    cout<<"*";
        j++;
    }
if(i==N-2)
{
    break;
}    
cout<<endl;
i++;
}
int m=N-1;
while(m>=1)
{
    if(m==N-1)
    {
       m++;
       continue;     
    }
    int k=1;
    while(k<=N-m)
    {
        cout<<" ";
        k++;
    }
    int p=1;
    while(p<=2*m-1)
    {
        cout<<"*";
        
        p++;
    }

cout<<endl;
m--;
}

return 0;
}
         


        
 
  


    






