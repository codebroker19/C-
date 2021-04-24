#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    cout<<*a<<" "<<*b<<"\n";
}
int main()
{
    int a=45,b=25;
    swap(&a,&b);
    return 0;
}