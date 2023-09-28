#include <iostream>
using namespace std;
#include <cstring>
// "1234"
// 1234
int power(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }

    int d = power(m, n - 1);

    return m * d;
}

int stringToNumber(char input[])
{
    // Write your code here
    int j = strlen(input);
    int b = input[0] - '0';
    if (j == 1)
    {
        return b;
    }

    int a = stringToNumber(input + 1);

    return b * power(10, j - 1) + a;
}
int main()
{
    char s1[20] = "1234";
    stringToNumber(s1);
    cout << s1;

    return 0;
}