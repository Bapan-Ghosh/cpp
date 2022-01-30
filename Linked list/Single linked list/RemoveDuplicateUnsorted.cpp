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

void removeDuplicate(node *&head){
    if(head == NULL){
        cout<<"Empty list";
    }
    
    node *curr = head;
    node *currNxt;
    while(curr != NULL){
         currNxt = curr->next;
         node *prev = curr;

         while(currNxt != NULL){
              if(curr->data == currNxt->data){
                  prev->next = currNxt->next;
                  free(currNxt);
                  currNxt = prev->next; 
              }
              else
              {   prev = prev->next;
                  currNxt = currNxt->next;
              }
         }
         curr = curr->next;
    } 
}

void print(node *&head){
    if(head == NULL)
      cout<<"Empty";
    else
    {
      node *ptr = head;  
      while(ptr != NULL){
          cout<<ptr->data<<"->";
          ptr = ptr->next;
      }
      cout<<"NULL";
    }  
}

int main()
{
    node *head = NULL;
    insertAtLast(head,3);
    insertAtLast(head,8);
    insertAtLast(head,1);
    insertAtLast(head,2);
    insertAtLast(head,3);
    insertAtLast(head,1);
    insertAtLast(head,2);
    insertAtLast(head,4);
    insertAtLast(head,3);
    insertAtLast(head,1);
    insertAtLast(head,9);
    insertAtLast(head,9);
    insertAtLast(head,9);
    removeDuplicate(head);
    print(head);
    
}