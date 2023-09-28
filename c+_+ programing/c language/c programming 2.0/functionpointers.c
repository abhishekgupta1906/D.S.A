#include<stdio.h>
#include<stdlib.h>
int abhifunc1(int a)
{
    if(a==1||a==0)
    {
        return 0;
    }
    else
    {
        return a-1+a-3 ;
    }

}
void func2(int(*fptr)(int))
{
  printf("hello abhi you are using callback functions:\n");
  printf("the value is %d\n",(*fptr)(8));
}


    
int main()
{
    int (*ptr)(int);
// func tion pointer jo ek function ka address ko store krta h.
// call back functions-man lete h aap ek function bnaye aur usme ek change krna to usko ek func pointer
// se point kra do aur dusre func me pass krdo .jisme pass kiya wo callback function h.
ptr=&abhifunc1;
printf("the value is %d\n ",(*ptr)(6));
func2(ptr);



return 0;
}