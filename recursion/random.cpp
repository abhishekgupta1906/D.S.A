#include <iostream>
using namespace std;

	
// merge arrays -- Task 5
void display_array(int *arr,int size){
	/*Add Your Code Here*/	
	for(int i=0;i<size;i++)
	{
	    cout<<arr[i]<<" ";
	}

}
void merge_arrays(int arr1[],int arr2[],int m,int n){
	/*Add Your Code Here*/
	int i=0;
// 	starting index for pehla array
	int j=0;
// 	starting array for second array
int k=0;
int t=m+n;
int ans[t];
int *ptr1=ans;
while(i<m && j<n)
{
    if(arr1[i]<arr2[j])
    {
        ans[k]=arr1[i];
        i++;
        k++;
    }
    
    
    else
    {
        ans[k]=arr2[j];
        j++;
        k++;
    }
    
}

// remaining ke liye
while(i<m)
{
    ans[k]=arr1[i];
    i++;
    k++;
    
}
while(j<n)
{
    ans[k]=arr1[j];
    j++;
    k++;
    
}

for (int i = 0; i <t; i++)
{
    cout<<ans[i]<<" ";
    /* code */
}


}
	
	
//Task 4
void insert(int arr[], int*size,int index,int x){
	/*Add Your Code Here*/
	for(int i=*size-1;i>index;i--)
	{
	   arr[i+1]=arr[i];
	}
	
	*size=*size+1;
	arr[index]=x;

}
	

// function to display the array---Task 3
void selection_sort(int arr[],int size){
	/*Add Your Code Here*/
	for(int i=0;i<size-1;i++)
	{
	    int c=arr[i];
	    int index=i;
	   // index of minimum element
	    for(int j=i+1;j<size;j++)
	    {
	        if(arr[j]<c)
	        {
                c=arr[j];
	            index=j;
	            
	        }
	        
	       // swap
	    }
	    int temp=arr[index];
	    arr[index]=arr[i];
	    arr[i]=temp;
	       
	}

     
	        
	          
	   

}


//funtion to display the array




int main(){
    int arr1[7]={2,7,8,18,11,13,12};
    int arr2[6]={9,5,4,19,21,17};
    selection_sort(arr1,7);
    selection_sort(arr2,6);
    merge_arrays(arr1,arr2,7,6);
    
  
  return 0;
}