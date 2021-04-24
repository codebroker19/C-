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
    r1.length=15;
    r1.breadth=35;
    cout<<r1.area()<<" "<<"\n";
    cout<<r1.perimeter()<<" "<<"\n";
    rectangle r2;
    r2.length=43;
    r2.breadth=64;
    cout<<r2.area()<<" "<<"\n";
    cout<<r2.perimeter()<<" "<<"\n";
    return 0;
}

