#include<bits/stdc++.h>
using namespace std;
int main()
{
    int dividend,divisor,flag=0;
    cin>>dividend>>divisor;
    if((dividend<0)||(divisor<0))
    flag=1;
   
    int a=divisor,b=0;
    int count=0;
    dividend=abs(dividend);
    divisor=abs(divisor);
    while(dividend>divisor)
    {
     dividend=dividend-divisor;
     count++;
     
    }
  if(flag==1)
    cout<<(-1)*count;
    else
    cout<<1*count;
return 0;
}