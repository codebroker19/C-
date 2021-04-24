#include<iostream>
using namespace std;
class stackoverflow:exception{};
class stackunderflow:exception{};

class Stack
{
 private:
 int *stack;
 int size;
 int top=-1;
 public:
 Stack(int a)
 {
size=a;
stack=new int[size];
 }
 push(int x)
 {
     if(top==size-1)
     throw stackoverflow();
     else
     {
         top++;
         stack[top]=x;
     }
     
 }
 int pop()
 {
     if(size==-1)
     throw stack underflow();
     else
     {
         return 9999;
     }
     
 }
};
int main()
{

    Stack s(4);
    s.push(5);
    s.push(8);
    s.push(6);
    s.push(2);
}