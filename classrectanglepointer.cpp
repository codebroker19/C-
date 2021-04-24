#include<iostream>
using namespace std;
 class rectangle
{
public:
int length;
int breadth;
int area()
{
    return length*breadth;
}
int perimeter()
{
    return 2*(length+breadth);
}
};
int main()
{
    rectangle r1;
    rectangle*ptr;
    ptr=&r1;
    ptr->length=15;
    ptr->breadth=25;
    cout<<ptr->area()<<"\n";
    cout<<ptr->perimeter()<<"\n";
    return 0;
}
