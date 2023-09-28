#include<stdio.h>
#include<string.h>

struct student 

{
int id;
float marks;
char name[];


    
};






int main()
{

    struct student s1,s2;
    s1.id=5;
    s1.marks=654.98;
   printf("id=%d\n",s1.id);
   printf("marks=%f\n",s1.marks);
   strcpy(s1.name,"abhishek gupta");
   printf("%s\n",s1.name);
   strcpy(s2.name,"Vidya");
   printf("%s",s2.name);


return 0;
}