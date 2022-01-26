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

void insertAtBeginning(node *&head, int data){
    node *new_node = new node(data);
    if(head == NULL){
        head = new_node;
        new_node->next = new_node;
    }
    else
    {
        node *ptr = head;
        while(ptr->next != head){
            ptr = ptr->next; 
        }
        ptr->next = new_node;
        new_node->next = head;
        head = new_node;
    }
}

void insertAtLast(node *&head, int data){
    node *new_node = new node(data);
    if(head == NULL){
        head = new_node;
        new_node->next = new_node;
    }
    else
    {
        node *ptr = head;
        while(ptr->next != head){
            ptr = ptr->next;
        }
        new_node->next = ptr->next;
        ptr->next = new_node;
    }
}

void deleteFirst(node *&head){
    node *ptr = head;
    if(head == NULL){
        cout<<"List is empty ";
    }
    else
      if(ptr->next == head){
        delete ptr;
        head = NULL;
    }
    else
    {
        node *ptr1 =head;
        while(ptr->next != head){
            ptr = ptr->next;
        }
        head = ptr1->next;
        ptr->next = head;
        delete ptr;
    }
}

void deleteLast(node *&head){
     node *ptr = head;
    if(head == NULL){
        cout<<"List is empty ";
    }
    else
      if(ptr->next == head){
        delete ptr;
        head = NULL;
    }
    else
    { 
      node *prev = head;
      while(ptr->next != head){
          prev = ptr;
          ptr = ptr->next;
      }
      prev->next = ptr->next;
      delete ptr;
    }
}

void display(node *&head){
    node *ptr = head;
    if(head == NULL){
        cout<<"List is empty nothing to display";
    }
    else
    {
    do{
         cout << ptr->data << "->";
         ptr = ptr->next;
    }while(ptr != head);
    cout<<"NULL";
    cout<<endl;
    }
}

int main()
{
    node *head = NULL;
    int ch,data;
    while(1){
        cout<<"Enter \n1. insert first \n2. insert last \n3. delete first \n4. delete Last \n5. display\n6. exit\n";
        cin>>ch;
        switch(ch){
            case 1:
               cout<<"Enter the value";
               cin>>data;
               insertAtBeginning(head,data);
               break;
            case 2:
               cout<<"Enter the value";
               cin>>data;
               insertAtLast(head,data);
               break;
            case 3:
               deleteFirst(head);
               break;
            case 4:
               deleteLast(head);
               break;
            case 5:      
               display(head);
               break;
            case 6:
               exit(0);
            default:
               cout<<"You have entered a wrong choice ";                        
        }
    }
    return 0;
}