#include<bits/stdc++.h>
using namespace std;
#define n 8
int mat[n][n];
bool issafe(int nx,int ny,int mat[n][n])
{
    return(nx>=0&&nx<n&&ny>=0&&ny<n&&mat[nx][ny]==-1);
}
void display()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {cout<<mat[i][j]<<" ";}
        cout<<"\n";
    }
}
bool knightsproblem(int mat[n][n],int x,int y,int mv,int dx[],int dy[])
{
    if(mv==n*n)
    return true;
    int nx,ny;
    for(int i=0;i<n;i++)
    {
        nx=x+dx[i];
        ny=y+dy[i];
        if(issafe(nx,ny,mat))
        {
            mat[nx][ny]=mv;
            if(knightsproblem(mat,nx,ny,mv+1,dx,dy))
            return true;
            else
            mat[nx][ny]=-1;
        }
    }
    return false;
}
bool knighttour()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            mat[i][j]=-1;
        }
    }
    int dx[8]={2,1,-1,-2,-2,-1,1,2};
    int dy[8]={1,2,2,1,-1,-2,-2,-1};
mat[0][0]=0;
if(knightsproblem(mat,0,0,1,dx,dy)==false)
{
    cout<<"No Solution"<<"\n";
    return false;
}
else
{
    display();
    return true;
}

}
int main()
{
    knighttour();
}