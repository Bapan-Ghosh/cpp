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

void display(node *&head)
{
    node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
    cout<<"NULL";
    cout<<endl;
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

void intersect(node *&head1, node *&head2, int pos){
    node * temp1 = head1;
    pos--;
    while(pos--){ // upto 0
        temp1 = temp1->next;
    }
    // while(pos != 1){
    //     temp1 = temp1->next;
    //     pos--;
    node * temp2 = head2;
    while(temp2->next != NULL){
        temp2 = temp2->next;
    }
    temp2->next =temp1;
}

int length(node *head)
{
    node *ptr = head;
    int l = 0;
    while (ptr != NULL)
    {
        ptr = ptr->next;
        l++;
    }
    return l;
}

int intersection(node *head1, node *head2)
{
    int len1 = length(head1);
    int len2 = length(head2);
    int d;
    node *ptr1;
    node *ptr2;
    if (len1 > len2)
    {
        d = len1 - len2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else
    {
        d = len2 - len1;
        ptr1 = head2;
        ptr2 = head1;
    }
    while (d)  //(d != 0)
    {
        if (ptr1 == NULL)
        {
            return -1;
        }
         ptr1 = ptr1->next;
        d--;
    }
    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1->data == ptr2->data)
        {
            return ptr1->data;
        }
        else
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
    }
    return -1;
}

int main()
{
    node *head1 = NULL;
    node *head2 = NULL;
    int ch, data;
    int c=1;
    cout << "Enter the data for first node " << endl;
    while (c !=0)
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
        while (k !=0)
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
        int pos;
        cout<<"Enter the point of intersection : ";
        cin>>pos;
        intersect(head1, head2, pos);
        display(head1);
        display(head2);
        cout<<"intersecting value"<<intersection(head1,head2);
        return 0;
}   