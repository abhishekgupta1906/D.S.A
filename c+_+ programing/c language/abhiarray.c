#include<stdio.h>
int main()
{
int arr[4];
int i;
for ( i = 0; i < 4; i++)

{
    scanf("%d\t",&arr[i]);
    
}

for ( i = 0; i < 4; i++)

{
    printf("the value of %d elemnt is %d\n",i,arr[i]);
    
}


return 0;
}