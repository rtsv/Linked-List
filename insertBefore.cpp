#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};
class linkedList
{
    private:
    Node *first;
    Node *last;
    
    public:
    linkedList()
    {
        first=nullptr;
        last=nullptr;
    };
    void insertNode(int x)
    {
        if(first==nullptr)
        {
            first=new Node;
            first->data=x;
            first->next=nullptr;
            last=first;
        }
        else
        {
            Node *temp;
            temp=new Node;
            temp->data=x;
            temp->next=nullptr;
            last->next=temp;
            last=last->next;
        }
    }
    void display()
    {
        Node *temp=first;
        while(temp!=nullptr)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    void insertBefore(int x,int pos)
    // x=value to be insert;
    // pos=before which value
    {
        Node *p=first;
        Node *q=nullptr;
        while(p!=nullptr)
        {
            if(p->data==pos)
            {
                Node *temp=new Node;
                temp->data=x;
                temp->next=p;
                q->next=temp;
                q=p;
                p=p->next;
            }
            else
            {
                q=p;
                p=p->next;
            }
        }
    }
};
int main()
{
    linkedList l1;
    l1.insertNode(5);
    l1.insertNode(15);
    l1.insertNode(35);
    l1.insertNode(45);
    l1.display();
    cout<<endl;
    l1.insertBefore(25,35);
    l1.insertBefore(22,25);
    l1.display();
}
