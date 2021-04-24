#include<bits/stdc++.h>
using namespace std;
struct node
{
int data;
struct node*next;
};
struct node*front=NULL;
struct node*rear=NULL;

void enqueue(int data)
{
    struct node*temp=(struct node*)malloc(sizeof(node));
    temp->data=data;
    temp->next=NULL;
    if(front==NULL&rear==NULL)
    {front=rear=temp;
    return;}
    rear->next=temp;
    rear=temp;
}
void dequeue()
{
    struct node*temp;
    if(rear==NULL)
    {cout<<"Queue Underflow\n";
    return;}
    if(front==rear)
    front=rear=NULL;
    else
    {
        front=front->next;
    }
    free(temp);
}
int Front()
{
    if(front==NULL)
    {cout<<"Queue underflow\n";
    exit(1);}
    else
    {
        return front->data;
    }
    
}
void display()
{
    struct node*temp=front;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}

int main()
{
    int option,value;
    do
    {   cout<<"Enter 1 or 2 or 3\n";
        cin>>option;
         switch (option)
         {
         case 1:cin>>value;
         enqueue(value);
             break;
         case 2:
          dequeue();
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