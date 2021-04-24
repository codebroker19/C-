#include<iostream>
using namespace std;
class getsalary{
private:
int salary;
int empid;
string name;
public:
getnewdetails(int sal,int id,string n)
{
    salary=sal;
    empid=id;
    name=n;
}
int wage()
{
    return wage;
}
};
class getnewsalary{
private:
int salary;
int empid;
string name;
public:
getdetails(int sal,int id,string n)
{
    salary=sal;
    empid=id;
    name=n;
}
int salary()
{
    return salary;
}
};
int main()
{
    getsalary p1(50000,634,"Rajesh");
    getnewsalary p2(65000,342,"Rajendra");
    cout<< p1.wage()<<" "<<"\n";
    cout<<p2.salary()<<" "<<"\n";
    return 0;
    
}