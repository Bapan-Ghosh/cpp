#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        next = NULL;
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
    }
}

void insertAtAnyPosition(node *&head, int data, int position)
{
    int c = 1;
    node *new_node = new node(data);
    if (head == NULL)
    {
        cout << "List is empty "<<endl;
    }
    else
    {
        node *ptr = head;
        while (c != position - 1)
        {
            c = c + 1;
            ptr = ptr->next;
        }
        new_node->next = ptr->next;
        ptr->next = new_node;
    }
}

void deleteAtFirst(node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty deletion is not possible"<<endl;
    }
    else
    {
        node *deleteNode = head;
        head = deleteNode->next;
        delete deleteNode;
    }
}

void deleteAtLast(node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty deletion is not possible"<<endl;
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

void deleteAtAnyPosition(node *&head, int position)
{
    if (head == NULL)
    {
        cout << "List is empty deletion is not possible"<<endl;
    }
    else
    {
        int c = 1;
        node *ptr = head;
        node *prev;
        while (c != position)
        {
            c = c + 1;
            prev = ptr;
            ptr = ptr->next;
        }
        prev->next = ptr->next;
        delete ptr;
    }
}

void reverseList(node *&head)
{
    node *previousptr = NULL;
    node *currentptr = head;
    node *nextptr;
    while (currentptr != NULL)
    {
        nextptr = currentptr->next;
        currentptr->next = previousptr;

        previousptr = currentptr;
        currentptr = nextptr;
    }
    head = previousptr;
}

void display(node *&head)
{
    node *temp = head;
    if (head == NULL)
    {
        cout << "List is empty "<<endl;
    }
    else
    {
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout<<endl;
    }
}

int main()
{
    node *head = NULL;
    int data,position;

    // while(1) => means infinite loop
    while (1)
    {
        int ch;
        cout << "Enter your choice \n 1: Insert at beginning\n 2: Insert at end\n 3: Insert at any position\n 4: Delete from first\n 5: Delete from last\n 6: Delete from any position \n7: Reverse the list \n8:Display \n9:exit\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter the value : ";
            cin >>data;
            insertAtBegnning(head,data);
            break;
        case 2: 
            cout << "Enter the value : ";
            cin >> data;
            insertAtLast(head,data);
            break;
        case 3:
            cout<<"Enter the position ";
            cin>>position;
            cout << "Enter the value : ";
            cin >>data;
            insertAtAnyPosition(head,data,position);
            break;
        case 4:
            deleteAtFirst(head);
            break;
        case 5:
            deleteAtLast(head);
            break;
        case 6:
            cout<<"Enter the position ";
            cin>>position;
            deleteAtAnyPosition(head,position);
            break;
        case 7:
            reverseList(head);
            break;
        case 8:
            display(head);
            break;
        case 9:
            exit(0) ;    
        default :
           cout<<"You have entered a wrong choice :";
           break;
        }
    }
    return 0;
}