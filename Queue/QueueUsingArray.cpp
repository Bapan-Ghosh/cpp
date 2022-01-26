#include <bits/stdc++.h>
using namespace std;

#define n 100

class queuee
{
private:
    int *a;
    int front;
    int rear;
public:
    queuee()
    {
        a = new int[n];
        front = rear = -1;
    }

    void enque(int data)
    {
        if (rear == n - 1)
        {
            cout << "Overflow" << endl;
            return;
        }
        rear = rear + 1;
        a[rear] = data;

        if (front == -1)
        {
            front++;
        }
    }

    void deque()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is empty" << endl;
            return;
        }
        front = front + 1;
    }

    int peek()
    {
        if (front == -1 || front > rear)
        {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return a[front];
    }
    
    bool empty()
    {
        if (front == -1 || front > rear)
        {
            return true;
        }
        return false;
    }

    bool full()
    {
        if (rear == n - 1)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    queuee q;
    q.enque(5);
    q.enque(6);
    q.enque(7);

    cout << q.peek() << endl;
    q.deque();

    cout << q.peek() << endl;
    q.deque();

    // cout<<q.peek()<<endl;
    // q.deque();

    if (q.empty())
    {
        cout << "empty";
    }
    else
    {
        cout << "Queue is not empty";
    }
    return 0;
}