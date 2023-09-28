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
    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertWord(TrieNode *root, string word)
    {
        // Base case
        // if (word.size() == 0) {
        //     root->isTerminal=true;
        //     return ;
        // }
        if (word.size() == 0) 
        {
              root->isTerminal=true;
        }

        // Small Calculation
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
        insertWord(child, word.substr(1));
    }

    void insertWord(string word)
    {
        insertWord(root, word);
    }
    bool Search(TrieNode *root, string word)
    {
        //   if (word.length() == 1) {
        //     return root->children[ word[0] -'a']->isTerminal;
        //   }

        int index = word[0] - 'a';
        if (root->children[index] == NULL)
        {
            return false;
        }
        if (word.length() == 1)
        {
            return root->children[index]->isTerminal;
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
    void removeWord(TrieNode *root, string word)
    {
        // Base case
        if (word.size() == 0)
        {
            root->isTerminal = false;
            return;
        }

        // Small calculation
        TrieNode *child;
        int index = word[0] - 'a';
        if (root->children[index] == NULL)
        {
            return;
        }
        else
        {
            // Word not found
            child = root->children[index];
            removeWord(child, word.substr(1));
        }

        // Remove child Node if it is useless
        if (child->isTerminal == false)
        {
            for (int i = 0; i < 26; i++)
            {
                if (child->children[i] != NULL)
                {
                    return;
                }
            }
            delete child;
            root->children[index] = NULL;
        }
    }

    void removeWord(string word)
    {
        removeWord(root, word);
    }
};