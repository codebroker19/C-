#include<iostream>
using namespace std;
class rectangle
{
private:
int length;
int breadth;
public:
//non parameter-fuctions where we want no specifications and get any randam value
rectangle()
{
    length=1;
    breadth=1;
}
//parameter value-where we specify the length and breadth of a rectangle
rectangle(int l,int b)
{
    setlength(l);
    setbreadth(b);
}
// copy constructor where we want an exact same answer or product of any previous function
rectangle(rectangle&r1)
{
    length=r1.length;
    breadth=r1.breadth;
}

void setlength(int l)
{
    if(l<0)
    length=0;
    else
    {
        length=l;
    }
    
}
void setbreadth(int b)
{
    if(b<0)
    breadth=0;
    else
    {
        breadth=b;
    }
    
}
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
    rectangle r1(15,16);
    rectangle r2(r1);
    cout<<r2.area()<<"\n";
    cout<<r2.perimeter()<<"\n";
return 0;
}