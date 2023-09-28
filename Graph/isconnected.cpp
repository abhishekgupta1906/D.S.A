#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
void BFS(int **edges, int n, int sv, bool *visited)
{
    if (n == 0)
    {
        return;
    }
    queue<int> q;
    q.push(sv);
    visited[sv] = true;
    while (!q.empty())
    {
        int c = q.front();
        q.pop();
        for (int i = 0; i < n; i++)
        {
            if (i == c)
            {
                continue;
            }
            if (edges[c][i] == 1)
            {
                if (visited[i] == true)
                {
                    continue;
                }
                q.push(i);
                visited[i] = true;
            }
        }
    }
}
bool isconnected(int **edges, int n, int sv)
{
    bool *visited = new bool[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }
    BFS(edges, n, sv, visited);
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == false)
        {
            return false;
        }
        /* code */
    }
    delete[] visited;
    return true;

    /* code */
}

int main()
{
    int n;
    int e;
    cin >> n >> e;

    int **edges = new int *[n];
    for (int i = 0; i < n; i++)
    {
        edges[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            edges[i][j] = 0;
        }
    }

    for (int i = 0; i < e; i++)
    {
        int f, s;
        cin >> f >> s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }
    bool c = isconnected(edges, n, 0);
    if (c)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    for (int i = 0; i < n; i++)
    {
        delete[] edges[i];
        /* code */
    }
    delete[] edges;

    return 0;
}