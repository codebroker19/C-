#include<iostream>
using namespace std;
class base{
public:

void fun1(){
cout<<"fun 1 of base"<<"\n";
}
};
class derived:public base
{
public:
void fun2()
{
    cout<<"fun 2 of base"<<"\n";
}
};
int main()
{
    derived d;
    d.fun1();
    d.fun2();
    base*ptr=&d;
    ptr->fun1();
    return 0;
}

