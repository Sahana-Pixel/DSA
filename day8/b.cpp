#include <iostream>
using namespace std;
#include<bits/stdc++.h>


class Node
{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int val)
    {
        data=val;
        prev=nullptr;
        next=nullptr;
    }
};


void traversal(Node* head)
{
    Node* temp=head;
    while(temp!=nullptr)
    {
        cout<<temp->data<<"->";
        temp=temp->next;

    }
}


void addbegin(Node * &head,int data)
{
    Node* temp=head;
    Node* newnode=new Node(data);
    newnode->next=temp;
    temp->prev=newnode;
    head=head->prev;
}

void addend(Node* head,int data)
{
    Node* temp=head;
    Node* newnode=new Node(50);
    while(temp->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;

}


int main()
{
    Node *head;
    Node *n1=new Node(10);
    head=n1;
    Node* n2=new Node(20);
    n1->next=n2;
    n2->prev=n1;
    Node *n3=new Node(30);
    n2->next=n3;
    n3->prev=n2;
    Node* n4=new Node(40);
    n3->next=n4;
    n4->prev=n3;

    traversal(head);cout<<endl;
    addbegin(head,20);
    traversal(head);cout<<endl;
    addend(head,50);
    traversal(head);cout<<endl;

    return 0;


}