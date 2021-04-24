#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ofstream ofs("My.txt",ios::trunc);
  ofs<<"John"<<"\n";
  ofs<<"25"<<"\n";
  //ofs<<"computer"<<"\n";
  ofs.close();
  return 0;  
} 