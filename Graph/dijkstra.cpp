#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;
int minimumvertex(bool *visited, int *distance, int n)
{
    int minvertex = -1;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i]&&(minvertex==-1 || distance[i] < distance[minvertex]))
        {
            minvertex = i;
        }
        /* code */
    }
    // or wala condition important h
    return minvertex;
}
void printdiksjtra(int **edges, int n)
{
    bool *visited = new bool[n];
    int *distance = new int[n];
    visited[0] = false;
    distance[0] = 0;

    for (int i = 1; i < n; i++)
    {
        visited[i] = false;
        distance[i] =INT16_MAX;
        /* code */
    }
    //
    for (int i = 0; i < n-1; i++)
    {
        int minvertex = minimumvertex(visited, distance, n);
        visited[minvertex]=true;
        for (int j = 0; j < n; j++)
        {
            if (edges[minvertex][j] && !visited[j])
            {
                int path = distance[minvertex] + edges[minvertex][j];
                if (path < distance[j])
                {
                    distance[j] = path;
                }
            }
            /* code */
        }

        /* code */
    }
    for (int i = 0; i < n; i++)
    {
        cout << i <<" "<< distance[i] << endl;
        /* code */
    }
    delete[] visited;
    delete[] distance;
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
        int f, s, w;
        cin >> f >> s >> w;
        edges[f][s] = w;
        edges[s][f] = w;
    }
    printdiksjtra(edges,n);
    for (int i = 0; i < n; i++)
    {
        delete[] edges[i];
        /* code */
    }
    delete[] edges;

    return 0;
}