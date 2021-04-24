#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the year"<<"\n";
    cin>>x;
    if(x%4==0){
        if(x%100==0){
            if(x%400==0)
            cout<<"Leap year";
            else
            cout<<"Not leap year";
        }
            else
            cout<<"is a leap year";
    }
            else
    
            cout<<"Not leap year";
return 0;
    
}