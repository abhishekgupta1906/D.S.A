#include <iostream>
using namespace std;

void hayato(int n,int a[])
{
    int countodd=0,odd[3],even[3],j=0,k=0,counteven=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            if(j<3){
            even[j]=i+1;
            j++;
            counteven++;
            }
        }
        else
        {
            if(k<3){
            odd[k]=i+1;
            k++;
            }
            countodd++;
        }
    }
    if(countodd>=3)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<3;i++)
        {
            cout<<odd[i]<<" ";
        }
        cout<<endl;
    }
    else if(countodd>=1 && counteven>=2)
    {
        cout<<"YES"<<endl;
        for(int i=0;i<2;i++)
        {
            cout<<even[i]<<" ";
        }
        cout<<odd[0]<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        hayato(n,a);
    }
    return 0;
}
