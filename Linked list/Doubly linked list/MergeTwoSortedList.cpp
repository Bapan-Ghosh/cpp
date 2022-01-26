#include <bits/stdc++.h>
using namespace std;

class node
{
    public :
    int data;
    node *next, *prev;
    node(int data)
    {
        this->data = data;
        next = NULL;
        prev = NULL;
    }
};

void display(node *&head)
{
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
    cout << "NULL";
    cout << endl;
}

void insertLast(node *&head, int data)
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

node *merge(node *&head1, node *&head2)
{
    node *p1 = head1;
    node *p2 = head2;
    node *dummyNode = new node(-1);
    node *p3 = dummyNode;
    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }
    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }
    return dummyNode->next;
}

int main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    int ch, data;
    int c = 1;
    cout << "Enter the data for first node " << endl;
    while (c != 0)
    {
        cout << "Enter\n1. If you want to enter data :\n2.If you don't want \n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter the data " << endl;
            cin >> data;
            insertLast(head1, data);
            break;
        case 2:
            c = 0;
            break;
        }
    }
    cout << "*****Enter the data for second node******* " << endl;
    int k = 1;
    while (k != 0)
    {
        cout << "Enter\n1. If you want to enter data :\n2.If you don't want \n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter the data " << endl;
            cin >> data;
            insertLast(head2, data);
            break;
        case 2:
            k = 0;
        }
    }
    cout<<"Before merge :"<<endl;
    display(head1);
    display(head2);
    node *newhead = merge(head1, head2);
    display(newhead);
    return 0;   
}