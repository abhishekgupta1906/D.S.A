#include <iostream>
#include <string>
#include <vector>
using namespace std;
void dfs(vector<vector<int>> &cake, int n, int i, int j, bool **visited, int&count)
{
  
    visited[i][j] = true;
    // i-1 ,j
    if (i - 1 >= 0 && !visited[i - 1][j] && cake[i - 1][j] == 1)
    {
        count++;
        dfs(cake, n, i - 1, j, visited, count);
    }
    if (j - 1 >= 0 && !visited[i][j - 1] && cake[i][j - 1] == 1)
    {
        count++;
        dfs(cake, n, i, j - 1, visited, count);
    }
    if (j + 1 < n && !visited[i][j + 1] && cake[i][j + 1] == 1)
    {
        count++;
        dfs(cake, n, i, j + 1, visited, count);
    }
    if (i + 1 < n && !visited[i + 1][j] && cake[i + 1][j] == 1)
    {
        count++;
        dfs(cake, n, i + 1, j, visited, count);
    }
}

int getBiggestPieceSize(vector<vector<int>> &cake, int n)
{
    int count = 0;
    bool **visited = new bool *[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = new bool[n];
        /* code */
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = false;
            /* code */
        }

        /* code */
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (cake[i][j] == 1 && !visited[i][j])
            {
                int c = 0;
                // count the number of 1s
                dfs(cake, n, i, j, visited, c);
                count = max(count, c+1);
            }
            /* code */
        }

        /* code */
    }
    for (int i = 0; i < n; i++)
    {
        delete[] visited[i];

        /* code */
    }
    delete[] visited;
    return count;

    // Write your code here
}
int main()
{
    int n;
    cin >> n;

    vector<vector<int>> cake(n, vector<int>(n));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> cake[i][j];
        }
    }

    cout << getBiggestPieceSize(cake, n);

    return 0;
}