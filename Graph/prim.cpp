#include <iostream>
#include <string>
#include <vector>
#include <climits>
using namespace std;
int minimumvertex(bool *visited, int *weight, int n)
{
    int minvertex = -1;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i]&&(minvertex==-1 || weight[i] < weight[minvertex]))
        {
            minvertex = i;
        }
        /* code */
    }
    // or wala condition important h
    return minvertex;
}
void printprim(int **edges, int n)
{
    bool *visited = new bool[n];
    int *parent = new int[n];
    int *weight = new int[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
        /* code */
    }
    for (int i =1; i < n; i++)
    {
        
        weight[i] = INT16_MAX;
        /* code */
    }
    parent[0] = -1;
    weight[0] = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int minvertex = minimumvertex(visited, weight, n);
        visited[minvertex] = true;
      
        for (int j = 0; j < n; j++)
        {
           
            if (edges[minvertex][j]&&!visited[j]&&edges[minvertex][j] < weight[j])
            {
                weight[j] = edges[minvertex][j];
                parent[j] =minvertex;
            }
            /* code */
        }

        /* code */
    }
    for (int i =1; i <n; i++)
    {
        if (i < parent[i])
        {
            cout << i << " " << parent[i] << " " << weight[i]<<endl;
        }
        else
        {
            cout << parent[i] << " " << i << " " << weight[i]<<endl;
        }
        /* code */
    }
    delete[] visited;
    delete[] weight;
    delete[] parent;
}
int main()
{
    int n, e;
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
        int f, s,w;
        cin >> f >> s>>w;
        edges[f][s] =w;
        edges[s][f] = w;
    }
    printprim(edges,n);
    for (int i = 0; i <n; i++)
    {
        delete[]edges[i];
        /* code */
    }
    delete[]edges;
    


    return 0;
}