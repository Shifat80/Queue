#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int value):data(value),next(nullptr){}
};
class queue{
    public:
    Node *front;
    Node *rear;
    queue(){
        front=nullptr;
        rear=nullptr;
    } 
    bool ismepty(){
        return front==nullptr;
    }
    void push(int value){
        if(ismepty()){
            cout<<"Pushed "<<value<<" into the queue"<<endl;
            front=rear=new Node(value);
            return;
        }
        else{
            cout<<"Pushed "<<value<<" into the queue"<<endl;
            rear->next=new Node(value);
            rear=rear->next;

        }
    }
    void pop(){
        if(ismepty()){
            cout<<"Queue is empty"<<endl;
        }
        else{
            cout<<"Poped "<<front->data<<" from the queue"<<endl;
            Node *temp=front;
            front=front->next;
            delete temp;
        }
    }
    int start(){
        if(ismepty()){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        else{
            return front->data;
        }
    }
};
int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);

}