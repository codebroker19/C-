#include<iostream>
using namespace std;
class car
{
public:
virtual void start()
{
    cout<<"Car started"<<"\n";
}
};
class innova:public car{
public: 
 void start()
{
    cout<<"Innova Started"<<"\n";
}
};
class swift:public car{
    public:
    void start()
    {
        cout<<"Swift started"<<"\n";
    }
};
int main()
{
    car*p=new innova();
    p->start();
    p=new swift();
    p->start();
    return 0;
}