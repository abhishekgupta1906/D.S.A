#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool haspath(int **edges, int n, int v1, int v2, bool *visited)
{
    if (edges[v1][v2] == 1)
    {
        return true;
    }
    visited[v1] = true;
    for (int i = 0; i < n; i++)
    {
        if (i == v1)
        {
            continue;
        }
        if (edges[v1][i] == 1 && !visited[i])
        {
            bool b = haspath(edges, n, i, v2, visited);
            if (b == true)
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    int n;
    int e;
    cin >> n >> e;
    int v1, v2;

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
    cin >> v1 >> v2;
    bool *visited = new bool[n];

    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }
    bool c = haspath(edges, n, v1, v2, visited);
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
    delete[] visited;

    return 0;
}