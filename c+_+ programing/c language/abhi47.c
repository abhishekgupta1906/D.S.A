#include<stdio.h>
#include<stdlib.h>



int main()
{
int *a;
int j;
int i;
a=(int *)malloc(j*2);

printf("enter the no. of elements in array you want\n");
scanf("%d",&j);
for ( i = 0; i < j; i++)
{
    printf("enter the value for array %d\n");
    scanf("%d",&a[i]);

}

for ( i = 0; i < j; i++)
{
    printf("the value for array %d is %d\n",i,a[i]);
    
    
}
return 0;
}