#include<bits/stdc++.h>
using namespace std;

#define n 100

class Stack{
    int *arr;
    int top;

    public:
    Stack(){
        arr = new int[n];
        top = -1;
    } 

    void push(int data){
        if(top == n-1){
           cout<<"Stack is overflow"<<endl;
           return;
        }
            top++;
            arr[top] = data;
    }

    void pop(){
        if(top == -1){
            cout<<"Stack is underflow";
            return;
        }
            top--;          
    }

    int Top(){
        if(top == -1){
            cout<<"Stack is underflow";
            return -1;
        }
        return arr[top];
    }

    bool isEmpty(){
        if(top == -1){
            return true;
        }
        return false;
    }

    bool isFull(){
        if(top == n-1){
            return true;
        }
        return false;
    }
};

int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    cout<<st.isEmpty()<<endl;
    st.pop();
    return 0;
}