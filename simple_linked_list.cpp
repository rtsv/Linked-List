#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *address;
};

struct Node * create(int a[],int n)
{
    struct Node *t, *last, *first;
    first = (struct Node *)malloc(sizeof(struct Node));
    first ->data=a[0];
    first ->address=NULL;
    last = first;
    for(int i=1;i<n;i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data=a[i];
        t->address=NULL;
        last->address=t;
        last=t;
        
    }
    return first;
}
void display(struct Node *p)
{
    while(p)
    {
        printf("%d ",p->data);
        p=p->address;
    }
}
void Rdisplay(struct Node *q)
{
    if(q!=NULL)
    {
        printf("%d ",q->data);
        Rdisplay(q->address);
    }
}

int Add(struct Node *p)
{
    int sum=0;
    while(p)
    {
        sum=sum+p->data;
        p=p->address;
    }
    return sum;
}
int Radd(struct Node *p)
{
    int sum =0;
    if(p==NULL)
    return 0;
    else
    return Radd(p->address)+p->data;
}

int main()
{
    struct Node *first;
    
    int a[]={1,5,6,2,4,8};
    int n=6;
    first = create(a,n);
    printf("%d",Radd(first));

    return 0;
}
