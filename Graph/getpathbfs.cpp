#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;
vector<int> *getpathBFS(int **edges, int n, int v1, int v2, bool *visited)
{
    queue<int> q;
    unordered_map<int, int> m;
    // kon push hua kisne push kiya
    q.push(v1);
    visited[v1] = true;
    while (!q.empty())
    {
        int c = q.front();
        q.pop();
        for (int i = 0; i < n; i++)
        {
            if (edges[c][i] == 1 && !visited[i])
            {
                q.push(i);
                visited[i] = true;
                m[i] = c;
                if (i == v2)
                {
                    vector<int> *output = new vector<int>();
                    output->push_back(v2);
                    int p = v2;
                    while (m[p] != v1)
                    {
                        output->push_back(m[p]);
                        p = m[p];
                    }
                    output->push_back(v1);
                    return output;
                }
            }
            /* code */
        }
    }
    return NULL;
}
// pehla map kaise lete same loop me v2 pr rookna h
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
    vector<int> *v = getpathBFS(edges, n, v1, v2, visited);
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