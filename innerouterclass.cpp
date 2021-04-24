#include<iostream>
using namespace std;
class outer
{
public:
void fun()
{
    i.display();
}
class inner
{
    public:
    void display()
    {
        cout<<"display inner"<<"\n";
    }
};
inner i;
};
int main()
{
    outer::inner;
}