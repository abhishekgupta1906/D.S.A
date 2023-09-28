#include <stdio.h>

int main()

{
    int num;
    printf("enter the number whose multiplication table you want:\n");
    scanf("%d",&num);
    printf("multiplication of table iof %d is as follows:\n",num);
    // printf("%d X 1=%d\n",num,num*1);
    // printf("%d X 2=%d\n",num,num*2);
    // printf("%d X 3=%d\n",num,num*3);
    // printf("%d X 4=%d\n",num,num*4);
    // return 0;
    int i;
for( i=1;i<11;)
{
printf("%d X %d=%d\n",num,i,num*i);
i=i+1;
}
return 0;
}


