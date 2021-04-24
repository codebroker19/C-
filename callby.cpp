#include<iostream>
using namespace std;
void swap(int a,int b)
{   
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b;

}
int main()
{
    int x=30,y=40;
    swap(x,y);
    
    return 0;
}