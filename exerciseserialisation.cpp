#include<iostream>
#include<fstream>
using namespace std;
class student 
{
public:
int age;
int rollnumber;
string name;
friend ofstream &operator<<(ofstream &ofs,student &s);
friend ifstream &operator>>(ifstream &ifs,student &s);
};
ofstream &operator<<(ofstream &ofs,student &s)
{
    ofs<<s.name<<"\n";
    ofs<<s.age<<"\n";
    ofs<<s.rollnumber<<"\n";
}
ifstream &operator>>(ifstream &ifs,student &s)
{
    ifs>>s.name>>s.age>>s.rollnumber;
    return ifs;
}
int main()
{
    student s1;
    s1.name="John";
    s1.age=25;
    s1.rollnumber=506349;
    ofstream ofs("Mystudent.txt",ios::trunc);
    ofs<<s1;
    ofs.close();
    ifstream ifs("Mystudent.txt");
    ifs>>s1;
    cout<<"Name is "<<s1.name<<"\n";
    cout<<"Age is "<<s1.age<<"\n";
    cout<<"Roll number is "<<s1.rollnumber<<"\n";
    ifs.close();
    return 0;
}