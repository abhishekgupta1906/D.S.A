#include <iostream>
#include <cstring>
#include <climits>
using namespace std;

// 2 4 7 2 7 9
int findUnique(int *arr, int n)
{
    // Write your code here
    
    int s=0;

    for (int i = 0; i <n; i++)
    {
        s=s^arr[i];


    } 

    return s;  
    

    /* code */
}

int main()
{
    int arr[7] = {4, 4, 7, 3, 5, 7, 3};
    int a = findUnique(arr, 7);
    cout << a;

    return 0;
}