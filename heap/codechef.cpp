#include <iostream>
#include<cmath>
#include <string>
#include <vector>
#include <unordered_map>
int solve(int a, int b, int c)
{
    if (a >= c || b >= a || b <= c)
    {
        return -1;
    }
    int i = 0;
    while (i <pow(2,30))
    {
        if ((a ^ i) < (b ^ i) && (b ^ i) < (c ^ i))
        {
            return i;
        }
        i++;
    }
    return -1;
}

using namespace std;
int main()
{
    int t;
    while(t--)
    {
        int x,y,z;
        cin>>x>>y>>z;
        int c=solve(x,y,z);
        cout<<c<<endl;
    }

    return 0;
}