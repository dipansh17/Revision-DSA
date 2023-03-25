#include<bits/stdc++.h>
using namespace std;
class Stack{
public:
int*arr;
int top;
int size;
Stack(int size){
arr=new int[size];
top=-1;
this->size=size;
}
void push(int data){
    if(top==size-1){
        cout<<"stack Overflow"<<endl;
    return;
    }

    top++;
    arr[top]=data;
}
void pop(){
    if(top==-1){
        cout<<"Stack underflow"<<endl;
        return ; 
    }
    top--;
}
int getSize(){
    return this->top+1;
}
bool isEmpty(){
    if(top==-1)return 1;
    else return 0;
}
int getTop(){
    if(top!=-1)
    return arr[top];
    else return -1;
}
};
void insertAtBottom(stack<int>&st,int ele){
    if(st.empty()){
        st.push(ele);
        return;
    }
    int topEle=st.top();
    st.pop();
    insertAtBottom(st,ele);
    st.push(topEle);
}
void reverseSt(stack<int>&st){
    if(st.empty())return;
    int ele=st.top();
    st.pop();
    //reverse
    reverseSt(st);
    //bottom mai insert krdo
    insertAtBottom(st,ele);
}
void findMid(stack<int>&st,int totalSize){
    if(totalSize==0) return ;
if((totalSize/2)+1 ==st.size()){
  cout<<"the midddle element is:"<<st.top()<<endl;
  return ;
}
int ele=st.top();
st.pop();
findMid(st,totalSize);
st.push(ele);
}
//reverse a string using stack
string revStr(string s){
    stack<char>st;
    for(auto x:s){
        st.push(x);
    }
    string ans="";
    while(!st.empty()){
        ans+=st.top();
        st.pop();
    }
    return ans;

}
int main(){
/*0stack<int>st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
while(!st.empty()){ 
    cout<<st.top()<<" ";
    st.pop();
}
*/
//homework->
/**
 * stack stl
*/
/*
Stack*st=new Stack(5);
cout<<st->getTop()<<endl;

cout<<st->getSize()<<endl;
cout<<st->isEmpty()<<endl;
*/
//task-1
// int n;
// cin>>n;
// stack<int>st;
// while(n--){
//     int temp;
//     cin>>temp;
//     st.push(temp);
// }
// while(!st.empty()){
//     cout<<st.top()<<" ";
//     st.pop();
// }


// stack<int>st;
// st.push(1);
// st.push(2);
// st.push(3);
// st.push(4);
// st.push(5);
// st.push(6);
// // findMid(st,st.size());
// reverseSt(st);
// while(!st.empty()){
//     cout<<st.top()<<" ";
//     st.pop();
// }
string str="LOVE";
cout<<revStr(str)<<endl;
    return 0;
}