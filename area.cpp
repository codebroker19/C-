#include<iostream>
using namespace std;
class evaluation
{
    private:
    int area();
    int perimeter();
};
class rectangle:public evaluation
{
 private:
 int length,breadth;
 public:
 void setlength(int l)
 {
     length=l;
     
 }
 void setbreadth(int b)
 {
     breadth=b;
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
class circle:public evaluation{
private:
int radius;
public:
void setradius(int r)
{
    radius=r;
}
int area()
{
    return 3.14*radius*radius;
}
int perimeter()
{
    return 3.14*2*radius;
}
};
int main()
{
    rectangle r1;
    r1.setlength(15);
    r1.setbreadth(25);
    cout<<r1.area()<<"\n";
    cout<<r1.perimeter()<<"\n";
    circle r2;
    r2.setradius(15);
    cout<<r2.area()<<"\n";
    cout<<r2.perimeter()<<"\n";

    return 0;
}
