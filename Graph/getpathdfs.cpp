#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<int> *getpathDFS(int **edges, int n, int v1, int v2, bool *visited)
{
    if (v1 == v2)
    {
        vector<int> *output = new vector<int>();
        output->push_back(v2);
        return output;
    }

    visited[v1] = true;
    for (int i = 0; i < n; i++)
    {
        if (edges[v1][i] == 1 && !visited[i])
        {
            vector<int> *output = getpathDFS(edges, n, i, v2, visited);
            if (output != NULL)
            {
                output->push_back(v1);
                return output;
            }
        }
        /* code */
    }
    return NULL;
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
    vector<int> *v = getpathDFS(edges, n, v1, v2, visited);
    if (v != NULL)
    {
        for (int i = 0; i < v->size(); i++)
        {
            cout << v->at(i) << " ";
            /* code */
        }
        delete v;
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