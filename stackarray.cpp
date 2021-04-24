#include<iostream>
#include<cstring>
#define MAX 10000
using namespace std;

class Stack
{
private:
int a[MAX];
int top;
int minelement;
public:

bool isempty()
{
if(top==-1)
return true;
else
return false;
}
bool isfull()
{
  if(top==MAX)
  return true;
else
return false;
}
void getmin()
{
  if(isempty())
  cout<<"Stack Underflow\n";
  else
  cout<<minelement;
}
void push(int data)
{
  if(isfull())
  cout<<"Stack Overflow\n";
  else if(isempty())
{
  minelement=data;
  top++;
  a[top]=data;
}
  if(data<minelement)
  {a[top]=(2*data-minelement);
  minelement=data;}
  else
a[top]=data;
}
int pop()
{
  if(isempty())
  {cout<<"Stack Underflow\n";}
  int data=a[top];
  a[top]=0;
  top--;
  if(data<minelement)
  {
    minelement=minelement*2-data;
  }
  else
return data;
}
 int peek(int pos) {
    if (isempty()) {
      cout << "stack underflow" << endl;
      return 0;
    } else {
      return a[pos];
    }
  }
   void change(int pos, int val) {
    a[pos] = val;
    cout << "value changed at location " << pos << endl;
  }
 
  void display() {
    cout << "All values in the Stack are " << endl;
    for (int i = 4; i >= 0; i--) {
      cout << a[i] << endl;
    }
  }
    Stack() {
      top = -1;
      for (int i = 0; i < 5; i++) {
        a[i] = 0;
      }
    }
    
  int count() {
    return (top + 1);
  }
 
};
int main() {
  Stack s1;
  int option, postion, value;
 
  do {
    cout << "What operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
    cout << "1. Push()" << endl;
    cout << "2. Pop()" << endl;
    cout << "3. isEmpty()" << endl;
    cout << "4. isFull()" << endl;
    cout << "5. peek()" << endl;
    cout << "6. count()" << endl;
    cout << "7. change()" << endl;
    cout << "8. display()" << endl;
    cout << "9. getmin" << endl << endl;
 
    cin >> option;
    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Enter an item to push in the stack" << endl;
      cin >> value;
      s1.push(value);
      break;
    case 2:
      cout << "Pop Function Called - Poped Value: " << s1.pop() << endl;
      break;
    case 3:
      if (s1.isempty())
        cout << "Stack is Empty" << endl;
      else
        cout << "Stack is not Empty" << endl;
      break;
    case 4:
      if (s1.isfull())
        cout << "Stack is Full" << endl;
      else
        cout << "Stack is not Full" << endl;
      break;
    case 5:
      cout << "Enter position of item you want to peek: " << endl;
      cin >> postion;
      cout << "Peek Function Called - Value at position " << postion << " is " << s1.peek(postion) << endl;
      break;
    case 6:
      cout << "Count Function Called - Number of Items in the Stack are: " << s1.count() << endl;
      break;
    case 7:
      cout << "Change Function Called - " << endl;
      cout << "Enter position of item you want to change : ";
      cin >> postion;
      cout << endl;
      cout << "Enter value of item you want to change : ";
      cin >> value;
      s1.change(postion, value);
      break;
    case 8:
      cout << "Display Function Called - " << endl;
      s1.display();
      break;
    case 9:
      s1.getmin();
      break;
    default:
      cout << "Enter Proper Option number " << endl;
    }
 
  } while (option != 0);
 
  return 0;
}