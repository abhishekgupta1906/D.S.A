#include<iostream>
using namespace std;
/*
...1
..12
.123
12343
*/
int main()
{
 int n;
 cin>>n;
 int i=1;
 while(i<=n)
 {
    int k=1;
    while(k<=n-i)
    {
        cout<<" ";
        k++;
    }
    int j=1;
    while(j<=i)
    {
        cout<<j;
        j++;

    }
    cout<<endl;
    i++;
 }
return 0;
}