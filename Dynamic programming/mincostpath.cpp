#include <iostream>
#include <string>
#include <climits>
#include <vector>
using namespace std;
int minCostPath(int input[][4], int m, int n, int i, int j)
{
    if (i == m - 1 && j == n - 1)
    {
        return input[i][j];
    }
    if (i == m - 1)
    {
        int sum = 0;
        for (int t = j; t < n; t++)
        {
            sum = sum + input[i][t];
            /* code */
        }
        return sum;
    }
    if (j == n - 1)
    {
        int sum = 0;
        for (int t = i; t < m; t++)
        {
            sum = sum + input[t][j];
            /* code */
        }
        return sum;
    }
    int a, b, c;
    b = INT16_MAX;
    c = INT16_MAX;
    a = minCostPath(input, m, n, i + 1, j);
    b = minCostPath(input, m, n, i, j + 1);
    c = minCostPath(input, m, n, i + 1, j + 1);
    int d = min(a, min(b, c));
    return input[i][j] + d;

    // Write your code here
}
// 3 4 1 2
// 2 1 8 9
// 4 7 8 1
int main()
{
    int p[3][4]={{3, 4, 1, 2},{ 2, 1 ,8 ,9},{4 ,7 ,8 ,1}};

    int r=minCostPath(p,3,4,0,0);
    cout<<r;


   
    
 

    return 0;
}