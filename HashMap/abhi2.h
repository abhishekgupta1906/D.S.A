bool isLastNode(TrieNode* root)
{
    for (int i = 0; i < 26; i++)
        if (root->children[i])
            return 0;
    return 1;
}

void allpossiblewords(TrieNode* root,
                    string s)
{
    // found a string in Trie with the given prefix
    if (root->isTerminal)
        cout << s<< endl;
 
    for (int i = 0; i < 26; i++)
        if (root->children[i]) {
            // child node character value
            char child = 'a' + i;
          allpossiblewords (root->children[i],
                           s + child);
        }
}
 
// print suggestions for given query prefix.
void Check(TrieNode* root,  string s)
{
   // TrieNode *rot = root;
    for (int i = 0; i<s.size(); i++) {
        int index =((int)s[i] - (int)'a');
 
        // no string in the Trie has this prefix
        if (!root->children[index])
            return;
 
       root =root->children[index];
    }
    // If prefix is present as a word, but
    // there is no subtree below the last
    // matching node.
    if (isLastNode(root)) {
        cout << s<< endl;
        return ;
    }
    allpossiblewords(root, s);
    return ;
}
 void autoComplete(vector<string> input, string pattern) {
     for(int i = 0; i<input.size(); i++){
         insertWord(input[i]);
     }
     Check(root, pattern);
 }