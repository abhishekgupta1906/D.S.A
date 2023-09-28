#include<iostream>
using namespace std;
 
 class add
  {   

  public:
       int addition(int a,int b)
       {
          return a+b;

       }
       

 };



int main()
{
    int a,b,c;
    cout<<"enter two numbers: ";
    cin>>a>>b;
    add obj;
    c=obj.addition(a,b);
    cout<<"the sum of two numbers:"<<c;
    // the no.s are my roll no. and double of that



return 0;
}