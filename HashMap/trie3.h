#include <iostream>
#include <vector>
#include <string>
using namespace std;
class TrieNode
{
public:
    char data;
    TrieNode **children;
    bool isTerminal;

    TrieNode(char data)
    {
        this->data = data;
        children = new TrieNode *[26];
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie
{
    TrieNode *root;

public:
    int count;

    Trie()
    {
        this->count = 0;
        root = new TrieNode('\0');
    }

    bool insertWord(TrieNode *root, string word)
    {
        // Base case
        if (word.size() == 0)
        {
            if (!root->isTerminal)
            {
                root->isTerminal = true;
                return true;
            }
            else
            {
                return false;
            }
        }

        // Small calculation
        int index = word[0] - 'a';
        TrieNode *child;

        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // Recursive call
        return insertWord(child, word.substr(1));
    }

    void insertWord(string word)
    {
        if (insertWord(root, word))
        {
            this->count++;
        }
    }
    bool islastnode(TrieNode*root)
    {
        for (int i = 0; i <26; i++)
        {
            if(root->children[i]!=NULL)
            {
                return false;
            }
            /* code */
        }
        return true;
        
    }
   
   
    void allpossiblewords(TrieNode *root, string s)
    {
       
        if(root->isTerminal==true)
        {
            cout<<s<<endl;
            return ;
        }
        for (int i = 0; i <26; i++)
        {
            if(root->children[i]!=NULL)
            {
                char c=i+'a';
                allpossiblewords(root->children[i],s+c);
            }

            /* code */
        }
        

        
    }
    void check(TrieNode*root,string s)
    {
        if(s.length()==0)
        {
            return ;
        }
        for (int i = 0; i <26; i++)
        {
            int in=s[i]-'a';
            if(root->children[in]==NULL)
            {
                return ;
            }
            root=root->children[i];
            /* code */
        }
        if(islastnode(root))
        {
            return ;
        }
        allpossiblewords(root,s);
        
        

    }
    void autoComplete(vector<string> input, string pattern)
    {
        for (int i = 0; i < input.size(); i++)
        {
            string s = input[0];
            insertWord(s);
            /* code */
        }
        check(root,pattern);
        
       
       
        // Write your code here
    }
};