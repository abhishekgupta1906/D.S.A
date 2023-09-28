#include<stdio.h>
#include<stdlib.h>
#include<math.h>


float distance(int x1,int y1,int x2,int y2)
{
    float d ;
    int b;
    b=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
    d=sqrt(b);
    return d;
}

void areaofcircle(float(*fptr)(int ,int ,int ,int))
{
   float r ;
   r=(*fptr)(6,5,4,3);
   printf("the area of circle is %.2f",3.14*r*r);
}






int main()
{
float (*ptr)(int ,int ,int ,int );
// float c;
// c=distance(6,5,4,3);
// printf("the value of c is %.2f",c); 
// area of circle is equal to pi*r^2 where radius is distance between two points.
ptr=& distance;
areaofcircle(ptr);


return 0;
}