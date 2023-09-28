#include<stdio.h>
int main()
{
    int age;

printf("enter your age\n" );
scanf("%d",&age);

switch (age)
{
case 1:
    printf("The age is 11\n");
    

default:
printf("The age is not matching\n");
    // break;
}

return 0;
}