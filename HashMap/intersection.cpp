#include <iostream>
#include <unordered_map>
#include <cstring>
using namespace std;
// 4
// 2 6 1 2
// 5
// 1 2 3 4 2
// 1 2 2

void printIntersection(int arr1[], int arr2[], int n, int m)
{

    unordered_map<int, int> o;
    //
    for (int i = 0; i < n; i++)
    {
        /* code */
        
        o[arr1[i]]++;
    }
    for (int j = 0; j < m; j++)
    {
        /* code */
        if (o.count(arr2[j]) > 0)
        {
            cout << arr2[j] << endl;
            o[arr2[j]]--;
        }
        if (o[arr2[j]] == 0)
        {
            o.erase(arr2[j]);
        }
    }
}
int main()
{

    return 0;
}