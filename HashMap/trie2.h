#include <vector>
#include <string>
#include <cstring>
using namespace std;
class TrieNode
{
public:
    char data;
    TrieNode **children;
    bool isTerminal;
    int childCount;

    TrieNode(char data)
    {
        this->data = data;
        children = new TrieNode *[26];
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
        childCount = 0;
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

    bool add(TrieNode *root, string word)
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
            root->childCount++;
        }

        // Recursive call
        return add(child, word.substr(1));
    }

    void add(string word)
    {
        if (add(root, word))
        {
            this->count++;
        }
    }
    // suffix
    bool Search(TrieNode *root, string s)
    {
        if (s.length() == 0)
        {
            return true;
        }
        int in = s[0] - 'a';
        TrieNode *child;
        if (root->children[in] == NULL)
        {
            return false;
        }
        child = root->children[in];
        bool b = Search(child, s.substr(1));
        return b;
    }
    bool search(string word)
    {
        return Search(root, word);
    }

    /*..................... Palindrome Pair................... */

    bool isPalindromePair(vector<string> words)
    {
        // insert word and their substr
        for (int i = 0; i < words.size(); i++)
        {
            string s = words[i];
            for (int j = 0; j < s.length(); j++)
            {
                add(s.substr(j));
                /* code */
            }

            /* code */
        }
        // reverse and check
        for (int i = 0; i < words.size(); i++)
        {
            string s1 = words[i];
            string s2 = " ";
            // for reversing
            for (int i = s1.length() - 1; i >= 0; i--)
            {
                s2 = s2 + s1[i];
                /* code */
            }
            if (search(s2))
            {
                return true;
            }

            /* code */
        }
        return false;

        // Write your code here
    }
};