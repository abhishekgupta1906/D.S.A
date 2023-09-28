#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
int D;
printf("enter the value for a,b and c\n");
scanf("%d%d%d",&a,&b,&c);
D=b*b-4*a*c;
printf("the value of  is %d\n",D);
scanf("%d",&D);
switch (D)
{
case 1:
{ 
 printf("roots are real and distinct");
    
}
case 2:
{
    printf("roots are imaginary");
}
}
return 0;
}
    






