#include <iostream>
using namespace std;
// 6
// 1 2 3 4 5 6
void print(int n)
{
   if(n==0)
   {
    return ;
   }

    print(n-1);
    cout<<n<<" ";
}

int main()
{
    int x;
    cin >> x;
    print(x);

    return 0;
}