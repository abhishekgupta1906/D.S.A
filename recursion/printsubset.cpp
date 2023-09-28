#include <iostream>
#include <cstring>
using namespace std;
void printSubsetsOfArray(int input[], int length, int output[], int size)
{
    if (length == 0)
    {
       for (int i = 0; i <size; i++)
       {
        cout<<output[i]<<" ";
        /* code */
       }
       
       cout<<endl;
       return ;


    }

    // not include
    printSubsetsOfArray(input + 1, length - 1, output, size);
    // include
    output[size] = input[0];
    printSubsetsOfArray(input + 1, length - 1, output, size + 1);
}

void print_abhi(int input[], int length)
{
    int op[20];
    printSubsetsOfArray(input, length, op, 0);
}

int main()
{
    int arr[3] = {1, 2, 3};

    
    print_abhi(arr, 3);

    return 0;
}