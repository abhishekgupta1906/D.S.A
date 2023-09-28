#include<stdio.h>
#include<stdlib.h>

// void printelemnts(int *ptr)
// {
//     for (int i = 0; i <n; i++)
//     {
//         scanf("%d",*(ptr+i));
//     }
    
// }
int main()
{
int *a ;
int n;
printf("enter the value of n:");
scanf("%d",&n);
a=(int*)malloc(n*sizeof(int));
printf("enter the arrary elemnts\n");
 for (int i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }
    free(a);


return 0;
}