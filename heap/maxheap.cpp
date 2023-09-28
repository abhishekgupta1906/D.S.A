#include <iostream>
#include <string>
#include <vector>
#include "heapclass2.h"
using namespace std;
bool isMaxHeap(int pq[], int n)
{

    int pi = 0;
    int lci=2*pi+1;
    while (pi < n && lci<n)
    {
        int rci=2*pi+2;
        if(pq[pi]<max(pq[lci],pq[rci])&& rci<n)
        {
            return false;
        }
        else if(pq[pi]<pq[lci])
        {
            return false;
        }
        else
        {
            pi++;
            lci=2*pi+1;
        }

    }
    return true;

    // Write your code here
}
int main()
{

    return 0;
}