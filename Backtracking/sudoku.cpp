#include <bits/stdc++.h>
using namespace std;
bool isempty(int matrix[9][9], int &x, int &y)
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (matrix[i][j] == 0)
            {
                x = i;
                y = j;
                return true;
            }
            /* code */
        }

        /* code */
    }
    return false;
}
bool issafe(int matrix[9][9], int rowno, int colno, int num)
{
    // safe kb hoga jo value nahin clumn me aye,nahi row aur 3X3 box me
    // for row
    for (int i = 0; i < 9; i++)
    {
        if (matrix[rowno][i] == num)
        {
            return false;
        }
        /* code */
    }
    // for column
    for (int i = 0; i < 9; i++)
    {
        if (matrix[i][colno] == num)
        {
            return false;
        }
        /* code */
    }
    // for 3x3 box mtlb konsa 3x3 box
    int rowfac=rowno-(rowno%3);
    int colfac=colno-(colno%3);

    for (int i = 0; i <3; i++)
    {
        for (int j = 0; j <3; j++)
        {
           if(matrix[i+rowfac][j+colfac]==num)
           {
             return false;
           }
            /* code */
        }

        /* code */
    }
    return true;

}
bool sudokusolve(int matrix[9][9])
{
    // empty location mtlb matrix kahan kahan value zero h
    int rowno, colno;
    if (!isempty(matrix, rowno, colno))
    {
        return true;
    }
    for (int i = 1; i < 10; i++)
    {
        if(issafe(matrix,rowno,colno,i))
        {
            matrix[rowno][colno]=i;
            bool b=sudokusolve(matrix);
            if(b)
            {
                return true;
            }
            matrix[rowno][colno]=0;
        }

        /* code */
    }
    return false;
}
int main()
{

    // write your code here

    int matrix[9][9];
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> matrix[i][j];
            /* code */
        }

        /* code */
    }
    bool c=sudokusolve(matrix);

    return 0;
}