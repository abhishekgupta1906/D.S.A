#include<stdio.h>
void interst(int z)
{
int p,r,t,m;
printf("enter the value of p,r and t\n");
scanf("%d%d%d",&p,&r,&t);
m=100;
z=p*r*t/m;

}

int main()
{
int a;
interst(a);
printf("the value is %d",a);
return 0;
}