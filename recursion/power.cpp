#include<iostream>
using namespace std;
// x^y
int power(int x,int y)
{
    if(y==0)
    {
        return 1;
    }

    int j=power(x,y-1);
    return x*j;
}
int main()
{
    int x,n;
    cin>>x>>n;
    int op=power(x,n);
    cout<<op;



return 0;
}