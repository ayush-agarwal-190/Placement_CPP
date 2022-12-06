struct TrieNode
{
    TrieNode *child[26];
    bool isEnd;

    TrieNode()
    {
        isEnd=false;
        for(int i=0;i<26;i++)
        {
            child[i]=NULL;
        }
    }
}


Java
class TrieNode
{
      TrieNode[] child=new TrieNode[26];
      bool isEnd;
}