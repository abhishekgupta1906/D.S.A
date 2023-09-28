#include <iostream>
#include <cstring>
using namespace std;
int board[10][10];
bool check(int n, int rowNo, int colNo)
{
    // for column
    for (int i =rowNo-1; i>=0; i--)
    {
        /* code */
        if (board[i][colNo] == 1)
        {
            return false;
        }
    }
    // for left upper diagonal
    for (int i =rowNo-1,j=colNo+-1 ; i>=0&&j>=0; i--,j--)
    {
        /* code */
        if (board[i][j] == 1)
        {
            return false;
        }
    }
 
    // for right upper diagonal
     for (int i =rowNo-1,j=colNo+1 ; i>=0&&j<n; i--,j++)
    {
        /* code */
        if (board[i][j] == 1)
        {
            return false;
        }
    }

   
    return true;
}
void placequeen(int rowNo, int n)
{
    if (rowNo == n)
    {
        for (int i = 0; i <n; i++)
        {
            /* code */
            for (int j = 0; j <n; j++)
            {
                /* code */
                cout << board[i][j] << " ";
            }
        }
        cout << endl;
        return;
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        if (check(n, rowNo, i))
        {
            board[rowNo][i] = 1;
            placequeen(rowNo + 1, n);
            board[rowNo][i] = 0;
        }
    }
}
void placequeen(int n)
{
    memset(board, 0, 10* 10* sizeof(int));
    placequeen(0,n);

    
}

int main()
{
    int n;
    cin>>n;
    placequeen(n);

    return 0;
}