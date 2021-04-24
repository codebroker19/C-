#include<bits/stdc++.h>
#define M 10
#define N 10
using namespace std;

bool valid(int mat[M][N],int vis[M][N],int x,int y)
{
    if(mat[x][y]==0||vis[x][y])
    return false;
    return true;
}
bool safe(int x,int y)
{
    if(x>=0&&y>=0&&x<M&&y<N)
    return true;
    return false;
}
void findpath(int mat[M][N],int vis[M][N],int x,int y,int i,int j,int&maxdist,int dist)
{
    if(mat[i][j]==0)
    return;
    if(i==x&&j==y)
    {
        maxdist=max(dist,maxdist);
        return;
    }
    vis[i][j]=1;
    if(valid(mat,vis,i+1,j)&&safe(i+1,j))
    findpath(mat,vis,x,y,i+1,j,maxdist,dist+1);
    if(valid(mat,vis,i-1,j)&&safe(i-1,j))
    findpath(mat,vis,x,y,i-1,j,maxdist,dist+1);
    if(valid(mat,vis,i,j+1)&&safe(i,j+1))
    findpath(mat,vis,x,y,i,j+1,maxdist,dist+1);
    if(valid(mat,vis,i,j-1)&&safe(i,j-1))
    findpath(mat,vis,x,y,i,j-1,maxdist,dist+1);
    vis[i][j]=0;
}
int main()
{
    // input matrix
    int mat[M][N] =
    {
        { 1, 0, 1, 1, 1, 1, 0, 1, 1, 1 },
        { 1, 0, 1, 0, 1, 1, 1, 0, 1, 1 },
        { 1, 1, 1, 0, 1, 1, 0, 1, 0, 1 },
        { 0, 0, 0, 0, 1, 0, 0, 1, 0, 0 },
        { 1, 0, 0, 0, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 },
        { 1, 0, 0, 0, 1, 0, 0, 1, 0, 1 },
        { 1, 0, 1, 1, 1, 1, 0, 0, 1, 1 },
        { 1, 1, 0, 0, 1, 0, 0, 0, 0, 1 },
        { 1, 0, 1, 1, 1, 1, 0, 1, 0, 0 }
    };
 
    // construct a matrix to keep track of visited cells
    int visited[M][N];
    memset(visited, 0, sizeof visited);
 
    int max_dist = 0;
 
    // `(0, 0)` are the source cell, and `(5, 7)` are the destination cell coordinates
    findLongestPath(mat, visited, 0, 0, 5, 7, max_dist, 0);
 
    cout << "The Maximum length path is " << max_dist;
 
    return 0;
}