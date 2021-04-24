#include<bits/stdc++.h>
using namespace std;
struct node
{
int data;
struct node*link;
};
struct node*top;

void push(int data)
{
    struct node*temp;
    temp=new node();
    if(!temp)
    {cout<<"Stack Overflow\n";
    exit(0);}
    temp->data=data;
    temp->link=top;
    top=temp;
}
void pop()
{
    int data;
    struct node*temp;
    if(top==NULL)
    {
        cout<<"Stack Underflow\n";
    exit(0);}
    else
    {
        temp=top;
        top=top->link;
        temp->link=NULL;
       free(temp);
    }
    
}

int isempty()
{
    return top==NULL;
}
int peek()
{
    if(!isempty())
    return top->data;
    else
    {
        exit(1);
    }
    
}

void display()
{
    struct node*temp;
    if(top==NULL)
    {cout<<"Stack Underflow\n";
    exit(0);}
    else
    {
     temp=top;
     while(temp!=NULL)
     {
         cout<<temp->data<<"->";
         temp=temp->link;
     }
    }
}
int main()
{
    int value,option;
  
    do
    {  cout<<"Enter 1 or 2 or 3\n";
    cin>>option;
    switch (option)
    {
    case 1:cin>>value;
    push(value);
        break;
        case 2:
        pop();
        break;
        case 3:
        display();
        break;
    default:
        break;
    }
    } while (option!=0);
    return 0;
}