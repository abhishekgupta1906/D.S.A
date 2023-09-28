#include <iostream>
#include <cstring>
using namespace std;
void print_SubsetSumToK(int input[], int size, int k, int output[], int length)
{
    // Write your code here
    if (size == 0)
    {
        // subset mil gya jiska k h
        if (k == 0)
        {
            for (int i = 0; i < length; i++)
            {
                cout << output[i] << " ";
                /* code */
            }
            cout << endl;
        }

        return;
    }

    // not included
    print_SubsetSumToK(input + 1, size - 1, k, output, length);
    // include
    output[length] = input[0];
    print_SubsetSumToK(input + 1, size - 1, k - input[0], output, length + 1);
}

int main()
{
    int ip[9] = {5, 12, 3, 17, 1, 18, 15, 3, 17};
    int op[10];
    print_SubsetSumToK(ip, 9, 6, op, 0);

    return 0;
}