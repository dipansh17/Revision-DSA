#include<bits/stdc++.h>
using namespace std;
void reverseQueue(queue<int>&q){
    stack<int>st;
    while(!(q.empty())){
        int element=q.front();
        
        q.pop();
        st.push(element);
    }
    vector<int>ans;
    while(!st.empty()){
        int ele=st.top();
        
        st.pop();
        q.push(ele);
    }
}
void reverseQueueRec(queue<int>&q){
    if(q.empty())return ;
    int ele=q.front();
    q.pop();
    reverseQueueRec(q);
    q.push(ele);
}
int main(){
    
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    // reverseQueue(q);
    reverseQueueRec(q);
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}