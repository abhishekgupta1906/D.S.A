#include<stdio.h>
void swap(int x,int y)
{
    int temp;
    temp=x;
    
    x=y;
    y=temp;
    printf("After swappimg  the value of x is %d\n",x);
    printf(" After swappimg  the value of y is %d\n",y);
}
int main()
{
int x ,y;
printf("enter the value of x:");
scanf("%d",&x);
printf("enter the value of y:");
scanf("%d",&y);
printf("before swappimg  the value of x is %d\n",x);
printf("before swappimg  the value of y is %d\n",y);
swap(x,y);

return 0;
}