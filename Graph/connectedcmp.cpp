#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
// pushdfs aur printdfs lagbhag same h
void pushdfs(int **edges, int n, int sv, bool *visited, vector<int> &a)
{
    a.push_back(sv);
    visited[sv] = true;
    for (int i = 0; i < n; i++)
    {
        if (i == sv)
        {
            continue;
        }
        if (edges[sv][i] == 1)
        {
            if (visited[i])
            {
                continue;
            }
            pushdfs(edges, n, i, visited, a);
        }
    }
}
// for disconnected components
void pushdfs(int **edges, int n)
{
    bool *visited = new bool[n];
    vector<vector<int>> p;
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
        /* code */
    }
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            vector<int> a;
            pushdfs(edges, n, i, visited, a);
            sort(a.begin(), a.end());
            p.push_back(a);
        }
        /* code */
    }
    for (int i = 0; i < p.size(); i++)
    {
        for (int j = 0; j < p[i].size(); j++)
        {
            cout << p[i][j] << " ";
            /* code */
        }
        cout << endl;

        /* code */
    }

    delete[] visited;
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
    pushdfs(edges, n);
    for (int i = 0; i < n; i++)
    {
        delete[] edges[i];
        /* code */
    }
    delete[] edges;

    return 0;
}