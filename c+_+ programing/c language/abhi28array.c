#include <stdio.h>
 void func(int array[])
{
    
    array[3] = 66;
    
}

int main()

{

    int arr[] = {9, 6, 7, 4};
    printf("%d\n", arr[3]);
    func(arr);
    printf("%d\n",arr[3]);
    
}
     

