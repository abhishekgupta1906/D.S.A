#include <iostream>
using namespace std;

int count(int n)

{
    if (n == 0)
    {
        return 0;
    }

    int ans = count(n / 10);

    if (n % 10 == 0)
    {
        return ans + 1;
    }

    else
    {
        return ans;
    }
}

int main()
{
    // int n;
    // cin>>n;
    // int rem;
    // int count=0;
    // while (n>0)
    // {
    //     rem=n%10;
    //     if(rem==0)
    //     {
    //         count++;

    //     }

    //     n=n/10;
    //     /* code */
    // }

    // cout<<count;
    int num = 4005;
    int o = count(num);
    cout << o;

    return 0;
}