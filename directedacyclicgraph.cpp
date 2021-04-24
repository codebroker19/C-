#include<bits/stdc++.h>
using namespace std;
vector<int> order;
void topo(int i,intvector<int>&vis,vector<vector<pair<int,int>>>g)
{
    vis[i]=1;
    for(auto x:g[i])
    {if(!vis[x.first])
    topo(x,vis,g);}
    order.push_back(i);
}
int main()
{
int v,e,src;
cin>>v>>e>>src;
vector<vector<pair<int,int>>>g(v);
for(int i=0;i<e;i++)
{
    int x,y,z;
    cin>>x>>y>>z;
    g[x].push_back({y,z});
}
vector<int>vis(v,0);

for(int i=0;i<v;i++)
{
    if(!vis[i])
    topo(i,vis,g);
}
vector<int>dist(v);
for(int i=0;i<v;i++)
{
    dist[i]=-99999;

}
dist[src]=0;
for(int i=v-1;i>=0;i--)
{
    if(dist[order[i]]!=-99999)
    {for(auto x:g[order[i]])
    {
        int v=dist[x.first];
        int w=x.second();
        int u=dist[order[i]];
        if(u+w>v)
        dist[x.first]=u+w;
    }
}
}
for(int i=0;i<v;i++)
{
    if(i!=src&&dist[i]=INT_MIN)
    cout<<src<<" "<<dist[i]<<"\n";
}
    return 0;
}