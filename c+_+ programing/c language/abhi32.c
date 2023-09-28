#include<stdio.h>
int abhichange(int b)
{
 int m=b*3;
 return m ;
}
int main( ) 

{
int a=4;

printf("the value of 2nd element is %d\n",a);
abhichange( a);
printf("the value of 2nd element is %d\n",abhichange (a));

return 0;

}