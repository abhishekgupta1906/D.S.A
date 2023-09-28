#include<iostream>
using namespace std;
/*
n=4
1
21
321
4321
*/
int main()
{
int n;
cin>>n;
int t;
// yahan t bta rha ki print kya krna 
// t=i t--
int i=1;
while(i<=n)
{
    
    int j=1;
    t=i;

    while(j<=i)
    {
        cout<<t;
        t--;
        j++;
    }
    cout<<endl;
    i++;
}
return 0;
}


