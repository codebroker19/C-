#include<iostream>

using namespace std;
class student
{
private:
int rollnumber;
int mathsmarks;
int sciencemarks;
int sstmarks;
string name;
public:
 studentdetails(string a,int rn,int mm,int sm,int sstm)
{
    name=a;
    rollnumber=rn;
    mathsmarks=mm;
    sciencemarks=sm;
    sstm=sstm;
}
int sum()
{
    return mathsmarks+sciencemarks+sstmarks;
}
char grade()
{
    int percentage=sum()/3;
    if(percentage>90)
    return 'A';
    else if(percentage<90&&percentage>70)
    return 'B';
    else
    {
        return 'C';
    }
    
}
};
int main()
{   student s;
    int rn;
    string a;
    int mm,sm,sstm;
    cout<<"Enter the name of student";
    cin>>a;
    cout<<"Enter the roll number";
    cin>>rn;
    cout<<"Enter the marks in maths science sst";
    cin>>mm>>sm>>sstm;
    s.studentdetails(a,rn,mm,sm,sstm);
   cout<<"The grade obtained is"<<s.grade()<<"\n";
}
