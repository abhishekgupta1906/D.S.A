#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char const *argv[])
{
    /* code */

// argc(argv constant)=no. of arguments passed +1 (default value=1)
// argv(argv value)=array whic points string .
// for ex-.\abhi.exe abhi acha admi 
// argv[0]=.\abhi,argv[1]=abhi,argv[2]=acha,argv[3]=admi


// char*operation;
// int a,b;
// operation=argv[1];
// a=atoi(argv[2]);
// b=atoi(argv[3]);

// if(strcmp(operation,"add")==0)
// {
//     printf("the value is %d",a+b);
// }

// else if(strcmp(operation,"multiply")==0)
// {
//     printf("the value is %d",a*b);
// }

// else  if(strcmp(operation,"substract")==0)
// {
//     printf("the value is %d",a-b);
// }
//   else if(strcmp(operation,"divide")==0)
// {
//     printf("the value is %d",a/b);
// }
char str1[]="Abhiraj";
char str2[]="Abhishek";
strcmp(str1,str2);
printf("the value of is %d ",strcmp(str1,str2));




    return 0;






}

