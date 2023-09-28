#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <cstring>
using namespace std;
// pair sum to zero
int pairSum(int *arr, int n)
{
    unordered_map<int, int> o;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        int c = -arr[i];
        if (o[c])
        {
            count = count + o[c];
        }
        o[arr[i]]++;
    }
    return count;

    // Write your code here
}
int getPairsWithDifferenceK(int *arr, int n, int k) 
{
	
	// Write your code here
   unordered_map<int, int> o;
  int count = 0;
  bool a=true;
  for (int i = 0; i < n; i++) {
    int c = arr[i] - k;
    int a = arr[i] + k;
	if(a==c)
	{
		a=false;
	}
	
    if (o[c]) {
      count = count + o[c];
    }
    if (o[a]) {
      count = count + o[a];
    }

    o[arr[i]]++;
    /* code */
  }
  if(a==false)
  {
	  return count/2;
  }
  return count;
    



    
}
int main()
{
    int arr[5] = {2, 1, -2, 2, 3};
    int b = pairSum(arr, 5);

    return 0;
}