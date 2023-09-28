#include <iostream>
#include <climits>
using namespace std;
// 1  2  3  4
// 5  6  7  8
// 9 10 11 12
  // i-rows
  // j-columns

int main()
{
  int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

  int max = INT16_MIN;
  int index = 0;
  for (int i = 0; i < 3; i++)
  {
    /* code */
    int rsum = 0;
    for (int j = 0; j < 4; j++)
    {
      /* code */
      rsum = rsum + a[i][j];
    }

    if (max < rsum)
    {
      max = rsum;
      index = i;
    }
  }
  for (int j = 0; j < 4; j++)
  {
    /* code */
    int csum = 0;
    for (int i = 0; i < 3; i++)
    {
      /* code */
      csum = csum + a[i][j];
    }

    if (max < csum)
    {
      max = csum;
      index = j;
    }
  }

  return 0;
}

 


