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

int height(Node *root){
    if(root == NULL){
        return 0;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    return max(lh,rh)+1;
}

bool isBalanced(Node *root){
    if(root == NULL){
        return true;
    }
    if (isBalanced(root->left) == false){
        return false;
    }
    if (isBalanced(root->right) == false){
        return false;
    }
    int lh = height(root->left);
    int rh = height(root->right);
    if(abs(lh - rh) <= 1){
        return true;
    }
    else
    {
        return false; 
    }
}

int main(){
    Node *root1 = new Node(1);
    root1->left = new Node(2);
    root1->left->left = new Node(3);
    // root1->right = new Node(55);
    if(isBalanced(root1)){
        cout<<"Balanced tree";
    }
    else
    {
        cout<<"Unbalanced tree";
    }
    return 0;
}