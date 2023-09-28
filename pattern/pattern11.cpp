#include<iostream>
using namespace std;
/*..*
  .***
  *****
  .***
  ..*
// */ 
// N=3
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
    {
        cout<<"*";
        j++;
    }
cout<<endl;
i++;

}
int m=1;
while(m<=N)
{
    int k=1;
    while(k<=m)
    {
        cout<<" ";
        k++;
    }
    int p=1;
    while(p<=N+2-2*m)
    {
        cout<<"*";
        p++;
    }
cout<<endl;
m++;


}
    

return 0;
}



