#include<iostream>
#include<cstring>
#include<string>
#include<unordered_map>
using namespace std ;
int main()
{
    int arr[6]={3,7,9,4,5,6};
    unordered_map<int,bool>o;
    for (int i = 0; i <6; i++)
    {
        /* code */
        o[arr[i]]=true;
    }
    unordered_map<int,bool>::iterator it;
    it=o.find(arr[5]);
    while(it!=o.end())
    {
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }



    


return 0;
}