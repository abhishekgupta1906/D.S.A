#include<iostream>
#include<cstring>
#include"trie.h"
using namespace std ;
int main()
{
    Trie a;
    a.insertWord("abhi");
    a.insertWord("maa");
    cout<<a.search("maa");
    
    a.removeWord("abhi");
    
    




return 0;
}