#include<iostream>
using namespace std;
int main()
{
    int i=0,n,m,r,a[100],j;
    cout<<"Enter the number";
    cin>>n;
    m=n;
    while(n>0){
        r=n%10;
        a[i]=r;
        i++;
        n=n/10;
        }
        for(j=i-1;j>-1;j--){
            cout<<a[j]<<" ";
        }
        return 0;

}