#include<iostream>
using namespace std;
class student
{
 public:
 static int admino;
 int rollno;
string name;
student (string n)
{
    admino++;
    rollno=admino;
    name=n;
}
void display()
{
    cout<<"Name "<<name<<"\n"<<"rollno "<<rollno<<"\n";
}
};
int student::admino=0;
int main()
{
  student s1("Rajesh");
  student s2("Ravi");
  student s3("Mainak");
  s1.display();
  s2.display();
  s3.display();
  cout<<student::admino<<"\n"; 
  return 0;
}