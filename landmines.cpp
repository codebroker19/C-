#include<bits/stdc++.h>
using namespace std;
/*#define r 12
#define c 10
int row[]={-1,0,0,-1};
int col[]={0,-1,1,0};
bool isvalid(int x,int y)
{
    if(x>=0&&y>=0&&x<r&&y<c)
    return true;
    return false;
}
bool isSafe(int mat[r][c], int visited[r][c],
            int x, int y)
{
    if (mat[x][y] == 0 || visited[x][y])
        return false;
 
    return true;
}
void tug(int mat[r][c])
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
         if(mat[i][j]==0)
         {
             for(int k=0;k<4;k++)
             if(isvalid(i+row[k],j+col[k]))
             mat[i+row[k]][j+col[k]]=-1;
         }
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(mat[i][j]==-1)
            mat[i][j]=0;
        }
    }
      for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
}

void shortestpath(int mat[r][c],int visited[r][c],int i,int j,int &mindist,int dist)
{
    if(j==c-1)
    {
        mindist=min(dist,mindist);
        return;
    }
    if(dist>mindist)
    return;
    visited[i][j]=1;
    for(int k=0;k<4;k++)
    {
        if(isvalid(i+row[k],j+row[k])&&isSafe(mat,visited,i+row[k],j+col[k]))
        {
            shortestpath(mat,visited,i+row[k],j+col[k],mindist,dist+1);
        }
    }
    visited[i][j]=0;
}
void find(int mat[r][c])
{
int mindist=9999;
int visited[r][c];
tug(mat);
for(int i=0;i<r;i++)
{
    if(mat[i][0]==1)
    {
        memset(visited,0,sizeof(visited));
        shortestpath(mat,visited,i,0,mindist,0);
        if(mindist==c-1)
        break;
    }
}
if(mindist!=9999)
{
    cout<<mindist;
}
else
{
    cout<<"NO";
}


}

int main()
{
    // input matrix with landmines shown with number 0
    int mat[r][c] =
    {
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 0, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 0, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 0, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 0, 1, 1, 1, 1 },
        { 1, 0, 1, 1, 1, 1, 1, 1, 0, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 0, 1, 1, 1, 1, 0, 1, 1, 1, 1 },
        { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        { 1, 1, 1, 0, 1, 1, 1, 1, 1, 1 }
    };
 
    // find shortest path
    find(mat);
 
    return 0;
}*/
int main(){
    int count=0;
while(count<=100)
{
    if(count%3==0)
    cout<<" Fizz ";
    else if(count%5==0)
    cout<<" Buzz ";
    else
    cout<<" "<<count<<" ";
    count++;
}
return 0;
}