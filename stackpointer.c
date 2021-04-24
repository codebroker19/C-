#include<stdio.h>
#define MAX 1000
typedef struct 
{
    int a[MAX];
    int top;
    
}stack;
void init(stack*sp)
{
    sp->top=-1;
}

void push(stack*sp,int value)
{   int data;
    //struct node*sp=(struct node*)malloc(sizeof(struct node));
    if(sp->top==MAX-1)
    printf("Stack OVerflow\n");
    else
    {
        sp->top++;
        sp->a[sp->top]=data;
    }
}
int pop(stack*sp)
{ int data;
    if(sp->a[MAX]==-1)
    return -9999;
    else
    {
        data=sp->a[sp->top];
        sp->top--;
    }
    return data;
}
 int main()
 {
     stack s1,s2;
     init(&s1);
     init(&s2);
     push(&s1,50);
     push(&s1,100);
     push(&s1,200);
    printf("Deleted from s1 %d\n",pop(&s1));
    printf("Deleted from s2 %d\n",pop(&s2));
    printf("Deleted from s2 %d\n",pop(&s2));
    return 0;

 }
