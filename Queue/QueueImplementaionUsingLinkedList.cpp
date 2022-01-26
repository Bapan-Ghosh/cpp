#include <iostream>
using namespace std;

class Node
{
    public :
    int data;
    Node *link;

    Node(int value){
        data = value;
        link = NULL;
    }
};

Node *front = NULL;
Node *rear = NULL;

bool isempty()
{
    if (front == NULL && rear == NULL){
        return true;
    }
        return false;
}

void enqueue(int value)
{
    Node *ptr = new Node(value);

    if (front == NULL)
    {
        front = ptr;
        rear = ptr;
    }
    else
    {
        rear->link = ptr;
        rear = ptr;
    }
}

void dequeue()
{
    if (front == NULL || front>rear)
        cout << "Queue is empty\n";
    else
    {
        Node *ptr = front;
        front = front->link;
        delete ptr;
    }
}

void showfront()
{
    if (front == NULL || front>rear)
        cout << "Queue is empty\n";
    else
        cout << "element at front is:" << front->data;
}

void displayQueue()
{
    if (front == NULL || front>rear)
        cout << "Queue is empty\n";
    else
    {
        Node *ptr = front;
        while (ptr != NULL)
        {
            cout << ptr->data << " ";
            ptr = ptr->link;
        }
    }
}

int main()
{
    int choice, flag = 1, value;
    while (flag == 1)
    {
        cout << "\n1.enqueue 2.dequeue 3.showfront 4.displayQueue 5.exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter Value:\n";
            cin >> value;
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            showfront();
            break;
        case 4:
            displayQueue();
            break;
        case 5:
            flag = 0;
            break;
        }
    }

    return 0;
}