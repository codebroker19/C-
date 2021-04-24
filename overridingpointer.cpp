#include<iostream>
using namespace std;
class base
{
 public:
virtual void fun()
 {
     cout<<"Class of base"<<"\n";
 }
};
class derived:public base
{
    public:
void fun()
{
    cout<<"Class of derived"<<"\n";
}
};
int main()
{
    derived d;
    //d.fun();
    base*ptr=&d;
    ptr->fun();
    return 0;
}