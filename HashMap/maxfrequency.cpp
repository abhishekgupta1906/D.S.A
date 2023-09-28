#include <iostream>
#include <cstring>
#include <unordered_map>
using namespace std;
int highestFrequency(int arr[], int n)
{
    unordered_map<int, int> o;
    for (int i = 0; i < n; i++)
    {
        if (o.count(arr[i]) < 0)
        {
            o[arr[i]] =1;
        }
        o[arr[i]]++;
        /* code */
    }
    int c;
    int max = INT16_MIN;
    for (int j = 0; j <n; j++)
    {
        if (o[arr[j]] > max)
        {
            max = o[arr[j]];
            c =arr[j];
        }

        /* code */
    }
    return c;

    // Write your code here
}

int main()
{
    int arr[13]={2,12,2, 11, 12, 2, 1, 2, 2, 11, 12, 2, 6 };
    int b=highestFrequency(arr,13);
    cout<<b;

    return 0;
}