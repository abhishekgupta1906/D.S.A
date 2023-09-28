#include <iostream>
#include <cstring>
using namespace std;
int power(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }

    int b = power(m, n - 1);
    return m * b;
}
int subset(int input[], int length, int output[][3])
{
    if (length == 0)
    {
        output[0][0] = 0;

        return 1;
    }

    int c = subset(input + 1, length - 1, output);
    for (int i = 0; i < c; i++)
    {
        output[i+c][0]=output[i][0]+1;
        // kitna elements store kr rha h

        output[i + c][1] = input[0];
        // pehla element store kiya
        for (int j = 2; j <= output[i][0] + 1; j++)
        {
            output[i + c][j] = output[i][j-1];
          
            /* code */
        }
        // copying remaining values

        /* code */
    }

    return 2 * c;
}

int main()
{
    int arr[3] = {9, 16, 25};
    int op[10][3];
    int b = subset(arr, 3, op);
    for (int i = 0; i < b; i++)
    {
        for (int j = 1; j <= op[i][0]; j++)
        {
            cout << op[i][j] <<" ";
            /* code */
        }
        cout<<endl;

        /* code */
    }

    return 0;
}