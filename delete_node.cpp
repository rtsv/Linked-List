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
        cout<<endl;
    }
    void addList()
    {
        Node *temp=first;
        int sum=0;
        while(temp!=nullptr)
        {
            sum+=temp->data;
            temp=temp->next;
        }
        // return sum;
        cout<<sum<<endl;
    }
    void erase(int x)
    {
        
        if(first->data==x)
        {
            Node* temp=first;
            first=first->next;
            delete temp;
        }
        Node *p=first;
        Node *q=nullptr;
        while(p!=nullptr)
        {
            if(p->data!=x)
            {
                q=p;
                p=p->next;
            }
            else
            {
                //p->next=nullptr;
                Node *temp=p;
                q->next=p->next;
                p=p->next;
                delete temp;
            
            }
        }
    }
};
int main()
{
    linkedList l1;
    l1.insertNode(7);
    l1.insertNode(17);
    l1.insertNode(5);
    l1.insertNode(15);
    l1.insertNode(25);
    l1.insertNode(15);

    l1.display();
    //l1.addList();
    l1.erase(7);
    l1.erase(5);
    l1.erase(25);
    l1.display();
    
 
}
