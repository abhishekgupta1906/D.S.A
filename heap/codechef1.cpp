#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;
void solve(string u, int n)
{
    int count = 1;
    char t = u[0];
    string s = " ";
    for (int i = 1; i < n; i++)
    {
        if (t == u[i])
        {
            count++;
        }
        else
        {
            if (count % 2 == 1)
            {
                s = s + t;
            }
            else
            {
                s = s + t;
                s = s + t;
            }
            t = u[i];
            count = 1;
        }
        /* code */
    }
    if (count % 2 == 1)
    {
        s = s + t;
    }
    else
    {
        s = s + t;
        s = s + t;
    }
    cout<<s<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string u;
        cin >> u;
        n = u.length();
        solve(u, n);
        
    }
    return 0;
}