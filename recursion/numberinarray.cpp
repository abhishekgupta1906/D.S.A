#include <iostream>
using namespace std;
bool checknumber(int a[], int size, int x)
{
    if(size==0)
    {
        return false ;
    }



    if ( a[0] == x)
    {
        return true;
    }

    bool smallouput;

    if (a[0] != x)
    {
        smallouput = checknumber(a + 1, size - 1, x);
    }

    if (smallouput)
    {
        return true;
    }

    else
    {
        return false;
    }
}
int main()
{
    int A[4] = {2,5,7,9};
    int o = checknumber(A,4,5);
    cout << o;

    return 0;
}