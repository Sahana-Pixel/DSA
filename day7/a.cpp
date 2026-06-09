#include <iostream>
using namespace std;
#include<bits/stdc++.h>


class Node
{
    public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val=val;
        next=nullptr;
    }
};

void addnode(Node* &head,int data)
{
    Node* temp=head;
    Node* newnode=new Node(data);
    while(temp->next)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}

void addmiddle(Node* &head,int data,int pos)
{
    Node *temp=head;
    Node *newnode=new Node(data);
    int count=1;
    while(count!=pos)
    {
        count++;
        temp=temp->next;
    }
    Node *temp1=temp->next;
    temp->next=newnode;
    newnode->next=temp1;


}

void addbegin(Node* &head,int data)
{
    Node *temp=head;
    Node *newnode=new Node(data);
    newnode->next=temp;
    head->next=newnode;

}
 
void display(Node* &head)
{
    Node* temp=head;
    while(temp)
    {
        cout<<temp->val<<"->";
        temp=temp->next;
    }
}

// void removefirst(Node* &head)
// {
//     Node* temp=head;
//     head=temp->next;
//     temp->next=nullptr;
// }


void deletemiddle(Node* head,int pos)
{
    Node* temp=head;
    int c=1;
    Node* t2;
    while(pos-1!=c)
    {
        temp=temp->next;
        c++;
    }
    t2=temp->next->next;
    temp->next=t2;
}

void deleteend(Node* head)
{
    Node* temp=head;
    while(temp->next->next!=nullptr)
    {
        temp=temp->next;
    }
    temp->next=nullptr;
}

void deletebegin(Node* head)
{
    Node* temp=head;
    temp=temp->next;
    head=temp;
}


int main()
{
    Node* n1=new Node(10);
    Node* n2=new Node(20);
    n1->next=n2;


    Node *head =n1;
    addnode(head,30);
    display(head);
    addmiddle(head,50,2);
    cout<<"\n";
    display(head);
    addbegin(head,60);
    cout<<"\n";
    display(head);
    // removefirst(head);
    cout<<"\n";
    display(head);


    return 0;


}