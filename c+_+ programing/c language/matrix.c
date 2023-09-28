#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
int sum;
int a[2][3],b[2][3],result[2][3];
int i,j,k;
printf("first matrix\n");
for ( i = 0; i <2; i++)
{
    for ( j = 0; j < 3; j++)
    {
        // printf("enter the %d%d element of your first matrix\n ");
        scanf("%d",&a[i][j]);
    }
    printf("\n");
    

    
}
printf("second matrix\n");
for ( i = 0; i <2; i++)
{
    for ( j = 0; j < 3; j++)
    {
        // printf("enter the %d %d element of your first matrix ");
        scanf("%d",&b[i][j]);
    }
    printf("\n");
    

    
}
for ( i = 0; i <2; i++)
{
    for ( j = 0; j < 3; j++)
    {
        result[i][j]=a[i][j]+b[i][j];
        
    
    }
    
}

for ( i = 0; i <2; i++)
{
    for ( j = 0; j < 3; j++)
    {
        printf("%d\t",result[i][j]);
    }
    printf("\n");
    

    
}

return 0;
}


