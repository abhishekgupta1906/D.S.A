// int arr[]={1,3,9,7,4};
// int i;
// {
//     printf("the value of %d element is %d \n ",i,arr[i]);
// }
// adarsh(arr);
// for ( i = 1; i < 6; i++)
// {
//     printf("the value of %d element is %d \n ",i,arr[i]);
// }
// for ( i = 1; i < 6; i++)
// void  adarsh(int*ptr)
// {
// *(ptr+1)=34;
// }
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


    

int main()
{
int *ptr;
int i;
ptr=(int*)malloc(4*sizeof(int));
for ( i = 0; i < 4; i++)
{
    printf("enter the value\n");
    scanf("%d\n",&ptr[i]);
}
for ( i = 0; i < 4; i++)
{
    printf("the value of %d element is %d\n:",i,ptr[i]);
}

return 0;
}