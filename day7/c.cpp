#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* prev;
    Node* next;

    Node(int data)
    {
        this->data = data;
        prev = nullptr;
        next = nullptr;
    }
};

void displayForward(Node* head)
{
    Node* temp = head;

    while(temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void displayBackward(Node* head)
{
    if(head == nullptr) return;

    Node* temp = head;

    while(temp->next != nullptr)
    {
        temp = temp->next;
    }

    while(temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insertAtEnd(Node* &head, int value)
{
    Node* newNode = new Node(value);

    if(head == nullptr)
    {
        head = newNode;
        return;
    }

    Node* temp = head;

    while(temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

int main()
{
    Node* head = nullptr;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);

    cout << "Forward: ";
    displayForward(head);

    cout << "Backward: ";
    displayBackward(head);

    return 0;
}