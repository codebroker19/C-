#include<iostream>
using namespace std;
class rectangle{
   private:
   int length;
   int breadth;
public:
 int setlength(int l)
{
    if(l>0)
    length=l;
    else
    {
        length=0;
    }
    }
    int  setbreadth(int b)
    {
        if(b>0)
        breadth=b;
        else
        {
            breadth=0;
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
class cuboid:public rectangle
{
  private:
  int height;
public:
void setheight(int h)
{
    height=h;
}
 cuboid(int l,int b,int h)
{
    setheight(h);
    setlength(l);
    setbreadth(b);
}
int volume()
{
    return area()*heightz;
}
};
int main()
{   
    cuboid c(10,15,6);
    cout<<c.volume()<<"\n";
    return 0;
}