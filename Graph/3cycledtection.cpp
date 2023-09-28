#include <iostream>
#include <string>
#include <vector>
using namespace std;
int count3(int **edges, int n)
{
     int count = 0;
    for (int i = 0; i < n-2; i++)
    {
        for (int j =i+1; j < n-1; j++)
        {
            for (int  k = 0; k <n; k++)
            {
                if(edges[i][j]==1 && edges[j][k]==1 && edges[k][i]==1)
                {
                    count++;
                }
                /* code */
            }
            
           
            /* code */
        }

        /* code */
    }
    return count;
}
// int count3(int **edges, int n)
// {
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (j == i)
//             {
//                 continue;
//             }
//             if (edges[i][j] == 1)
//             {
//                 for (int k = 0; k < n; k++)
//                 {
//                     if (k == j || k == i)
//                     {
//                         continue;
//                     }
//                     if (edges[j][k] == 1)
//                     {
//                         if (edges[i][k] == 1)
//                         {
//                             count++;
//                         }
//                     }
//                     /* code */
//                 }
//             }
//             /* code */
//         }

//         /* code */
//     }
//     return count / 6;
// }
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
    cout<<count3(edges,n);
    for (int i = 0; i < n; i++)
    {
        delete[] edges[i];
        /* code */
    }
    delete[] edges;


    return 0;

   
}