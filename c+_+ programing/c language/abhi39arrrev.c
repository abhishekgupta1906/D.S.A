#include<stdio.h>
void arrayprintkaro(int array[])
{
    int i;
    for ( i = 0; i < 9; i++)
    {
        printf("the value of %d elements is %d\n ",i,array[i]);
        
    }
    


}

void arrayreversal(int array[])
{


int i;
    for ( i = 0; i < 9/2; i++)
    {
        int temp;
        temp=array[i];
        array[i]=array[8-i];
        array[8-i]=temp;
        
        
    }


}


int main( ) 

{
int arr[]={3,7,9,76,89,56,799,544,677};
printf("before the elements are reversed\n");
arrayprintkaro(arr);
printf("after reversing the elements\n");
arrayreversal(arr);
arrayprintkaro(arr);

}