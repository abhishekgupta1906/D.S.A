#include<iostream>
using namespace std;
/*
A
BC
CDE
DEFG
*/
int main()
{
int n;
cin>>n;
int i=1;
while (i<=n)
{
    /* code */
char ch='A'+i-1;
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
