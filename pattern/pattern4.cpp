#include<iostream>
using namespace std;
/*
A
BB
CCC
*/
int main()
{
int n;
cin>>n;
int i=1;
while (i<=n)
{
    /* code */
char ch='A'+i;
    int j=1;
    while (j<=i)
    {
        /* code */
        cout<<ch;

        j++;
    }
   cout<<endl;
   i++; 
}

return 0;
}
