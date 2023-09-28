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
    bool Search(TrieNode *root, string word)
    {
          if(word.size()==0)
        {
            return true;
        }
       int index = word[0] - 'a';
        if (root->children[index] == NULL)
        {
            return false;
        }
       
        // root ka nhi
        // 2 there 
        // 2 theres
        // jb s h hi nhi toh uska termial kahan se ayega
        // jb string ka length zero tb terminal milega hi nhi
        TrieNode *t = root->children[index];
        bool b = Search(t, word.substr(1));
        return b;
        // return b;
    }

    bool search(string word)
    {
        return Search(root, word);
        // Write your code here
    }

    bool patternMatching(vector<string> vect, string pattern)
    {
        for (int i = 0; i < vect.size(); i++)
        {
            /* code */
            string a = vect[i];
            for (int j = 0; j < a.length(); j++)
            {
                /* code */
                insertWord(a.substr(j));
            }
        }
        bool b=search(pattern);
        return b;

        // Write your code here
    }
};