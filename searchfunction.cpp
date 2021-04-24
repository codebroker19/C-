#include<iostream>
using namespace std;
int search(int a[],int n,int b)
{
    for(int i=0;i<n;i++)
    if(a[i]==b)
    return i;
   
}


int main()
{   int a[]={2,6,7,9,8,6,5},b;
    cout<<"Enter the element to be searched"<<"\n";
    cin>>b;
   int index= search(a,6,b);
   cout<<index;
    return 0;
}