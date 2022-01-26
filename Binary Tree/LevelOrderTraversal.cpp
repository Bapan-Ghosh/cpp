// video number 96
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left,*right;
    Node(int data){
       this->data = data;
       left = right = NULL;
    }
};

void printLevelOrder(Node *root){
     if(root == NULL){
         return;
     }
     queue<Node*>q;
     q.push(root);
     q.push(NULL);
     while(!q.empty()){
         Node *node = q.front();
         q.pop();
         if(node != NULL){
             cout<<node->data<<" ";
             if(node->left)
               q.push(node->left);
             if(node->right)
               q.push(node->right);  
         }
         else if(!q.empty()){
             q.push(NULL);
         }
     }
}

int main(){
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->left = new Node(5);
    printLevelOrder(root);
    return 0;
}