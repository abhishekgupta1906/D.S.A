#include <iostream>
#include <cstring>
using namespace std;
// You need to save all the subsets in the given 2D output array. And return the number of subsets(i.e. number of rows filled in output) from the given function.

// In ith row of output array, 1st column contains length of the ith subset. And from 1st column actual subset follows.
// For eg. Input : {1, 3, 4, 2} and K = 5, then output array should contain
// 	{{2, 1, 4},	// Length of this subset is 2
// 	{2, 3, 2}}	// Length of this subset is 2

// Don’t print the subsets, just save them in output.
// ***/

int subsetSumToK(int input[], int n, int output[][50], int k)
{
    // Write your code here
    if (n == 0)
    {
        output[0][0] = 0;
        return 0;
    }

    int arr1[1000][50];
    int arr2[1000][50];
    // when first element is not included
    int s1 = subsetSumToK(input + 1, n - 1, arr1, k);
    int s2 = subsetSumToK(input + 1, n - 1, arr2, k - input[0]);
    // for loop jisme include nhi kiye the
    for (int i = 0; i < s1; i++)
    {
        output[i][0] = arr1[i][0];
        for (int j = 1; j <= arr1[i][0]; j++)
        {
            output[i][j] = arr1[i][j];
            /* code */
        }

        /* code */
    }

    // for loop jisme include kiye h
    for (int i = 0; i < s2; i++)
    {
        output[i + s1][0] = arr2[i][0] + 1;
        output[i + s1][1] = input[0];
        for (int j = 2; j <= arr2[i][0] + 1; j++)
        {
            output[i + s1][j] = arr2[i][j - 1];
            /* code */
        }

        /* code */
    }

    return s1 + s2;
}

int main()
{
    int arr[9] = {5, 12, 3, 17, 1, 18, 15, 3, 17};
    int op[15][50];
    int b = subsetSumToK(arr, 9, op, 6);
    for (int i = 0; i <b; i++)
    {
        for (int j = 0; j <= op[i][0]; j++)
        {
            cout << op[i][j] << " ";
            /* code */
        }
        cout << endl;

        /* code */
    }

    return 0;
}