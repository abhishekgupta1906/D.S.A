#include <iostream>
using namespace std;
// 4 2
// 1 2
// 3 4
// 5 6
// 7 8
int main()
{
    //   int arr[4][2]={{1,2},{3,4},{5,6},{7,8}};
    
        int m, n;
    cin >> m >> n;
    int arr[m][n];
    // i-row j-column

    for (int i = 0; i < m; i++)
    {

        /* code */
        for (int j = 0; j < n; j++)
        {
            /* code */
            cin >> arr[i][j];
        }
    }

    //   column major order
    for (int j = 0; j < n; j++)
    {
        int sum = 0;
        /* code */
        for (int i = 0; i < m; i++)
        {
            /* code */
            sum = sum + arr[i][j];
        }
        cout << sum << " ";
    }

    return 0;
}
