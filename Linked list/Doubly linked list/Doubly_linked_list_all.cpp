#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int data)
    {
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};

void insertAtBegnning(node *&head, int data)
{
    node *new_node = new node(data);
    if (head == NULL)
    {
        head = new_node;
    }
    else
    {
        head->prev = new_node;
        new_node->next = head;
        head = new_node;
    }
}

void insertAtLast(node *&head, int data)
{
    node *new_node = new node(data);
    if (head == NULL)
    {
        head = new_node;
    }
    else
    {
        node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new_node;
        new_node->prev = ptr;
    }
}

void insertAtAnyPosition(node *&head, int data, int position)
{
    if (head == NULL)
    {
        cout << "List is empty "<<endl;
    }
    else
    {
        node *new_node = new node(data);
        node *next = head;
        node *prev;
        int c = 1;
        while (c != position)
        {
            prev = next;
            next = next->next;
            c = c + 1;
        }
        new_node->prev = prev;
        new_node->next = prev->next;
        prev->next = new_node;
        next->prev = new_node;
    }
}

void deleteAtFirst(node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty "<<endl;
    }
    else
    {
        node *ptr = head;
        head = ptr->next;
        ptr->next->prev = NULL;
        delete ptr;
    }
}

void deleteAtLast(node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty "<<endl;
    }
    else
    {
        node *ptr = head;
        node *prev;
        while (ptr->next != NULL)
        {
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = NULL;
        delete ptr;
    }
}

void reverse(node *&head){
    if(head == NULL){
        cout<<"List is empty";
        return;
    }
    node *prevPtr = NULL,*nextPtr;
    node *currPtr = head;
    while(currPtr != NULL){
          nextPtr = currPtr->next;
          prevPtr = currPtr->prev;
          currPtr->prev = currPtr->next;
          currPtr->next = prevPtr;
          currPtr = nextPtr;
    }
    head = prevPtr->prev;
}

void display(node *&head)
{
    if(head == NULL)
    {
        cout<<"List is empty"<<endl;
    }
    else
    {
        node *ptr = head;
        while(ptr != NULL){
            cout<<ptr->data<<"->";
            ptr = ptr->next;
        }
        cout<<endl;
    }
}

int main()
{
    int data,position;
    node *head = NULL;
    while (1)
    {
        int ch;
        cout << "Enter your choice \n 1: Insert at beginning\n 2: Insert at end\n 3: Insert at any position\n 4: Delete from first\n 5: Delete from last \n6:Display \n7:Reverse\n8:exit\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter the value : ";
            cin >> data;
            insertAtBegnning(head, data);
            break;
        case 2:
            cout << "Enter the value : ";
            cin >> data;
            insertAtLast(head, data);
            break;
        case 3:
            cout << "Enter the position ";
            cin >> position;
            cout << "Enter the value : ";
            cin >> data;
            insertAtAnyPosition(head, data, position);
            break;
        case 4:
            deleteAtFirst(head);
            break;
        case 5:
            deleteAtLast(head);
            break;
        case 6:
            display(head);
            break;
        case 7:
            reverse(head);
            break;
        case 8:    
            exit(0);
        default:
            cout << "You have entered a wrong choice :";
            break;
        }
    }
    return 0;
}
