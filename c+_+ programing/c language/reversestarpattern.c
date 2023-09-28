#include<stdio.h>
void starpattern(int rows)

{
int i;
for ( i = 1; i < rows; i++)
{
  for (int j = 0; j<rows-i; j++)
  {
    printf("*");
  }
  printf("\n");  
}






}



int main()
{
int ro;
printf("ENTER 1 for star pattern\n");

printf("how many ro you want\n");
scanf("%d",&ro);
starpattern(ro);
return 0;
}