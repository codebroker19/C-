#include<iostream>
#include<fstream>
using namespace std;
class student
{
  public:
  int age;
  string name;
  friend ofstream &operator<<(ofstream &ofs,student &s);

};
    ofstream &operator<<(ofstream &ofs,student &s)
    {
     ofs<<s.name<<"\n";
     ofs<<s.age<<"\n";
     return ofs;  
    }
    int main()
    {
        student s1;
        s1.name="John";
        s1.age=25;
        ofstream ofs("My.txt",ios::trunc);
        ofs<<s1;
        ofs.close();
        return 0;
    }