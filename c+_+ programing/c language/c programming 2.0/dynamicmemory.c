#include<stdio.h> 
#include<stdlib.h>
void abhifunc(int*ptr)
{
    *ptr=34;
    printf("the value is %d",*ptr );
}


int main()
{
    int*a;
    a=(int*)malloc(4*sizeof(int));
    // int i;
    // for ( i = 0; i < 4; i++)
    // {
    //     printf("Enter the value of %d index of dynamic array:",i);
    //     scanf("%d",&a[i]);
    // }

    // for ( i = 0; i < 4; i++)
    // {
    //     printf(" the value of %d index of dynamic array is %d\n",i,a[i]);

    // }


    printf("enter the value of 0 index of dynamic array:");
    scanf("%d",&a[0]);
    printf(" the value of 0 index of dynamic array is %d\n",a[0]);
    abhifunc(a);
//    use of malloc and call by address


free(a); 


    
    



return 0;
}