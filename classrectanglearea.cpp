#include<iostream>
using namespace std;
class rectangle
{
private:
    int length;
    int breadth;

public:
void getlength(int l)
{   if(l<0)
    l=0;
    else
    {
        length=l;
    }
    
}
void getbreadth(int b)
{  if(b<0)
   b=0;
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
    rectangle r1;
    r1.getlength(12);
    r1.getbreadth(18);
    cout<<r1.area()<<"\n";
    cout<<r1.perimeter()<<"\n";
    return 0;
}