#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {13, 17, 5, 4, 6};
    for (int i = 0; i < 5; i++)
    {
        int c = arr[i];
        bool a = false;
        for (int j = i + 1; j < 5; j++)
        {
            if (c >= arr[j])
            {
                a = true;
            }

            else
            {
                a = false;

                break;
            }
            /* code */
        }

        if (a == true || i == 4)
        {
            cout << c <<" ";
        }

        /* code */
    }

    return 0;
}