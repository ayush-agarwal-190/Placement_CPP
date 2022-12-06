#include<bits/stdc++.h>
using namespace std;

bool mat[m][n];
struct TreeNode
{
    TrieNode *child[2];
    TrieNode()
    {
        child[0]=NULL;
        child[1]=NULL;
    }
}

bool insert(TreeNode *root,int row)
{
    TreeNode *curr=root;
    bool flag=false;
    for(int i=0;i<N;i++)
    {
        int index=mat[row][i];
        if(curr->child[index]==NULL)
        {
            curr->child[index]=new TrieNode();
            flag=true;
        }
        curr=curr->child[index];
    }
    return flag;
   
}
int countDist()
{
    TrieNode *root=new TrieNode();
    int res=0;
    for(int row=0;row<m;row++ )
    {
        if(insert(root,row)==true)
           res++;
        return res;
    }
}