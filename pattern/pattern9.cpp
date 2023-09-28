#include<iostream>
using namespace std;
/*
...1
..232
.34543
4567654
*/

int main()
{
    int N;
    cin>>N;
    int i=1;
    while(i<=N)
    {
        int m=1;
        while(m<=N-i)
        {
            cout<<" ";
            m++;
        
        }
        int j=1;
        int t=i;
        while (j<=i)
        {
          cout<<t;
          t++;
          j++;

        }
        int p=i-1;
        while(p>=1)
        {
            cout<<p+i-1;
            p--;
        }



        cout<<endl;
        i++;
    }

        

return 0;
}