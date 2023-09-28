#include <stdio.h>
int fibronics(int number)
{
    if (number == 1)
    {
        return 1;
    }
    else
    {
        return number +(number -1) ;
    }
}
int main()
{
    int num;
    printf("enter the number whose fibronics you want\n");
    scanf("%d", &num);
    printf("the fibronics of %d is %d\n", num, fibronics(num));
    return 0;
}