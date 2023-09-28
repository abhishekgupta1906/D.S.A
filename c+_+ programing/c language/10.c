#include<stdio.h>

int main( ) 
{
    int marks;

printf("enter your marks\n" );

scanf("%d",&marks);

if (marks>35) 
{
  printf("you have passed in exam");
}
  else
  {
  printf ("you have failed in exam");
  }
return 0 ;
}