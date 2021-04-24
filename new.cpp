#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct node
{
    int data;
    struct node*next;
}node;

typedef struct 
{
    node *head;
    node *tail;
    int nodecount;
}linkedlist;

void initlist(linkedlist *);
int loadfromfile(linkedlist *,char);
void createListFromRandomNumbers(linkedlist *, int);
void insertattail(linkedlist *,int);
void insertathead(linkedlist *,int);
void printlistdetail(linkedlist *);
void printlist(linkedlist *);
node *find(linkedlist *,int,node**);
int deletefirst(linkedlist *);
int deletelast(linkedlist *);
int deletetarget(linkedlist *,int);
void reverse(linkedlist *);

void initlist(linkedlist *listptr)
{
    listptr->head=NULL;
    listptr->tail=NULL;
    listptr->nodecount=0;
}

void insertattail(linkedlist *listptr,int data)
{
    node*newnodeptr=(node*)malloc(sizeof(node));
if(newnodeptr=='\0')
{printf("New node cannot be allocated\n");
return;}
newnodeptr->data=newnodeptr;
newnodeptr->next=NULL;
if(listptr->nodecount==0)
{
    listptr->tail=newnodeptr;
    listptr->head=newnodeptr;
}
else
{
    listptr->tail->next=newnodeptr;
    listptr->tail=newnodeptr;
}
listptr->nodecount++;
}

void insertathead(linkedlist *listptr,int data)
{
    node*newnodeptr=(node*)malloc(sizeof(node));
   if(newnodeptr=='\0')
   {
       printf("The head node cannot be assigned\n");
   return ;}
   newnodeptr->data=newnodeptr;
   newnodeptr->next=NULL;
   if(listptr->nodecount==0)
   {
       listptr->head=newnodeptr;
       listptr->tail=newnodeptr;
   }
   else
   {
       listptr->next=listptr->head;
       listptr->head=newnodeptr;
   }
   listptr->nodecount++;
}
void printlist(linkedlist *lstptr)
{
    if(lstptr->nodecount==0)
    {
        printf("Linked list is empty\n");
    return ;}
    node *current=lstptr->head;
    while(current!='\0')
    {
        printf("%d\n",current->data);
        current=current->next;
    }
}
void printlistdetail(linkedlist *lstptr)
{
    if(lstptr->nodecount==0)
    {printf("Linked list is empty\n");
    return ;}
    printf("Printing linked list in detail\n");
    printf("HEAD:%p\n",lstptr->head);
    node *current=lstptr->head;
    int counter=1;
    while(current!='\0')
    {
        printf("%d. (%p)[%d|%p]\n",counter,current,current->data,current->next);
        current=current->next;
        counter++;
    }
}
node *find(linkedlist *lstptr,int target,node **prvptr)
{
    node *current=lstptr->head;
    *prvptr=NULL;
    while(current!=NULL)
    {
        if(current->data==target)
        {
            break;
        }
        *prvptr=current;
        current=current->next;
    }
    return target;
}
int loadfromfile(linkedlist *lstptr,char *filename)
{
    FILE *inputfile=fopen(filename,"r");
    if(inputfile==NULL)
    {
        printf("File is not found\n");
    return 0;}
    int data;
    fscanf(inputfile,"%d",&data);
    while(!feof(inputfile))
    {
        insertattail(lstptr,data);
        fscanf(inputfile,"%d",&data);
    }
    fclose(inputfile);
    return 1;
}
void createListFromRandomNumbers(linkedlist *lstptr, int n)
{
    int i;
    srand(time(NULL));
    for(i=0;i<=n;++i)
    {
        int k=rand()%1000;
        insertattail(lstptr,k);
    }
}
int deletefirst(linkedlist *lstptr)
{
    if(lstptr->nodecount==0)
    {
        return -9999;
    }
    node*first=lstptr->head;
    int data=first->data;
    if(lstptr->nodecount==1)
    {
        lstptr->head=NULL;
        lstptr->tail=NULL;
    }
    else
    {
        lstptr->head=first->next;
    }
    free(first);
    lstptr->nodecount--;
    return data;
}
int deletelast(linkedlist *lstptr)
{
    if(lstptr->nodecount==0)
    {
        return -9999;
    }
    node *current=lstptr->head;
    node *last=lstptr->tail;
    int data=last->data;
    if(lstptr->nodecount==1)
    {
        lstptr->head=NULL;
        lstptr->tail=NULL;
    }
    else
    {
        while(current->next!=NULL)
        {
            current=current->next;}
            lstptr->tail=current;
            lstptr->tail->next=NULL;
        
    }
    free(last);
    lstptr->nodecount--;
    return data;
}
int deletetarget(linkedlist *lstptr,int target)
{
    node *current=NULL,*prev=NULL;
    current=find(lstptr,target,&prev);
    if(lstptr->nodecount==0)
    {return -9999;}
    int data=current->data;
    if(current==lstptr->head)
    {
        return deletefirst(lstptr);
    }
    else if(current==lstptr->tail)
    {
        return deletelast(lstptr);
    }
    else
    {
        prev->next=current->next;
        free(current);
        lstptr->nodecount--;
        return data;
    }
}
void reverse(linkedlist *lstptr)
{
    if(lstptr->nodecount<=1)
    {return;}
    node *p,*q,*r;
    q=NULL;
    p=lstptr->head;
    r=p->next;
    while(1)
    {
        p->next=q;
        if(p==lstptr->tail)
        {
            break;
        }
        q=p;
        p=r;
        r=r->next;
    }
    lstptr->tail=lstptr->head;
    lstptr->head=p;
}

void menu(){
  printf("    Singly Linked List Operations\n");
  printf("----------------------------------------\n");
  printf("1. Load from file\n");          
  printf("2. Create list with random numbers\n");
  printf("3. Insert at head\n");         
  printf("4. Insert at tail\n");          
  printf("5. Print List (detail)\n");     
  printf("6. Print List (data only)\n"); 
  printf("7. Find\n");                    
  printf("8. Delete first\n");            
  printf("9. Delete last\n");             
  printf("10. Delete a target node\n");    
  printf("11.Reverse\n");                 
  printf("12. Quit\n");                   
}