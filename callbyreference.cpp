#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
  cout<<&a<<" "<<&b<<"\n";
  int temp;
  temp=a;
  a=b;
  b=temp;
   cout<<a<<" "<<b<<"\n";
}
int main()
{
    int a=25,b=95;
    swap(a,b);
    
    return 0;
}