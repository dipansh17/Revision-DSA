#include<bits/stdc++.h>
using namespace std;
int main(){
    //creation
    // FIFO order
    queue<int>q;
    q.push(3);
    q.push(32);
    q.push(1);
    q.push(2);
    q.push(12);
    q.push(24);
    //size of queue
    cout<<"the size of queue is: "<<q.size()<<endl;
    //removing element
    q.pop();
    cout<<"the size of queue is: "<<q.size()<<endl;
    cout<<"The Front element is:"<<q.front()<<endl;
    cout<<"The rear element is:"<<q.back()<<endl;
    return 0;
}