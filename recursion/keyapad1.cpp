#include <iostream>
#include <cstring>
using namespace std;


int keypad(int num, string output[])
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    int a = num / 10;
    int b = num % 10;
    int d = keypad(a, output);
    string w[100]={" "," ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string s2 = w[b];

    int m = s2.size();
    int total = m * d;
    string t[total];
    // temprorary string array
    int k = 0;
    // index of temp array

    for (int j = 0; j < m; j++)
    {
        /* code */
        for (int i = 0; i < d; i++)
        {
            t[k] = output[i] + s2[j];
            k++;

            /* code */
        }
    }

    for (int i = 0; i < total; i++)
    {
        /* code */
        output[i] = t[i];
    }

    return total;
}

int main()
{
    int e = 23;
    string t[1000];
    int g = keypad(23, t);
    for (int i = 0; i < g; i++)
    {
        /* code */
        cout << t[i] << endl;
    }

    return 0;
}