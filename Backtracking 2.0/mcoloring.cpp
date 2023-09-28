#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool isplace(int col, int color[], int v, vector<vector<int>> &mat)
{
    for (int j = 0; j < mat.size(); j++)
    {
        if (j == v)
        {
            continue;
        }
        if (mat[v][j] == 1 && color[j] == col)
        {
            return false;
        }
        /* code */
    }
    return true;
}
bool solve(int v, vector<vector<int>> &mat, int m, int color[])
{
    if (v == mat.size())
    {
        return true;
    }
    for (int i = 1; i <= m; i++)
    {
        if (isplace(i, color, v, mat))
        {
            color[v] = i;
            if (solve(v + 1, mat, m, color))
            {
                return true;
            }
            color[v] = 0;
        }
        /* code */
    }
    return false;
}
string graphColoring(vector<vector<int>> &mat, int m)
{
    int *color = new int[mat.size()];
    // mat.size() no of vertex
    for (int i = 0; i < mat.size(); i++)
    {
        color[i] = 0;
        /* code */
    }
    bool b = solve(0, mat, m, color);
    string s = " ";
    if (b)
    {
        s = "YES";
    }
    else
    {
        s = "NO";
    }
    delete[] color;
    return s;

    // Write your code here
}
int main()
{
    int n;
    int e;
    cin >> n >> e;

    
   
    return 0;
}