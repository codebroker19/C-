#include<bits/stdc++.h>
#define V 5
using namespace std;

unordered_map<int,vector<int>> adj;
void dfs(int i,vector<bool>&vis)
{
    vis[i]=true;
   
   for(auto x:adj[i])
   {
       if(!vis[x])
       dfs(x,vis);
   }
   
}
bool graph()
{
    vector<bool>vis(V+1,false);
    int node=-1;
    for(int i=0;i<V;i++)
    {
        if(adj[i].size()>0)
        {
            node=i;
            break;
        }
    }
    if(node==-1)
    return true;
    dfs(node,vis);
    for(int i=0;i<V;i++)
    if(vis[i]==false&&adj[i].size()>0)
    return false;
    return true;
}
int find()
{
    int count=0;
    if(!graph())
    return true;
    for(int i=0;i<V;i++)
    {
        if(adj[i].size()%2!=0)
        count++;
    }
    if(count>2)
    return 0;
    if(count==0)
    return 1;
    if(count==2)
    return 2;
}
void findpath()
{
    int ret=find();
    if(ret==0)
    cout<<"It is euler graph\n";
    if(ret==2)
    cout<<"It is semi euler graph\n";
    if(ret>2)
    cout<<"It is not euler graph\n";
}
int main()
{
    adj[0].push_back(1);
	adj[1].push_back(0);
	adj[0].push_back(2);
	adj[2].push_back(0);
	adj[2].push_back(1);
	adj[1].push_back(2);
	adj[0].push_back(3);
	adj[3].push_back(0);
	adj[3].push_back(4);
	adj[4].push_back(3);
	findpath();

	return 0;
}