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
            cout<<temp->data<<"->";
            temp=temp->next;
        }
    }
};
int main()
{
    linkedList l1;
    l1.insertNode(7);
    l1.insertNode(17);
    l1.insertNode(67);
    l1.insertNode(47);
    l1.display();
}
