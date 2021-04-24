#include<bits/stdc++.h>
using namespace std;
void dfs(Node *node,Node*copy,vector<Node*>&visited)
{
visited[copy->val]=copy;
for(auto x;node->neighbours)
{
    if(visited[x->val]==NULL)
    {
        Node*newnode=new Node(x->val);
        (copy->neighbours).push_back(newnode);
        dfs(x,newnode,visited);
    }
    else
    {
        (copy->neighbours).push_back(visited[x->val]);
    }
}
}
Node*clone(Node*node)
{
if(node==NULL)
return NULL;
vector<Node*>visited(1000,NULL);
Node*copy=new Node(node->val);
dfs(node,copy,visited);
return copy;
}