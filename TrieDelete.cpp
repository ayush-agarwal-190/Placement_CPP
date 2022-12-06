bool isEmpty(TrieNode *root)
{
    for(int i=0;i<26;i++)
    {
        if(root->child[i]!=NULL)
          return false;
        return true;
    }
}

TrieNode *delkey(TrieNode *root,string &key,int i)
{
    if(root==NULL)
      return NULL;
    if(i==key.length())
    {
        root->isEnd=false;
        if(isEmpty(root)==true)
        {
            delete(root);
            root=NULL;
        }
        return root;
    }
    int index=key[i]-'a';
    root->child[index]=delkey(root->child[index],key,i+1);

    if(isEmpty(root)&&root->isEnd==false)
    {
        delete(root);
        root=NULL;
        return root;
    }
}