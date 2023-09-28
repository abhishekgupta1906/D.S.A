#include<iostream>
#include<cmath>
#include<string>
#include<vector>
using namespace std;
int helper(int a, int b, int i)
{
   if(a<0)
    {
        return 0;
    }
  if (a == 0) {
    return 1;
  }

  int count = 0;
  for (int j = i+1; j <= 1 + pow(a, 1.0/b); j++) {
    count += helper(a - (pow(i, b)), b, j);
    // count = count + a;
  }
   
  return count;
}

int getAllWays(int a, int b) {

return helper(a, b, 0);
}


int main()
{
 
    
return 0;
}