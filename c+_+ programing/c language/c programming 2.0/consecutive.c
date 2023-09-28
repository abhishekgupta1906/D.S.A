// output
// 1
// 1 2
// 1 2 3
// 1 2 3 4
#include<stdio.h>
#include<stdlib.h>
void nextcons(int rows)
{ 
    int i ,j;
    for ( i = 0; i < rows; i++)
    {
        for ( j= 0; j<=i;j++)
        {
            printf(" ");
            printf("%d",j);
            

        }

        printf("\n");
        
    }
    

}
int main()
{
int horirows;
printf("enter the  horirow number:");
scanf("%d",&horirows);
nextcons(horirows);

return 0;
}





