#include<stdio.h>


int main()
{
 int arr[]={2,5,9,8};
 int *p=arr;
 
 printf("the address of elemnt is 0 %d\n",*(&arr[0]));
 printf("the address of elemnt is 1 %d\n",&arr[1]);
 printf("the address of elemnt is 2 %d\n",arr+1);
 printf("the address of elemnt is 3 %d\n",&arr[3]);
 
 return 0;
}