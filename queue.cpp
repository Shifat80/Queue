#include <iostream>
using namespace std;
class Queue
{
    int *arr;
    int front;
    int rear;
    int size;

public:
    Queue(int s)
    {
        arr = new int[s];
        size = s;
        front = rear = -1;
    }
    // if queue is empty
    bool Isempty()
    {
        return front == -1;
    }
    // if queue is full
    bool isfull()
    {
        return (rear+1)% size== front;
    }
    void push(int x)
    {
        if (Isempty())
        {
            cout<<"Pushed-"<<x<<" into the queue"<<endl;
            front = rear = 0;
            arr[0] = x;
            return;
        }
        else if (isfull())
        {
            cout << "Queue is full" << endl;
            return;
        }
        else
        {
            rear=(rear+1)%size;
            arr[rear] = x;
            cout<<"Pushed-"<<x<<" into the queue"<<endl;
        }
    }
    void pop()
    {
        if (Isempty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        else if (front == rear)
        {
            cout << "Poped " << arr[front] << " from the queue" << endl;
            front = rear = -1;
        }
        else
        {
            cout << "Poped " << arr[front] << " from the queue" << endl;
            front=(front+1)%size;
        }
       
    }
     int start()
        {
            if (Isempty())
            {
                cout << "Queue is empty" << endl;
                return -1;
            }
            else
                return arr[front];
        }
};
int main()
{
    Queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
     q.pop();
    q.push(4);
    q.push(5);
   
    q.pop();
    // cout<<q.start();
}
