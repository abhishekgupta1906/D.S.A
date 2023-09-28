#include<stdio.h>
#include<stdlib.h>
int main()
{
   printf("the name of the file is %s\n",__FILE__);
   printf("the TODAY DATE  is %s\n",__DATE__);
   printf("the TODAY TIME   is %s\n",__TIME__);
   printf("the line of the file is %d\n",__LINE__);

return 0;
}