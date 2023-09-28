#include <iostream>
#include <string>
#include <cstring>
#include <vector>
using namespace std;
// brute force
int minimumcount(int n)
{
    if (n <= 3)
    {
        return n;
    }

    int c = n;

    for (int i = 1; i * i <= n; i++)
    {
        int a = minimumcount(n - (i * i));
        c = min(a, c);

        /* code */
    }
    return 1 + c;
}
// memoization
int minimumcounthelper(int *ans, int n)
{
    if (ans[n] != -1)
    {
        return ans[n];
    }
    if (n <= 3)
    {
        return n;
    }

    int c = n;

    for (int i = 1; i * i <= n; i++)
    {
        int a = minimumcounthelper(ans, n - (i * i));
        c = min(a, c);

        /* code */
    }
    ans[n] = 1 + c;
    return ans[n];
}
int minimumcount2(int n)
{
    int *ans = new int[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        ans[i] = -1;
        /* code */
    }
    int b = minimumcounthelper(ans, n);
    delete[] ans;
    return b;
}
// dp sloution
int minimumcount3(int n)
{
    int *ans = new int[n + 1];
  ans[0] = 0;
  ans[1] = 1;
  ans[2] = 2;
  ans[3] = 3;
  for (int i = 4; i < n + 1; i++) {
    int c=i;
    for (int j = 1; j * j <= i; j++) {
      int a = ans[i - (j * j)];
      c=min(a+1,c);

      /* code */
    }
    ans[i]=c;

    /* code */
  }
  int d = ans[n];
  delete[] ans;
  return d;
}


int main()
{
   int c=minimumcount3(15);
   cout<<c;
    return 0;
}
