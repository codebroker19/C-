#include<iostream>
using namespace std;
int fun(int n)
{
    while(n>0)
    {
    cout<<n<<" "<<"\n";
    n=(n-1);
}
}
int main()
{
    int x=5;
    fun(x);
    return 0;
}