#include<iostream>
#include<cstring>
using namespace std ;
int main()
{
    int A[50]={1,2,1};
    // int N, Y;
    // cin>>N>>Y;
    
    // for (int i = 0;i<N; i++)
    // {
    //     cin>>A[i];
    //     /* code */
    // }
    // int x;
    // A[N]=x;
    // N++;
    int c=A[0];
    // int a=5;
    // int b=6;
    // int d= a |b;
    // cout<<d;
    for (int i=1; i <3; i++)
    {
        c |=A[i];
        /* code */
    }
    cout<<c;
    

    





    
    

    
    

return 0;
}