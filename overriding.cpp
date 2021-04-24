#include<iostream>
using namespace std;
class base{
public:
void display()
{
    cout<<"fun of base"<<"\n";
}
};
class derived:public base{
    public:
    void display()
    {
        cout<<"fun of derived"<<"\n";
    }
};
int main()
{
    derived d;
    d.display();
}