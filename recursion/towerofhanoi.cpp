#include<iostream>
using namespace std;
void towerOfHanoi(int n, char source, char auxiliary, char destination) 
{
    // Write your code here
    if(n==0)
    {
        return ;
    }

    towerOfHanoi(n-1,source,destination,auxiliary);

    cout<<source<<" "<<destination<<endl;

    towerOfHanoi(n-1,auxiliary,source,destination);


}






int main()
{
    char a,b,c;
    a='a';
    b='b';
    c='c';
    towerOfHanoi(3,a,b,c);

return 0;
}