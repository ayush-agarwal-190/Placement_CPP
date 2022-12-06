TrieNode *root;
bool search(string &key)
{
    TrieNode *curr=root;
    for(int i=0;i<key.length();i++)
    {
        int index=key[i]-'a';
        if(curr->child[index]==NULL)
           return false;
        curr=curr->child[index];
    }
    return curr->isEnd;
}

Java
boolean search(String key)
{
    TrieNode curr=root;
    for(int i=0;i<key.length();i++)
    {
        int index=key.charAt[index]-'a';
        if(curr.child[index]==null)
           return false;
           curr=curr.child[index;]
    }
    return curr.isEnd;
}