#include<iostream>
using namespace std;
/*
E
DE
CDE
BCDE
ABCDE
*/
int main()
{
int n;
cin>>n;
int i=1;
while (i<=n)
{

    /* code */
char ch='A'+n-i;
// int a=n-i+1;

    int j=1;
    while (j<=i)
    {
        /* code */
        cout<<ch;
        ch++;
        j++;
        
    }
   cout<<endl;
   i++; 
}
return 0;
}

