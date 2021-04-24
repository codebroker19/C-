#include<iostream>
using namespace std;
class base
{
    public:
     base()
    {
        cout<<"Non Param standard"<<"\n";
    }
     base(int x)
    {
        cout<<"Param of base"<<"\n";
    }
};
class derived:public base{
    public:
   derived()
  {
      cout<<"Non param of derived"<<"\n";
  }
   derived(int y)
  {
      cout<<"Param of derived"<<"\n";
  }
};
int main()
{
    derived d;
}