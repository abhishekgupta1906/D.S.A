#include<iostream>
using namespace std;
#include<cstring>
// Welcome to Coding Ninjas
// Ninjas Coding to Welcome

int main()
{
    char a[100];
    cout<<"enetr the string :";
    cin.getline(a,100);
    int j=strlen(a);
    for (int i = 0; i < j/2; i++)
    {
        /* code */
        char temp=a[i];
        a[i]=a[j-1-i];
        a[j-1-i]=temp;
    }
    cout<<a<<endl;

    // for (int i = 0; i <j; i++)
    // {
    //     /* code */
    //     if(a[i]==' ')
    //      {
    //         for (int m = 0; m <i/2; m++)
    //         {
    //             char temp=a[m];
    //             a[m]=a[i-1-m];
    //             a[i-1-m]=temp;
                       
    //         }

    //         a[i]=' ';
            
    //         for (int d = i+1; d <j-1; d++)
    //         {
    //             /* code */
    //              char temp=a[d];
    //             a[d]=a[j-1];
    //             a[j-1]=temp;
    //             j--;
                       
                
    //         }

    //         continue;
            
            
            
            
    //      }
    // }

        int start=0;
    for (int i = 0; i <=j; i++)
    {
        /* code */

        if(a[i]==' '||i==j)
         {
            // i==j isliy kiye h kyu nki null ke pehle wale ko reverse karo
            int end=i-1;
            int t=(end-start)/2;
            for (int m =start; m<t+1+start; m++)
            {
                char temp=a[m];
                a[m]=a[end];
                a[end]=temp;
                end--;
                       
            }
           

            start=i+1;
            
           
         }

         

            


    }

    cout<<a;     


   
    



return 0;
}