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
        cout<<"Param of base"<<x<<"\n";
    }
};
class derived:public base{
    public:
   derived()
  {
      cout<<"Non param of derived"<<"\n";
  }
   /*derived(int y)
  {
      cout<<"Param of derived"<<y<<"\n";                This function is not necessary
  }*/
   derived(int x ,int y):base(x)//this function is combination of this and above function
  {
      cout<<"Param of derived"<<y<<"\n";
  }
};
int main()   
{
    derived (10,5);
}              