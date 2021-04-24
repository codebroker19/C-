#include<iostream>
#include<cstring>
using namespace std;
int main()
{ int i,j=0;
  char s[200],rev[200];
  cout<<"Enter the word";
  cin>>s;
  int len=strlen(s);
for(i=0;i<len;i++)
{
  if(s[i]!=s[len-i-1])
  j=1;
}

if(j==1)
cout<<"Not a palindrome"<<"\n";
else
cout<<"Palindrome"<<"\n";

  return 0;
}