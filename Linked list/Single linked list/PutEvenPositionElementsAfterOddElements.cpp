#include<bits/stdc++.h>
using namespace std;

class node{
    public :
    int data;
    node *next;
    node(int data){
        this->data = data;
        next = NULL;
    }
};

void insertAtLast(node *&head, int data){
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

void display(node *&head){
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
        cout<<"NULL";
        cout<<endl;   
    }
}

void putEvenAfterOdd(node *&head){
    if(head == NULL){
        cout<<"List is empty ";
    }
    else
   {
    node *odd = head;
    node *even = head->next;
    node *evenStart = even;

    while (even->next != NULL && odd->next != NULL)
    {
        odd->next = even->next;
        odd = odd->next;
        if (odd->next != NULL)
        {
            even->next = odd->next;
            even = even->next;
        }
    }
    even->next = NULL;
    odd->next = evenStart;
   }
}

int main()
{
    node *head = NULL;
    int ch,data;
    int i=0;
    while(i != 1){
        cout<<"Enter \n1. insert first \n2.exit\n";
        cin>>ch;
        switch(ch){
            case 1:
               cout<<"Enter the value";
               cin>>data;
               insertAtLast(head,data);
               break;
            case 2:
               i = 1;
               break;
            default:
               cout<<"You have entered a wrong choice ";                        
        }
    }
    display(head);
    putEvenAfterOdd(head);
    display(head);  
    return 0;
}