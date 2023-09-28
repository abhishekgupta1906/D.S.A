#include <iostream>
#include <string>
#include <vector>
using namespace std;
// brute force
int staircase(int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return 1;
    }
    if (n ==2)
    {
        return 2;
    }
    int a = staircase(n - 1);
    int b = staircase(n - 2);
    int c = staircase(n - 3);
    return a + b + c;
}
// time complexity 3^n
// memoization
int staricasehelper(int*arr,int n)
{
    if(arr[n]!=-1)
    {
        return arr[n];
    }
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return 1;
    }
    if (n ==2)
    {
        return 2;
    }
    int a = staircase(n - 1);
    int b = staircase(n - 2);
    int c = staircase(n - 3);
    arr[n]=a+b+c;
    return arr[n];
  

}
int staricase_2(int n)
{
    int*arr=new int[n+1];
    for (int i = 0; i <n+1; i++)
    {
        /* code */
        arr[i]=-1;
    }
    int b=staricasehelper(arr,n);
    delete []arr;
    return b;
    
}
// dp solution
int staircase_3(int n)
{
    int*arr=new int[n+1];
    arr[0]=1;
    arr[1]=1;
    arr[2]=2;
    for (int i =3; i <n+1; i++)
    {
        arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
        /* code */
    }
    int d=arr[n];
    delete []arr;
    return d;
    
}
int main()
{
    int n=staircase_3(5);
    cout<<n;
    
   
    return 0;
}