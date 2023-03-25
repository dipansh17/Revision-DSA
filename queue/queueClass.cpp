#include<bits/stdc++.h>
using namespace std;
// arr,front,rear,size
class Queue{
    //array 
  public:
  int*arr;
  int front;
  int rear;
  int size;
    Queue(int n){
         arr=new int[n];
         front=0;
         rear=0;
         size=n;
    }
    void push(int element){
        if(rear==size){
            cout<<"Overflow Hogya"<<endl;
            return;
        }
        else{
            arr[rear]=element;
            rear++;
        }
    }
    void pop(){
        if(rear==front){
            cout<<"underflow hogya"<<endl;
            return;
        }
        else{
            arr[front]=-1;
            front++;
            if(front==rear){
                rear=front=0;
            }
        }
    }
    bool isEmpty(){
        if(front==rear)return 1;
        else return 0;
    }
    int getSize(){
        //wrong?
     return rear-front;
    }
    int getFront(){
        if(front==rear)return -1;
        else
        return arr[front];
    }
    
};


//  linked list
//circular QUEUE
class CircularQueue{
    public:
    int*arr;
    int front;
    int rear;
    int size;
    CircularQueue(int s){
        arr=new int[s];
        size=s;
        front=rear=-1;
    }
    void enqueue(int element){
        //overflow
        if((front==0 && rear==size-1) || (rear==(front-1)%size)){
            cout<<"overflow Hogya BRO"<<endl;
            return;
        }
        else if(front==-1){
            // first element Insertion
            front=rear=0;
        }
        else if(rear==size-1 && front!=0){
            //handle circular insertion Case
            rear=0;
        }
        else{
            // normal insertion case ->no corner case

            rear++;
        }
        arr[rear]=element;
        
    }
    void dequeue(){
        //underflow 
        if(front==-1){
            cout<<"underflow hogya "<<endl;
            return;
        }
        else if(front==rear){
            //single element
            front=rear=-1;
        }
        else if(front==size-1){
            //circular nature
            front=0;
        }
        else{
            //normal
            front++;
        }
    }
    bool isEmpty(){
        if(front==-1)return 1;
        else return 0;
    }
    int getFront(){
        if(front==-1)return -1;
        else
        return arr[front];

    }
};

int main(){
    // Queue* q=new Queue(5);
    // q->push(5);
    // q->push(10);
    // q->push(15);
    // q->push(20);
    // q->push(25);
    // cout<<"the front element is: "<<q->getFront()<<endl;
    // q->pop();
    // cout<<"the front element is: "<<q->getFront()<<endl;
    // cout<<"The size of queue is: "<<q->getSize()<<endl;
    // cout<<"empty or not "<<q->isEmpty()<<endl;

    // while(!q->isEmpty()){
    //     cout<<"The front is: "<<q->getFront()<<endl;
    //     q->pop();
    // }
    CircularQueue*q=new CircularQueue(5);
    q->enqueue(5);
    q->enqueue(10);
    q->enqueue(15);
    q->enqueue(20);
    cout<<"The front element is: "<<q->getFront()<<endl;
    q->dequeue();
    q->enqueue(100);
    cout<<"The front element is: "<<q->getFront()<<endl;
     q->enqueue(12);
    cout<<"The front element is: "<<q->getFront()<<endl;
    while(!(q->isEmpty())){
        cout<<q->getFront()<<" ";
        q->dequeue();
    }
        return 0;
}