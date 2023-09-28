#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool isplace(vector<vector<int>> &v, int &row, int &col, int n)
{
    // upper column
    int r = row;
    int c = col;
    while (r >= 0)
    {
        if (v[r][c] == 1)
        {
            return false;
        }
        r--;
    }
    // left upper diagonal
    r = row;
    c = col;
    while (r >= 0 && c >= 0)
    {
        if (v[r][c] == 1)
        {
            return false;
        }
        r--;
        c--;
    }

    // left lower diagonal
    r = row;
    c = col;
    while(r>=0 && c<n)
    {
         if (v[r][c] == 1)
        {
            return false;
        }
        r--;
        c++;
    }
    return true;
}
void add(vector<vector<int>> & ans,vector<vector<int>> &v,int n)
{
    vector<int>t;
    for (int i = 0; i<n; i++)
    {
        for (int j = 0; j <n; j++)
        {
            t.push_back(v[i][j]);
            /* code */
        }
        
        /* code */
    }
    ans.push_back(t);
    
}
void solveNQueens(vector<vector<int>> &ans, vector<vector<int>> &v, int n, int row)
{
    if (row == n)
    {
        // pura v bhar gya row>n-1
        add(ans,v,n);
       
        return;
    }
    // har ek cloumn pr jna h
    for (int j = 0; j < n; j++)
    {
        if (isplace(v, row, j, n))
        {
            v[row][j] = 1;
            solveNQueens(ans, v, n, row + 1);
            // backtracking step
            v[row][j] = 0;
        }

        /* code */
    }
}

vector<vector<int>> solveNQueens(int n)
{
    vector<vector<int>> ans;
    vector<vector<int>> v(n, vector<int>(n, 0));
    // iska n*n bna do array set krdo 0
    solveNQueens(ans, v, n, 0);

    return ans;
    // Write your code here.
}
int main()
{
    vector<vector<int>>ans;
    ans=solveNQueens(4);
    for (int i = 0; i <ans.size(); i++)
    {
        for (int j = 0; j <ans[i].size(); j++)
        {
            cout<<ans[i][j]<<" ";
           
          
            
         
            /* code */
        }
        cout<<endl;
   
       
        
        /* code */
    }
 
    



    return 0;
}